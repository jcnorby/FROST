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

trialName = 'intxdot_test_success';

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

N = 100;
successes = 0;
close_enoughs = 0;
for i = 1:N
    % Generate or load the desired trajectory
    traj = struct;
    [state, action] = getStateActionPair();
    traj.state = state;     % = [0 0 0.35000 1.0000 0 -1.0000];
    traj.action = action;   % = [6.6667, 0, 3.5233, -6.6667, 0, 9.6833, 0.3000, 0.1000];
%     traj.state = [0 0 0.35000 1.0000 0 -1.0000];
%     traj.action = [6.6667, 0, 3.5233, -6.6667, 0, 9.6833, 0.3000, 0.1000];

%     traj.state = [0           0     0.44971      1.2741      1.2165    -0.19288];
%     traj.action = [1.7329      2.9726      1.5159     -1.8753     -1.8989      3.1826     0.36058    0.026843];

    
%     temp = load('local/intxdot_error_state_action_pair');
%     traj = temp.traj;

    % load problem
    bounds = opt.GetBounds(robot);
    nlp = opt.LoadProblem(system, bounds, traj, load_path);
    %% Compile stuff if needed
    
%     compileObjective(nlp,[],[],export_path);
%     compileConstraint(nlp,[],[],export_path);
%     compileConstraint(nlp,[],[],export_path, {'dynamics_equation'});
%     compileConstraint(nlp,[],{'dynamics_equation'},export_path);
%     compileConstraint(nlp,[],{'trackState_Stance'},export_path);
%     compileConstraint(nlp,[],{'trackState_Flight'},export_path);

%     compileConstraint(nlp,[],{'dd_trackState_Stance'},export_path);
%     compileConstraint(nlp,[],{'kneeHeight', 'bodyHeight'},export_path);

    % % Save expression
    % load_path   = 'gen/sym';
    % robot.saveExpression(load_path); % run this after loaded the optimization problem
    
    %% Update Initial Condition
    
    temp = load('local/current_gait.mat');
%     temp = load('local/intxdot_success_gait.mat');
%     temp = load(['local/', trialName,'.mat']);
    
    sol = temp.sol;
    gait = temp.gait;
    info = temp.info;
        
%     gait = opt.interpGait(gait, nlp.Phase(1).NumNode);
%     gait = opt.interpGait(gait(1:3), nlp.Phase(1).NumNode);
%     opt.updateInitCondition(nlp,gait);
    
    %% Solve
%     timeout = 1800; tic;
    [gait, sol, info] = opt.solve(nlp);
%     [gait, sol, info] = opt.solve(nlp, sol);
%     [gait, sol, info] = opt.solve(nlp, sol, info);
    if ((info.status == -1))
        [gait, sol, info] = opt.solve(nlp, sol);
    end
    
    if ((info.status == 0) || (info.status == 1))
        successes = successes + 1;
        result = 'success';
    else
        tol = 1e-3;
        [yc, cl, cu] = checkConstraints(nlp,sol,tol,'local/constr_check.txt'); %
        viol = max(abs([(min(yc{1} - cl{1})), (max(yc{1} - cu{1}))]));
        
        if (viol < tol)
            successes = successes + 1;
            close_enoughs = close_enoughs + 1;
        else
            result = 'failure';
        end
    end
    
    disp(['Iteration ', num2str(i), ' complete, ', result]);
    disp(['State: ', num2str(traj.state)])
    disp(['Action: ', num2str(traj.action)])
    disp(['Current success rate: ', num2str(successes), '/', num2str(i), ' = ', num2str(100*successes/i, 3), '%'])
    disp(['Current acceptables: ', num2str(close_enoughs)])

    if strcmp(result, 'failure')
        save(['local/failure_state_action_pair_',num2str(i),'.mat'], 'traj');
%         break;
    end
end

%% Save immediately in case of errors later in script
save('local/current_gait.mat','nlp','gait','sol','info','bounds');
save('local/current_state_action_pair', 'traj');

%% Animate (must play video before any saving)
% loopedGait = plot.createLoopedGait(gait);
% anim = plot.LoadAnimator(robot, loopedGait,'SkipExporting',true);

fullgait = mergeGait(gait);
anim = plot.LoadAnimator(robot, gait,'SkipExporting',true);

%% Check variables, constraints, and cost function, and calculate gait parameters
tol = 1e-3;
[yc, cl, cu] = checkConstraints(nlp,sol,tol,'local/constr_check.txt'); %
checkVariables(nlp,sol,tol,'local/var_check.txt'); %

cost = checkCosts(nlp,sol,'local/cost_check.txt'); %

results = struct;

figure
plot3(fullgait.states.x(1,:), fullgait.states.x(2,:), fullgait.states.x(3,:), 'k'); hold on;
plotStateActionPair3D(traj.state, traj.action, gca)
axis equal
xlabel('x (m)');ylabel('y (m)');zlabel('z (m)');
%% Save Results (locally and/or to the cloud depending on user prompt)

% saveResults(trialName, nlp, gait, sol, info, bounds,results, anim)
