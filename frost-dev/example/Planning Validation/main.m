% Main script

%% Set up path
clear; close all; clc;

% set(groot,'defaultfigureposition',[400 250 900 750])

restoredefaultpath; matlabrc;
frost_path  = '../../';
addpath(frost_path);
frost_addpath;
addpath(genpath('process'));

export_path = 'gen/opt';
load_path   = [];
utils.init_path(export_path);

%% Declare trial and set select urdf

trialName = 'planning_validation_001';

cur = utils.get_root_path();
urdf = fullfile(cur,'urdf','vision60.urdf');

delay_set = true;
%% Load robot model and optimization problem
tic
robot = sys.LoadModel(urdf, load_path, delay_set);
% exo_disp = plot.LoadRobotDisplay(robot);
exo_disp = plot.LoadRobotDisplay(robot, 'SkipExporting', true);
% robot.compile(export_path);

system = sys.LoadSystem(robot, load_path);
system.compile(export_path);
% bounds = opt.GetBounds(robot);


joint_control = JointPD('simplePD');

x0 = zeros(22,1);
dx0 = zeros(22,1);
x0 = [x0; dx0];
x0(3) = 0.5;
t0 = 0;
tf = 0.25;
eventnames = [];
sim_opts = [];

logger = SimLogger(robot);
disp('Simulating');
tic
logger = system.simulate(t0, x0, tf, []);
toc

% plot(logger.flow.t, logger.flow.states.x(23,:))
% hold on
% plot(logger.flow.t,A*sin(2*pi/T*logger.flow.t), '--r')
anim = plot.LoadSimAnimator(robot, logger, 'SkipExporting',true);



% load problem
nlp = opt.LoadProblem(robot, bounds, load_path);
toc

%% Compile stuff if needed

compileObjective(nlp,[],[],export_path);
compileConstraint(nlp,[],[],export_path);
% compileConstraint(nlp,[],[],export_path, {'dynamics_equation'});
% compileConstraint(nlp,[],{'dynamics_equation'},export_path);
% compileConstraint(nlp,[],{'motorModelPos','motorLimitPos','motorModelNeg','motorLimitNeg'},export_path);
% compileConstraint(nlp,[],{'nonPenetration_Stance'},export_path);

% % Save expression 
% load_path   = 'gen/sym';
% robot.saveExpression(load_path); % run this after loaded the optimization problem

%% Update Initial Condition

% temp = load('local/current_gait.mat');
% temp = load(['local/', trialName,'.mat']);

% bounds = temp.bounds;
% nlp = temp.nlp;
% robot = temp.robot;
% sol = temp.sol;
% info = temp.info;
% gait = temp.gait;
% gait = opt.interpGait(gait, nlp.Phase(1).NumNode);
% cost = temp.cost;

opt.updateInitCondition(nlp,gait);

%% Solve
[gait, sol, info] = opt.solve(nlp);
% [gait, sol, info] = opt.solve(nlp, sol);
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
