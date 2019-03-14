function nlp = LoadProblem(robot, bounds, load_path)

% NO FLIGHT

if nargin < 3
    load_path = [];
end

% Define grid resolution
num_grid.Stance = 10;
num_grid.BackStance = 10;
num_grid.Flight = 10;

options = {'EqualityConstraintBoundary', 1e-4,...
    'DistributeTimeVariable', false,...
    'DistributeParameters',true};

% Define the hybrid system (could move this to LoadSystem)
% Use callback functions for phase specific constraints

% Define domains
flight = sys.domains.Flight(robot, load_path);
flight.UserNlpConstraint = @opt.callback.FlightToFrontConstraints;

frontStance = sys.domains.FrontStance(robot, load_path);
frontStance.UserNlpConstraint = @opt.callback.FrontStanceConstraints;

stance = sys.domains.DoubleStance(robot, load_path);
stance.UserNlpConstraint = @opt.callback.StanceConstraints;

% Define transitions
frontImpact = RigidImpact('FrontImpact', frontStance, 'Foot0Height'); % To frontStance
frontImpact.addImpactConstraint(struct2array(frontStance.HolonomicConstraints), load_path);
frontImpact.UserNlpConstraint = @opt.callback.FrontImpactConstraints;

backImpact = RigidImpact('BackImpact', stance, 'Foot1Height'); % To backStance
backImpact.addImpactConstraint(struct2array(stance.HolonomicConstraints), load_path);
backImpact.UserNlpConstraint = @opt.callback.BackImpactConstraints;

% This does nothing for optimization, just for simulation
joint_control = JointPD('simplePD');

system = HybridSystem('minitaur');
system = addVertex(system, 'Flight', 'Domain', flight,'Control', joint_control);
system = addVertex(system, 'FrontStance', 'Domain', frontStance,'Control', joint_control);
system = addVertex(system, 'Stance', 'Domain', stance,'Control', joint_control);


srcs = {'Flight','FrontStance'};
tars = {'FrontStance', 'Stance'};

system = addEdge(system, srcs, tars);
system = setEdgeProperties(system, srcs, tars, ...
    'Guard', {frontImpact, backImpact});

% Create the optimization object
nlp = HybridTrajectoryOptimization('minitaur_opt', system, num_grid, [], options{:});

if isempty(load_path)
    nlp.configure(bounds);
else
    nlp.configure(bounds, 'LoadPath',load_path);
end

% % Select a cost function
    opt.cost.zero(nlp, system);
% opt.cost.finalForwardVelocity(nlp, system);
% opt.cost.avgDeceleration(nlp, system);
% opt.cost.maxDistance(nlp, system);
% opt.cost.finalForwardVelocityMinEnergy(nlp, system);
%     opt.cost.Torque(nlp, robot);
%     opt.cost.Height(nlp, robot);

% Remove constraint that requires gaits to start at t=0
for i = 1:length(nlp.Phase)
    if nlp.Phase(i).NumNode == 1
        removeConstraint(nlp.Phase(i),'tContDomain');
    end
end

% Add any other inter-domain constraints
opt.constraint.param_cont_T(nlp, bounds);
opt.constraint.param_cont_R(nlp, bounds);
opt.constraint.final_state(nlp, bounds);

% Load cost and constraints into nlp arrays
nlp.update;
end


