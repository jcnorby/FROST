% Main script for creating, solving, and visualising trajectory
% optimizations in FROST. To create a new optimization:
%   - Copy the RML Template folder and rename to your project
%   - Put your urdf in the urdf/ dir
%   - Update sys.LoadModel with any platform specific constraints
%   - Update sys.domains with the continuous/hybrid domains you'll need
%   - Update sys.frames with convenient coordinate frames
%   - Update sys.LoadSystem with the hybrid system you want
%   - Update sys.LoadProblem with the NLP you want
%       - Individual cost and constraint functions are defined in opt/costs and opt/constraints
%       - Constraints are assigned to specific domains in opt/callbacks
%   - Update opt_var bounds in opt/GetBounds
%   - Run this script, make sure that the following are called to compile necessary files:
%       - plot.LoadRobotDisplay(robot);
%       - compileObjective(nlp,[],[],export_path);
%       - compileConstraints(nlp,[],[],export_path);


%% Set up paths (see +utils.init_path for more)
clear; close all; clc;

export_path = 'gen/opt';
load_path   = [];
utils.init_path(export_path);

%% Declare trial name (used to name the saved data files)
trialName = 'jumping';

%% Load robot model, system, and optimization problem
% Find the urdf
delay_set = true;cur = utils.get_root_path();
urdf = fullfile(cur,'urdf','spirit40frost.urdf');

% Load the robot model
robot = sys.LoadModel(urdf, load_path, delay_set);
exo_disp = plot.LoadRobotDisplay(robot);                            % Run this to create the files used for displaying the robot (only need to run if robot changes)
% exo_disp = plot.LoadRobotDisplay(robot, 'SkipExporting', true);   % Run this to check the robot display (without re-generating the display files)

% Load the hybrid system with the domains specified in +sys/domains
system = sys.LoadStanceToFlightSystem(robot, load_path);
% system.compile(export_path);                                      % Run this to compile the hybrid system into code required for simulation
% robot.compile(export_path);                                       % Run this to compile the continuous robot dynamics into code required for simulation
% logger = sys.SimulateSystem(system, robot)                        % Run this to simulate the system

% Get the opt var bounds and load the NLP
bounds = opt.GetBounds(robot);
nlp = opt.LoadProblem(system, bounds, load_path);
%% Compile cost function and constraints to mex
compileObjective(nlp,[],[],export_path);                            % Compile the cost function (don't need to run if unchanged)
compileConstraint(nlp,[],[],export_path);                           % Compile the constraints
% compileConstraint(nlp,[],[],export_path, {'dynamics_equation'});  % Compile all constraints except for the dynamics
% compileConstraint(nlp,[],{'finalState'},export_path);             % Compile the constraint 'finalState' in a hybrid TO
% compileConstraint(nlp,{'finalState'},export_path);                % Compile the constraint 'finalState' in a continuous TO

% % (Optional) Save the symbolic expression
% load_path   = 'gen/sym';
% robot.saveExpression(load_path); % run this after loaded the optimization problem

%% (Optional) Update Initial Conditions
% % Use an existing gait
% temp = load('gaits/current_gait.mat');
% sol = temp.sol;
% gait = temp.gait;
% info = temp.info;

% % Interpolate so finite elements line up, then update the nlp
% % If you don't do this FROST will use the average of LB and UB as the initial guess
% gait = opt.interpGait(gait, nlp.Phase(1).NumNode);
% opt.updateInitCondition(nlp,gait);

%% Solve
[gait, sol, info] = opt.solve(nlp);                                 % Solve the nlp with whatever initial condition is loaded
% [gait, sol, info] = opt.solve(nlp, sol);                          % Solve the nlp with initial condition sol
% [gait, sol, info] = opt.solve(nlp, sol, info);                    % Solve the nlp with initial condition sol and warm start from info

%% Save immediately in case of errors later in script
save('gaits/current_gait.mat','nlp','gait','sol','info','bounds');

%% Animate (must play video before any saving)
% If gait is periodic, create and animate a looped version
% loopedGait = plot.createLoopedGait(gait);
% anim = plot.LoadAnimator(robot, loopedGait,'SkipExporting',true);

% Merge gait into a continuous trajectory and open GUI for visualization
fullgait = mergeGait(gait);
anim = plot.LoadAnimator(robot, gait,'SkipExporting',true);

%% Check variables, constraints, and cost function
tol = 1e-3;
[yc, cl, cu] = checkConstraints(nlp,sol,tol,'local/constr_check.txt'); %
checkVariables(nlp,sol,tol,'local/var_check.txt'); %
cost = checkCosts(nlp,sol,'local/cost_check.txt'); %

%% Calculate desired metrics (results struct will be saved at the end)
results = struct;
results.height = gait(3).states.x(3,end) - gait(1).states.x(3,end);

%% Do any post processing here
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

%% Save everything
saveResults(trialName, nlp, gait, sol, info, bounds, results, anim)
