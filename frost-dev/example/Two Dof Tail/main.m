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
urdf = fullfile(cur,'urdf','2dof_tail.urdf');
delay_set = true;
%% load robot model
tic
robot = sys.LoadModel(urdf, load_path, delay_set);
% exo_disp = plot.LoadRobotNoLegsDisplay(robot);

bounds = opt.GetBounds(robot);

% load problem
nlp = opt.LoadProblem(robot, bounds, load_path);
toc
%% Compile stuff if needed

% compileObjective(nlp,[],export_path);
% compileConstraint(nlp,[],export_path);
% compileConstraint(nlp,{'motorModelPos','motorLimitPos','motorModelNeg','motorLimitNeg'},export_path);
compileConstraint(nlp,{'initState','finalState'},export_path);

% % Save expression 
% load_path   = 'gen/sym';
% robot.saveExpression(load_path); % run this after loaded the optimization problem

%% update bounds
% opt.updateVariableBounds(nlp, bounds);

% update initial condition

temp = load('local/current_gait.mat');
gait = temp.gait;
sol = temp.sol;
% info = temp.info;

% gait = opt.getInitGait(nlp, bounds);
 
opt.updateInitCondition(nlp,gait);
%% solve
[gait, sol, info] = opt.solve(nlp);
% [gait, sol, info] = opt.solve(nlp, sol, info);
%% save
save('local/current_gait.mat','nlp','gait','sol','info','bounds');

%% animation
anim = plot.LoadAnimator(robot, gait,'SkipExporting',true);
%% you can check the violation of constraints/variables and the value of each cost function by calling the following functions.
tol = 1e-3;
checkConstraints(nlp,sol,tol,'local/constr_check.txt'); % 
checkVariables(nlp,sol,tol,'local/var_check.txt'); % 

checkCosts(nlp,sol,'local/cost_check.txt') % 