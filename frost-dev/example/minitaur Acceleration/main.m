% Main script

%% Setting up path
clear; close all; clc;
restoredefaultpath; matlabrc;
frost_path  = '../../';
addpath(frost_path);
frost_addpath;
addpath(genpath('process'));

export_path = 'gen/opt';
load_path   = [];
utils.init_path(export_path);

%% initialize model settings
cur = utils.get_root_path();
urdf = fullfile(cur,'urdf','minitaurAccurate.urdf');
% urdf = fullfile(cur,'urdf','minitaurWithTailBackOffsetAccurateNoG.urdf');
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
% compileConstraint(nlp,[],{'motorModelPos','motorLimitPos','motorModelNeg','motorLimitNeg'},export_path);
% compileConstraint(nlp,[],{'paramContR'},export_path);

% % Save expression 
load_path   = 'gen/sym';
robot.saveExpression(load_path); % run this after loaded the optimization problem

%% update bounds
% opt.updateVariableBounds(nlp, bounds);

% update initial condition

% temp = load('local/current_gait.mat');
% gait = temp.gait;
% gait.inputs.u = gait.inputs.u';
% gait.inputs.uReflectedInertiaBody = gait.inputs.uReflectedInertiaBody';
% gait.inputs.uReflectedInertiaLoad = gait.inputs.uReflectedInertiaLoad';
% sol = temp.sol;
% info = temp.info;

temp = load('local/initialAccel.mat');
% temp = load('local/initialAccelWithTailBackOffset.mat');

% bounds = temp.bounds;
% nlp = temp.nlp;
% robot = temp.robot;
sol = temp.sol;
info = temp.info;
gait = temp.gait;
gait = opt.interpGait(gait, nlp.Phase(1).NumNode);
% cost = temp.cost;

% gait = opt.getInitGait(nlp, bounds);

opt.updateInitCondition(nlp,gait);
%% solve
% [gait, sol, info] = opt.solve(nlp);
% [gait, sol, info] = opt.solve(nlp, sol);
[gait, sol, info] = opt.solve(nlp, sol, info);
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

cost = checkCosts(nlp,sol,'local/cost_check.txt') % 

finalVelocity = gait(end).states.dx(1,end)

% save('local/initialAccel.mat','nlp','gait','sol','info','bounds', 'finalVelocity');
% save('local/initialAccelWithTailBackOffset.mat','nlp','gait','sol','info','bounds', 'finalVelocity');

%% Use to record after animation has finished
% myVideo = VideoWriter('initialAccel', 'Uncompressed AVI');
% % myVideo.Quality = 100;
% open(myVideo);
% writeVideo(myVideo,anim.anim.M);
% close(myVideo);

