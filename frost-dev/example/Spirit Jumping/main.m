% Main script

%% Set up path
clear; close all; clc;

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

cur = utils.get_root_path();
urdf = fullfile(cur,'urdf','spirit40frost.urdf');

trialName = 'jumping';

delay_set = true;
%% Load robot model and optimization problem
tic
robot = sys.LoadModel(urdf, load_path, delay_set);
% exo_disp = plot.LoadRobotDisplay(robot);
% exo_disp = plot.LoadRobotDisplay(robot, 'SkyipExporting', true);
% robot.compile(export_path);


system = sys.LoadStanceToFlightSystem(robot, load_path);
% system.compile(export_path);
% logger = sys.SimulateSystem(system, robot)

% load problem
bounds = opt.GetBounds(robot);
nlp = opt.LoadProblem(system, bounds, load_path);
%% Compile stuff if needed

% compileObjective(nlp,[],[],export_path);
% compileConstraint(nlp,[],export_path);
% compileConstraint(nlp,[],[],export_path, {'dynamics_equation'});
% compileConstraint(nlp,[],{'finalState'},export_path);
% compileConstraint(nlp,{'motorModelPos'},export_path);
% compileConstraint(nlp,{'motorModelNeg'},export_path);


% % Save expression
% load_path   = 'gen/sym';
% robot.saveExpression(load_path); % run this after loaded the optimization problem

%% Update Initial Condition

% temp = load('local/double_phase_stand.mat');
temp = load('local/jumping.mat');

sol = temp.sol;
gait = temp.gait;
info = temp.info;

%     gait = opt.interpGait(gait, nlp.Phase(1).NumNode);
%     gait = opt.interpGait(gait(1:3), nlp.Phase(1).NumNode);
opt.updateInitCondition(nlp,gait);

%% Solve
%     timeout = 1800; tic;
% [gait, sol, info] = opt.solve(nlp);
% [gait, sol, info] = opt.solve(nlp, sol);
[gait, sol, info] = opt.solve(nlp, sol, info);

%% Save immediately in case of errors later in script
save('local/current_gait.mat','nlp','gait','sol','info','bounds');

%% Animate (must play video before any saving)
% loopedGait = plot.createLoopedGait(gait);
% anim = plot.LoadAnimator(robot, loopedGait,'SkipExporting',true);

fullgait = mergeGait(gait);
anim = plot.LoadAnimator(robot, gait,'SkipExporting',true);

%% Check variables, constraints, and cost function, and calculate gait parameters
tol = 1e-3;
[yc, cl, cu] = checkConstraints(nlp,sol,tol,'local/constr_check.txt'); %
checkVariables(nlp,sol,tol,'local/var_check.txt'); %

% jump_height = 0.5*(gait.states.dx(3,end))^2/9.81

cost = checkCosts(nlp,sol,'local/cost_check.txt'); %
results = gait(3).states.x(3,end) - gait(1).states.x(3,end);

figure
adIndices = [1,4,7,10];
ad = plot(gait(1).tspan, gait(1).inputs.u(adIndices,:), '-', 'color', 'k'); hold on;
hip = plot(gait(1).tspan, gait(1).inputs.u(adIndices+1,:), '--', 'color', cmuColor('teal')); hold on;
knee = plot(gait(1).tspan, gait(1).inputs.u(adIndices+2,:), '-.', 'color', cmuColor('red-web'));
xlabel('Time (s)');
ylabel('Torque (Nm)')
legend([ad(1), hip(1), knee(1)], 'Ad', 'Hip', 'Knee')

figure
plot(gait(1).tspan, gait(1).inputs.fFoot0 + gait(1).inputs.fFoot1 + gait(1).inputs.fFoot2 + gait(1).inputs.fFoot3); hold on;
xlabel('Time (s)');
ylabel('GRFs (N)')
legend('X', 'Y', 'Z')

% results = struct;
saveResults(trialName, nlp, gait, sol, info, bounds,results, anim)
