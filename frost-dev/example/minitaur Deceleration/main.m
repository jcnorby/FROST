% Main script

%% Set up path
clear; close all; clc;

set(groot,'defaultfigureposition',[400 250 900 750])

restoredefaultpath; matlabrc;
frost_path  = '../../';
addpath(frost_path);
frost_addpath;
addpath(genpath('process'));

export_path = 'gen/opt';
load_path   = [];
utils.init_path(export_path);

%% Declare trial and set globals accordingly

trialName = 'maxDecelerationMu05Vel15';

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
%% Initialize model settings
cur = utils.get_root_path();

% Choose correct urdf based on trial-set globals
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

delay_set = true;
%% Load robot model and optimization problem
tic
robot = sys.LoadModel(urdf, load_path, delay_set);
% exo_disp = plot.LoadRobotDisplay(robot);

bounds = opt.GetBounds(robot);

% load problem
nlp = opt.LoadProblem(robot, bounds, load_path);
toc

%% Compile stuff if needed

% compileObjective(nlp,[],[],export_path);
% compileConstraint(nlp,[],[],export_path);
% compileConstraint(nlp,[],[],export_path, {'dynamics_equation'});
% compileConstraint(nlp,[],{'dynamics_equation'},export_path);
% compileConstraint(nlp,[],{'motorModelPos','motorLimitPos','motorModelNeg','motorLimitNeg'},export_path);
compileConstraint(nlp,[],{'initState', 'finalState', 'minInitialForwardVel'},export_path);
% compileConstraint(nlp,[],{'jointAngMinimum_Flight', 'jointAngMinimum_FrontStance'},export_path);

% % Save expression 
% load_path   = 'gen/sym';
% robot.saveExpression(load_path); % run this after loaded the optimization problem

%% Update Initial Condition

temp = load('local/current_gait.mat');
% temp = load(['local/', trialName,'.mat']);
% temp = load('local/avgAccelerationForwardLegs.mat');

% temp = load('local/maxDecelerationMinGRFMu05.mat');

% bounds = temp.bounds;
% nlp = temp.nlp;
% robot = temp.robot;
sol = temp.sol;
info = temp.info;
gait = temp.gait;
gait = opt.interpGait(gait, nlp.Phase(1).NumNode);
% cost = temp.cost;

opt.updateInitCondition(nlp,gait);

%% Solve
% [gait, sol, info] = opt.solve(nlp);
[gait, sol, info] = opt.solve(nlp, sol);
% [gait, sol, info] = opt.solve(nlp, sol, info);

%% Save immediately in case of errors later in script
save('local/current_gait.mat','nlp','gait','sol','info','bounds');

%% Animate (must play video before any saving)
% loopedGait = plot.createLoopedGait(gait);
% anim = plot.LoadAnimator(robot, loopedGait,'SkipExporting',true);

anim = plot.LoadAnimator(robot, gait,'SkipExporting',true);

%% Check variables, constraints, and cost function, and calculate gait parameters
tol = 1e-3;
checkConstraints(nlp,sol,tol,'local/constr_check.txt'); % 
checkVariables(nlp,sol,tol,'local/var_check.txt'); % 

cost = checkCosts(nlp,sol,'local/cost_check.txt'); % 

results = struct;
results.initialVelocity = gait(1).states.dx(1,1);
results.avgDeceleration = gait(1).states.dx(1,1)/gait(end).tspan(end)

%% Save Results (locally and/or to the cloud depending on user prompt)

saveResults(trialName, nlp, gait, sol, info, bounds,results, anim)
