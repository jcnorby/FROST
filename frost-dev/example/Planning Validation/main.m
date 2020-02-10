% Main script

%% Set up path
clear; close all; clc;

% set(groot,'defaultfigureposition',[400 250 900 750])

restoredefaultpath; matlabrc;
frost_path  = '../../';
addpath(frost_path);
frost_addpath;
addpath(genpath('process'));
addpath(genpath('scripts'));

export_path = 'gen/opt';
load_path   = [];
utils.init_path(export_path);

%% Declare trial and set select urdf

trialName = 'planning_validation_test';

cur = utils.get_root_path();
urdf = fullfile(cur,'urdf','cheetah.urdf');

delay_set = true;
%% Load robot model and optimization problem
tic
robot = sys.LoadModel(urdf, load_path, delay_set);
% exo_disp = plot.LoadRobotDisplay(robot);
% exo_disp = plot.LoadRobotDisplay(robot, 'SkipExporting', true);
% robot.compile(export_path);

system = sys.LoadStanceToFlightSystem(robot, load_path);
% system.compile(export_path);
% logger = sys.SimulateSystem(system, robot)

% load problem
bounds = opt.GetBounds(robot);
traj = struct;
traj.state = [0 0 0.35000 1.0000 0 -1.0000];
traj.action = [6.6667, 0, 3.5233, -6.6667, 0, 9.6833, 0.3000, 0.1000];
tic
nlp = opt.LoadProblem(system, bounds, traj, load_path);
toc
%% Compile stuff if needed

% compileObjective(nlp,[],[],export_path);
% compileConstraint(nlp,[],[],export_path);
% compileConstraint(nlp,[],[],export_path, {'dynamics_equation'});
% compileConstraint(nlp,[],{'dynamics_equation'},export_path);
% compileConstraint(nlp,[],{'kneeHeight', 'bodyHeight'},export_path);

% % Save expression 
% load_path   = 'gen/sym';
% robot.saveExpression(load_path); % run this after loaded the optimization problem

%% Update Initial Condition

temp = load('local/current_gait.mat');
% temp = load('local/planning_validation_test.mat');
% temp = load(['local/', trialName,'.mat']);

sol = temp.sol;
gait = temp.gait;

% gait = opt.interpGait(gait, nlp.Phase(1).NumNode);
% opt.updateInitCondition(nlp,gait);

%% Solve
% [gait, sol, info] = opt.solve(nlp);
[gait, sol, info] = opt.solve(nlp, sol);
% [gait, sol, info] = opt.solve(nlp, sol, info);

%% Save immediately in case of errors later in script
 save('local/current_gait.mat','nlp','gait','sol','info','bounds');

%% Animate (must play video before any saving)
% loopedGait = plot.createLoopedGait(gait);
% anim = plot.LoadAnimator(robot, loopedGait,'SkipExporting',true);

fullgait = mergeGait(gait);
anim = plot.LoadAnimator(robot, gait,'SkipExporting',true);

%% Check variables, constraints, and cost function, and calculate gait parameters
tol = 1e-3;
checkConstraints(nlp,sol,tol,'local/constr_check.txt'); % 
checkVariables(nlp,sol,tol,'local/var_check.txt'); % 

cost = checkCosts(nlp,sol,'local/cost_check.txt'); % 

results = struct;

%% Save Results (locally and/or to the cloud depending on user prompt)

saveResults(trialName, nlp, gait, sol, info, bounds,results, anim)
