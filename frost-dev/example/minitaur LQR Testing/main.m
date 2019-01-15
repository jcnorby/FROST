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
delay_set = true;
%% load robot model
tic
robot = sys.LoadModel(urdf, load_path, delay_set);
% exo_disp = plot.LoadRobotDisplay(robot);

% load hybrid system
% system = sys.LoadSystem(robot, load_path);
% system.compile(export_path);


% Simulate
joint_control = JointPD('simplePD');

pitch0 = 0;
motorin = pi/2 - pitch0;
motorout = pi/2 + pitch0;
knee0 = acos(0.5);
x0 = [0;0;0.2;0;pitch0;0;motorout;motorin;knee0;knee0;motorout;motorin;knee0;knee0;motorin;motorout;knee0;knee0;motorin;motorout;knee0;knee0;0;0;0];
dx0 = zeros(25,1);
T = 1;
A = 0.5;
joint_control.Param.T = T;
joint_control.Param.A = A;
dx0(23) = A*2*pi/T;
% dx0(6) = 1;
% dx0(5) = 6;
x0 = [x0; dx0];
t0 = 0;
tf = T;
params.pqfixed = zeros(2,1);
params.pFixedbase = zeros(6,1);
params.pfourBar = zeros(8,1);
eventnames = [];
sim_opts = [];


% logger = SimLogger(robot);
% disp('Simulating');
% tic
% robot.simulate(t0, x0, tf, joint_control, params, logger, eventnames, sim_opts);
% toc
% 
% plot(logger.flow.t, logger.flow.states.x(23,:))
% hold on
% plot(logger.flow.t,A*sin(2*pi/T*logger.flow.t), '--r')
% % anim = plot.LoadSimAnimator(robot, logger, 'SkipExporting',true);
% hold on
% 
% gait = opt.getInitGait(logger, 84);
% save('process/tailTest.mat','gait')
% feasible = ~any((gait.inputs.u(9,:)/(45*0.8) - 0.0954*(16 - 45*0.0954*gait.states.dx(23,:))/0.23)>0)

% exportTrajectory(gait);

bounds = opt.GetBounds(robot);

% load problem
nlp = opt.LoadProblem(robot, bounds, load_path);
toc
%% Compile stuff if needed

% compileObjective(nlp,[],export_path);
% compileConstraint(nlp,[],export_path);
% compileConstraint(nlp,{'motorModelPos','motorLimitPos','motorModelNeg','motorLimitNeg'},export_path);
compileConstraint(nlp,{'trackState'},export_path);

% % Save expression 
% load_path   = 'gen/sym';
% robot.saveExpression(load_path); % run this after loaded the optimization problem

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

% temp = load('local/stand_low.mat');
temp = load('local/current_gait.mat');

% bounds = temp.bounds;
% nlp = temp.nlp;
% robot = temp.robot;
sol = temp.sol;
info = temp.info;
gait = temp.gait;
% cost = temp.cost;

% gait = opt.getInitGait(nlp, bounds);
 
% opt.updateInitCondition(nlp,gait);
%% solve
% [gait, sol, info] = opt.solve(nlp);
[gait, sol, info] = opt.solve(nlp, sol);
% [gait, sol, info] = opt.solve(nlp, sol, info);
%% save
% save('local/current_gait.mat','nlp','gait','sol','info','bounds');

%% animation
anim = plot.LoadAnimator(robot, gait,'SkipExporting',true);
%% you can check the violation of constraints/variables and the value of each cost function by calling the following functions.
tol = 1e-3;
checkConstraints(nlp,sol,tol,'local/constr_check.txt'); % 
checkVariables(nlp,sol,tol,'local/var_check.txt'); % 

checkCosts(nlp,sol,'local/cost_check.txt') % 




