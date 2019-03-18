% Main script

%% Setting up path
clear; close all; clc;

set(groot,'defaultfigureposition',[400 250 900 750])

restoredefaultpath; matlabrc;
frost_path  = '../../';
addpath(frost_path);
frost_addpath;
addpath(genpath('process'));

export_path = 'gen/opt';
load_path   = [];
utils.init_path(export_path);

trialName = 'maxDecelerationMu05Vel15';

global bAerodynamic
global bTail
global bInactive

bAerodynamic = false;
bTail = false;
bInactive = false;

if contains(trialName, 'Tail')
    bTail = true;
end
if contains(trialName, 'Aero')
    bAerodynamic = true;
end
if contains(trialName, 'Inactive')
    bInactive = true;
end
%% initialize model settings
cur = utils.get_root_path();
if bTail
    if bAerodynamic
        if contains(trialName, 'Realistic')
            urdf = fullfile(cur,'urdf','minitaurWithTailBackOffsetAerodynamicRealisticG4.urdf');
        else
            urdf = fullfile(cur,'urdf','minitaurWithTailBackOffsetAerodynamicG4.urdf');
        end
    else
        urdf = fullfile(cur,'urdf','minitaurWithTailBackOffsetAccurateG4.urdf');
    end
else
    urdf = fullfile(cur,'urdf','minitaurAccurate.urdf');
end

delay_set = true;
%% load robot model
tic
robot = sys.LoadModel(urdf, load_path, delay_set);
% exo_disp = plot.LoadRobotDisplay(robot);

bounds = opt.GetBounds(robot);

% load problem
nlp = opt.LoadProblem(robot, bounds, load_path);
toc
%% Compile stuff if needed

% compileObjective(nlp,[],[],export_path);
% compileConstraint(nlp,[],[],export_path);
% compileConstraint(nlp,[],[],export_path, {'dynamics_equation'});
% compileConstraint(nlp,[],{'dynamics_equation'},export_path);
% compileConstraint(nlp,[],{'motorModelPos','motorLimitPos','motorModelNeg','motorLimitNeg'},export_path);
compileConstraint(nlp,[],{'initState', 'finalState', 'minInitialForwardVel'},export_path);
% compileConstraint(nlp,[],{'jointAngMinimum_Flight', 'jointAngMinimum_FrontStance'},export_path);

% % Save expression 
% load_path   = 'gen/sym';
% robot.saveExpression(load_path); % run this after loaded the optimization problem

%% Update Initial Condition

temp = load('local/current_gait.mat');
% temp = load(['local/', trialName,'.mat']);
% temp = load('local/avgAccelerationForwardLegs.mat');

% temp = load('local/maxDecelerationMinGRFMu05.mat');

% bounds = temp.bounds;
% nlp = temp.nlp;
% robot = temp.robot;
sol = temp.sol;
info = temp.info;
gait = temp.gait;
gait = opt.interpGait(gait, nlp.Phase(1).NumNode);
% cost = temp.cost;

opt.updateInitCondition(nlp,gait);
%% solve
% [gait, sol, info] = opt.solve(nlp);
[gait, sol, info] = opt.solve(nlp, sol);
% [gait, sol, info] = opt.solve(nlp, sol, info);
%% save
save('local/current_gait.mat','nlp','gait','sol','info','bounds');

%% animation
% loopedGait = plot.createLoopedGait(gait);
% anim = plot.LoadAnimator(robot, loopedGait,'SkipExporting',true);

% smoothGait = opt.interpGait(gait, 100);
fullgait = mergeGait(gait);
anim = plot.LoadAnimator(robot, gait,'SkipExporting',true);
%% you can check the violation of constraints/variables and the value of each cost function by calling the following functions.
tol = 1e-3;
checkConstraints(nlp,sol,tol,'local/constr_check.txt'); % 
checkVariables(nlp,sol,tol,'local/var_check.txt'); % 

cost = checkCosts(nlp,sol,'local/cost_check.txt'); % 

results = struct;
results.initialVelocity = gait(1).states.dx(1,1);
results.avgDeceleration = gait(1).states.dx(1,1)/gait(end).tspan(end)

%% Save Results

saveResults(trialName, nlp, gait, sol, info, bounds,results, anim)

% % Save most recent gait (always do this)
% save('local/current_gait.mat','nlp','gait','sol','info','bounds', 'avgDeceleration','initialVelocity');
% 
% % If gait was good and trialName is accurate, save the gait locally with
% % the naming convention in trialName
% reply = input(['Save as trial name ', trialName, '? y/n: '],'s');
% if strcmp(reply, 'y')
%     save(['local/', trialName,'.mat'],'nlp','gait','sol','info','bounds', 'avgDeceleration','initialVelocity')
%     disp('Saved');
% end
% 
% % Prompt user to save the video of the gait locally as an AVI - note that
% % for all video saves, the data in anim.anim.M isn't populated until the
% % video has played
% reply = input(['Save video locally? Don''t forget to play video first. y/n: '],'s');
% if strcmp(reply, 'y')
%     myVideo = VideoWriter(['videos/', trialName]);
%     myVideo.FileFormat = 'mp4';
%     open(myVideo);
%     writeVideo(myVideo,anim.anim.M);
%     close(myVideo);
%     
%     disp('Saved locally');
% end
% 
% % Prompt user if the gait, video, and corresponding minitaur code should be
% % saved to Box (or whatever folder is specified in cloud_path)
% cloud_path = 'C:\Users\Joe Desktop\Box\Robomechanics Lab Shared Files\Minitaur Opt\';
% if exist(cloud_path, 'dir')
%     reply = input(['Save everything to Box? y/n: '],'s');
%     if strcmp(reply, 'y')
%         myVideoBox = VideoWriter([cloud_path,'FROST Videos\', trialName], 'MPEG-4');
%         open(myVideoBox);
%         writeVideo(myVideoBox,anim.anim.M);
%         close(myVideoBox);
%         
%         save([cloud_path,'FROST Gaits\', trialName, '.mat'],'nlp','gait','sol','info','bounds', 'avgDeceleration','initialVelocity')
%         exportTrajectory(fullgait, [cloud_path, 'Minitaur Code\'], ['minitaurCode_', trialName]);
%         disp('Saved to Box');
%     end
% end

