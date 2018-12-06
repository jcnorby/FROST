% Main script

% Switching to Instantaneous:
% Change LoadSystem
% Change non-penetration
% Get rid of normal force constraint in FrontStanceConstraints, BackStanceConstraints
% Change remove discrete map constraint in customConstraints
% Recompile

%% Setting up path
clear; close all; clc;
restoredefaultpath; matlabrc;
frost_path  = '../../';
addpath(frost_path);
addpath(genpath('process'));
frost_addpath;

export_path = 'gen/opt';
load_path   = [];
utils.init_path(export_path);

%% initialize model settings
cur = utils.get_root_path();
urdf = fullfile(cur,'urdf','minitaurWithTailBackOffsetAccurate.urdf');
delay_set = true;
%% load robot model
tic
robot = sys.LoadModel(urdf, load_path, delay_set);
% exo_disp = plot.LoadRobotDisplay(robot);

% load hybrid system
system = sys.LoadSystem(robot, load_path);

% system.compile(export_path);

% get Bounds
bounds = opt.GetBounds(robot);

% % Simulate
% pitch0 = 0.4;
% motorin = pi/2 - pitch0;
% motorout = pi/2 + pitch0;
% knee0 = acos(0.5);
% x0 = [0;0;0.5*sin(knee0);0;pitch0;0;motorout;motorin;knee0;knee0;motorout;motorin;knee0;knee0;motorin;motorout;knee0;knee0;motorin;motorout;knee0;knee0];
% dx0 = zeros(22,1);
% % dx0(6) = 1;
% dx0(5) = 6;
% x0 = [x0; dx0];
% 
% logger = system.simulate(0, x0, 0.8, []);
% anim = plot.LoadSimAnimator(robot, logger, 'SkipExporting',true);
% save('local/simbound.mat','logger');

% load problem
nlp = opt.LoadProblem(system, bounds, load_path);
toc
% gait = opt.getInitGait(nlp, bounds);

%% Compile stuff if needed

% compileObjective(nlp,[],[],export_path);
% compileConstraint(nlp,[],[],export_path);

% compileConstraint(nlp,[],{'nonPenetration_FrontStance', 'nonPenetration_BackStance'},export_path);
% compileConstraint(nlp,[],{'u_friction_cone_Foot0', 'u_friction_cone_Foot1', 'u_friction_cone_Foot2', 'u_friction_cone_Foot3'},export_path);
% compileConstraint(nlp,[],{'motorModelPos','motorLimitPos','motorModelNeg','motorLimitNeg'},export_path);
% compileConstraint(nlp,[],[],export_path, 'dynamics_equation');
% compileConstraint(nlp,[],'dynamics_equation',export_path);
% compileConstraint(nlp,[],{'paramContD', 'dfinalCont'},export_path);
compileConstraint(nlp,[],{'gsm'},export_path);
compileConstraint(nlp,[],{'smooth_FrontImpact', 'smooth_BackImpact'},export_path);


% % Save expression 
% load_path   = 'gen/sym';
% robot.saveExpression(load_path); % run this after loading the optimization problem

%% Load initial gait

% temp = load('local/energyOptimalBoundInstantaneousSwitch.mat');
% temp = load('local/energyOptimalBoundWithTailBackOffsetInstantaneousSwitch360Lighter.mat');
% temp = load('local/energyOptimalBoundWithTailBackOffsetInstantaneousSwitch250Lighter.mat');
% temp = load('local/current_gait.mat');
% temp = load('local/energyOptimalBoundWithTailBackOffsetInstantaneousSwitch300LighterGSM.mat');
temp = load('local/energyOptimalBoundWithTailBackOffsetInstantaneousSwitchGSMClearance.mat');


% bounds = temp.bounds;
% nlp = temp.nlp;
% robot = temp.robot;
sol = temp.sol;
info = temp.info;
gait = temp.gait;
% cost = temp.cost;


% for i = 1:2:length(nlp.Phase) 
%     gait(i).inputs.u(9,:) = [];
%     gait(i).inputs.uReflectedInertiaBody = gait(i).inputs.uReflectedInertiaBody';
%     gait(i).inputs.uReflectedInertiaLoad = gait(i).inputs.uReflectedInertiaLoad';
% end

% Create initial gait if needed
% gait = opt.addTailToGait(gait)
% gait = opt.getInitGait(nlp, bounds)';
 
%% solve
% x0 = nlp.getInitialGuess('typical');
% x0 = ones(length(x0),1);
% [gait, sol, info] = opt.solve(nlp, x0);

opt.updateInitCondition(nlp,gait);
[gait, sol, info] = opt.solve(nlp);

% opt.updateInitCondition(nlp,gait);
% [gait, sol, info] = opt.solve(nlp, sol, info);

%% you can check the violation of constraints/variables and the value of each cost function by calling the following functions.
tol = 1e-3;
checkConstraints(nlp,sol,tol,'local/constr_check.txt'); % 
checkVariables(nlp,sol,tol,'local/var_check.txt'); % 

costs = checkCosts(nlp,sol,'local/cost_check.txt'); % 
cost = sum(cell2mat(costs(1:2:length(gait))))

save('local/current_gait.mat','gait','sol','info','bounds', 'nlp', 'robot', 'cost')

%% animation
% temp = load('local/energyOptimalBoundWithTailFrontOffset.mat');
% gait = temp.gait;
% robot = temp.robot; 

loopedGait = plot.createLoopedGait(gait);
anim = plot.LoadAnimator(robot, loopedGait,'SkipExporting',true);

%% Export gait to txt files for execution on the robot
% fullgait = mergeGait(gait, nlp)
% exportTrajectory(fullgait)

fullgait = mergeGait(gait, nlp);
figure
plot(fullgait.tspan, fullgait.states.x(23,:))
rad2deg(max(fullgait.states.x(23,:)) - min(fullgait.states.x(23,:)))

%% you can also plot the states and torques w.r.t upper/lower bounds.
% plot.plotOptStates(robot,nlp,gait);
% plot.plotOptTorques(robot,nlp,gait);

%% Use to record after animation has finished
% myVideo = VideoWriter('energyOptimalBoundWithTailBackOffsetRAccurate', 'MPEG-4');
% myVideo.Quality = 100;
% open(myVideo);
% writeVideo(myVideo,anim.anim.M);
% close(myVideo);

