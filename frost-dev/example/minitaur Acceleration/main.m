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

export_path = 'gen/opt';
load_path   = [];
utils.init_path(export_path);

global bAerodynamic
global bTail

bAerodynamic = false;
bTail = false;

trialName = 'maxVelocityForwardLegs2';
%% initialize model settings
cur = utils.get_root_path();
urdf = fullfile(cur,'urdf','minitaurAccurate.urdf');
% urdf = fullfile(cur,'urdf','minitaurWithTailBackOffsetAccurateNoG.urdf');
% urdf = fullfile(cur,'urdf','minitaurWithTailBackOffsetAerodynamic.urdf');

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

compileObjective(nlp,[],[],export_path);
% compileConstraint(nlp,[],[],export_path);
% compileConstraint(nlp,[],[],export_path, {'dynamics_equation'});
% compileConstraint(nlp,[],{'dynamics_equation'},export_path);
% compileConstraint(nlp,[],{'motorModelPos','motorLimitPos','motorModelNeg','motorLimitNeg'},export_path);
% compileConstraint(nlp,[],{'fDragModel'},export_path);
% compileConstraint(nlp,[],{'uRIL','uRIB'},export_path);
compileConstraint(nlp,[],{'jointAngFinalState'},export_path);


% % Save expression 
% load_path   = 'gen/sym';
% robot.saveExpression(load_path); % run this after loaded the optimization problem

%% Update Initial Condition

% temp = load('local/current_gait.mat');
% temp = load(['local/', trialName,'.mat']);

temp = load('local/avgAccelerationForwardLegs.mat');

% temp = load('local/maxVelocityBrakeLegs.mat');
% temp = load('local/maxVelocityBrakeLegsWithTailBackOffset.mat');
% temp = load('local/maxVelocityBrakeLegsWithAeroTailBackOffset.mat');

% temp = load('local/avgAccelerationBrakeLegs.mat');
% temp = load('local/avgAccelerationBrakeLegsWithTailBackOffset.mat');
% temp = load('local/avgAccelerationBrakeLegsWithAeroTailBackOffset.mat');

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
% plotGait = mergeGait(smoothGait);
anim = plot.LoadAnimator(robot, gait,'SkipExporting',true);
%% you can check the violation of constraints/variables and the value of each cost function by calling the following functions.
tol = 1e-3;
checkConstraints(nlp,sol,tol,'local/constr_check.txt'); % 
checkVariables(nlp,sol,tol,'local/var_check.txt'); % 

cost = checkCosts(nlp,sol,'local/cost_check.txt'); % 

finalVelocity = gait(end).states.dx(1,end)
avgAcceleration = gait(end).states.dx(1,end)/gait(end).tspan(end)

save('local/current_gait.mat','nlp','gait','sol','info','bounds', 'avgAcceleration','finalVelocity');

reply = input(['Save as trial name ', trialName, '? Y/N: '],'s');
if strcmp(reply, 'y')
    save(['local/', trialName,'.mat'],'nlp','gait','sol','info','bounds', 'avgAcceleration','finalVelocity')
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


