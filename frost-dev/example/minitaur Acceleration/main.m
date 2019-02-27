% Main script

%% Setting up path
clear; close all; clc;

set(0, 'DefaultAxesFontSize', 24);
set(0, 'DefaultLineMarkerSize', 10);
set(0,'defaultfigurecolor',[1 1 1]);
set(0,'DefaultAxesXGrid','off','DefaultAxesYGrid','off')
set(groot,'defaulttextinterpreter','latex');
set(groot, 'defaultAxesTickLabelInterpreter','latex');
set(groot, 'defaultLegendInterpreter','latex');

restoredefaultpath; matlabrc;
frost_path  = '../../';
addpath(frost_path);
frost_addpath;
addpath(genpath('process'));
%Hi Joe
%Yo
export_path = 'gen/opt';
load_path   = [];
utils.init_path(export_path);

trialName = 'maxDistanceBrakeLegsWithTailG4MinGRFMu05';

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
% urdf = fullfile(cur,'urdf','minitaurAccurate.urdf');
% urdf = fullfile(cur,'urdf','minitaurWithTailBackOffsetAccurateG4.urdf');
% urdf = fullfile(cur,'urdf','minitaurWithTailBackOffsetAerodynamic.urdf');
% urdf = fullfile(cur,'urdf','minitaurWithTailBackOffsetAerodynamicG4.urdf');
% urdf = fullfile(cur,'urdf','minitaurWithTailBackOffsetAerodynamicRealistic.urdf');
% urdf = fullfile(cur,'urdf','minitaurWithTailBackOffsetAerodynamicRealisticG4.urdf');

delay_set = true;
%% load robot model
tic
robot = sys.LoadModel(urdf, load_path, delay_set);
% exo_disp = plot.LoadRobotDisplay(robot);

% load hybrid system
% system = sys.LoadSystem(robot, load_path);
% system.compile(export_path);

bounds = opt.GetBounds(robot);

% load problem
nlp = opt.LoadProblem(robot, bounds, load_path);
toc
%% Compile stuff if needed

% compileObjective(nlp,[],[],export_path);
% compileConstraint(nlp,[],[],export_path);
% compileConstraint(nlp,[],[],export_path, {'dynamics_equation'});
% compileConstraint(nlp,[],{'dynamics_equation'},export_path);
compileConstraint(nlp,[],{'motorModelPos','motorLimitPos','motorModelNeg','motorLimitNeg'},export_path);
% compileConstraint(nlp,[],{'fDragModel'},export_path);
% compileConstraint(nlp,[],{'uRIL','uRIB'},export_path);
% compileConstraint(nlp,[],{'jointAngFinalState'},export_path);
% compileConstraint(nlp,[],{'minFinalForwardVel'},export_path);
compileConstraint(nlp,[],{'zeroRotation'},export_path);

% % Save expression 
% load_path   = 'gen/sym';
% robot.saveExpression(load_path); % run this after loaded the optimization problem

%% Update Initial Condition

% temp = load('local/current_gait.mat');
% temp = load(['local/', trialName,'.mat']);
% temp = load('local/avgAccelerationForwardLegs.mat');

% temp = load('local/maxVelocityBrakeLegs.mat');
% temp = load('local/maxVelocityBrakeLegsWithTail.mat');
% temp = load('local/maxVelocityBrakeLegsWithAeroTail.mat');

% temp = load('local/avgAccelerationBrakeLegs.mat');
% temp = load('local/avgAccelerationBrakeLegsWithTail.mat');
% temp = load('local/avgAccelerationBrakeLegsWithAeroTail.mat');

% temp = load('local/avgAccelerationBrakeLegsMinVelMinGRFMu06.mat');
% temp = load('local/avgAccelerationBrakeLegsMinVelMinGRFMu05.mat');

temp = load('local/avgAccelerationBrakeLegsWithTailMinVel.mat');
% temp = load('local/avgAccelerationBrakeLegsWithAeroTailMinVel.mat');
% temp = load('local/avgAccelerationBrakeLegsWithRealisticAeroTailMinVel.mat');

% temp = load('local/avgAccelerationBrakeLegsWithTailMinVelG4.mat');
% temp = load('local/avgAccelerationBrakeLegsWithAeroTailMinVelG4.mat');
% temp = load('local/avgAccelerationBrakeLegsWithRealisticAeroTailMinVelG4.mat');
% temp = load('local/avgAccelerationBrakeLegsWithRealisticInactiveAeroTailMinVelG4.mat');
% temp = load('local/avgAccelerationBrakeLegsWithTailMinVelG4MinGRFMu05.mat');


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
[gait, sol, info] = opt.solve(nlp);
% [gait, sol, info] = opt.solve(nlp, sol);
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

finalVelocity = gait(end).states.dx(1,end)
avgAcceleration = gait(end).states.dx(1,end)/gait(end).tspan(end)

g = -9.81;
yFinal = sind(60)*0.24;
tTD = (-fullgait.states.dx(3,end) - sqrt(fullgait.states.dx(3,end).^2 - 4*(g/2)*(fullgait.states.x(3,end) - yFinal)))/g;
Distance = fullgait.states.x(1,end) + fullgait.states.dx(1,end)*tTD

save('local/current_gait.mat','nlp','gait','sol','info','bounds', 'avgAcceleration','finalVelocity', 'Distance');

reply = input(['Save as trial name ', trialName, '? Y/N: '],'s');
if strcmp(reply, 'y')
    save(['local/', trialName,'.mat'],'nlp','gait','sol','info','bounds', 'avgAcceleration','finalVelocity', 'Distance')
    disp('Saved');
end
% save(['local/', trialName,'.mat'],'nlp','gait','sol','info','bounds', 'avgAcceleration','finalVelocity');

% save('local/initialAccel.mat','nlp','gait','sol','info','bounds', 'avgAcceleration', 'finalVelocity');
% save('local/initialAccelWithTailBackOffset.mat','nlp','gait','sol','info','bounds', 'avgAcceleration', 'finalVelocity');
% save('local/avgAccelerationBrakeLegsWithTailBackOffset.mat','nlp','gait','sol','info','bounds', 'avgAcceleration', 'finalVelocity');

% save('local/maxVelocityBrakeLegs.mat','nlp','gait','sol','info','bounds', 'avgAcceleration', 'finalVelocity');
% save('local/maxVelocityBrakeLegsWithTailBackOffset.mat','nlp','gait','sol','info','bounds', 'avgAcceleration', 'finalVelocity');
% save('local/maxVelocityBrakeLegsWithAeroTailBackOffset.mat','nlp','gait','sol','info','bounds', 'avgAcceleration', 'finalVelocity');

% save('local/avgAccelerationBrakeLegs.mat','nlp','gait','sol','info','bounds', 'avgAcceleration', 'finalVelocity');
% save('local/avgAccelerationBrakeLegsWithTailBackOffset.mat','nlp','gait','sol','info','bounds', 'avgAcceleration', 'finalVelocity');
% save('local/avgAccelerationBrakeLegsWithAeroTailBackOffset.mat','nlp','gait','sol','info','bounds', 'avgAcceleration', 'finalVelocity');

%% Use to record after animation has finished
% % myVideo = VideoWriter('videos/maxVelocityBrakeLegsWithTailBackOffset');
reply = input(['Save video? Don''t forget to resize and play video first. Y/N: '],'s');
if strcmp(reply, 'y')
    myVideo = VideoWriter(['videos/', trialName]);
    open(myVideo);
    writeVideo(myVideo,anim.anim.M);
    close(myVideo);
    
    disp('Saved');
end


