function nlp = LoadProblem(robot, bounds, load_path)

% NO FLIGHT

if nargin < 3
    load_path = [];
end

% Define grid resolution
num_grid.Stance = 10;
num_grid.BackStance = 10;

options = {'EqualityConstraintBoundary', 1e-4,...
    'DistributeTimeVariable', false,...
    'DistributeParameters',true};

% Define the hybrid system (could move this to LoadSystem)
% Use callback functions for phase specific constraints
stance = sys.domains.DoubleStance(robot, load_path);
stance.UserNlpConstraint = @opt.callback.StanceConstraints;

backStance = sys.domains.BackStance(robot, load_path);
backStance.UserNlpConstraint = @opt.callback.BackStanceConstraints;

flight = sys.domains.Flight(robot, load_path);

frontLiftOff = RigidImpact('FrontLiftOff', backStance, 'Foot2NormalForce'); % front liftoff, to flightToBack
frontLiftOff.addImpactConstraint(struct2array(backStance.HolonomicConstraints), load_path);

joint_control = JointPD('simplePD');

system = HybridSystem('minitaur');
system = addVertex(system, 'Stance', 'Domain', stance,'Control', joint_control);
system = addVertex(system, 'BackStance', 'Domain', backStance,'Control', joint_control);

srcs = {'Stance' };
tars = {'BackStance'};

system = addEdge(system, srcs, tars);
system = setEdgeProperties(system, srcs, tars, ...
    'Guard', {frontLiftOff});

% Create the optimization object
nlp = HybridTrajectoryOptimization('minitaur_opt', system, num_grid, [], options{:});

if isempty(load_path)
    nlp.configure(bounds);
else
    nlp.configure(bounds, 'LoadPath',load_path);
end

% % Select a cost function
%     opt.cost.zero(nlp, system);
% opt.cost.finalForwardVelocity(nlp, system);
% opt.cost.avgAcceleration(nlp, system);
opt.cost.maxDistance(nlp, system);
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



% % FLIGHT
%
% if nargin < 3
%     load_path = [];
% end
% 
% % Define grid resolution
% num_grid.Stance = 10;
% num_grid.BackStance = 10;
% 
% options = {'EqualityConstraintBoundary', 1e-4,...
%     'DistributeTimeVariable', false,...
%     'DistributeParameters',true};
% 
% % Define the hybrid system (could move this to LoadSystem)
% % Use callback functions for phase specific constraints
% stance = sys.domains.DoubleStance(robot, load_path);
% stance.UserNlpConstraint = @opt.callback.StanceConstraints;
% 
% backStance = sys.domains.BackStance(robot, load_path);
% backStance.UserNlpConstraint = @opt.callback.BackStanceConstraints;
% 
% flight = sys.domains.Flight(robot, load_path);
% flight.UserNlpConstraint = @opt.callback.FlightToFrontConstraints;
% 
% frontLiftOff = RigidImpact('FrontLiftOff', backStance, 'Foot2NormalForce'); % front liftoff, to backStance
% frontLiftOff.addImpactConstraint(struct2array(backStance.HolonomicConstraints), load_path);
% 
% backLiftOff = RigidImpact('BackLiftOff', flight, 'Foot3NormalForce'); % front liftoff, to flight
% backLiftOff.addImpactConstraint(struct2array(flight.HolonomicConstraints), load_path);
% 
% joint_control = JointPD('simplePD');
% 
% system = HybridSystem('minitaur');
% system = addVertex(system, 'Stance', 'Domain', stance,'Control', joint_control);
% system = addVertex(system, 'BackStance', 'Domain', backStance,'Control', joint_control);
% system = addVertex(system, 'Flight', 'Domain', flight,'Control', joint_control);
% 
% srcs = {'Stance','BackStance' };
% tars = {'BackStance', 'Flight'};
% 
% system = addEdge(system, srcs, tars);
% system = setEdgeProperties(system, srcs, tars, ...
%     'Guard', {frontLiftOff, backLiftOff});
% 
% % Create the optimization object
% nlp = HybridTrajectoryOptimization('minitaur_opt', system, num_grid, [], options{:});
% 
% if isempty(load_path)
%     nlp.configure(bounds);
% else
%     nlp.configure(bounds, 'LoadPath',load_path);
% end
% 
% % % Select a cost function
% %     opt.cost.zero(nlp, system);
% % opt.cost.finalForwardVelocity(nlp, system);
% % opt.cost.avgAcceleration(nlp, system);
% opt.cost.finalForwardVelocityMinEnergy(nlp, system);
% %     opt.cost.Torque(nlp, robot);
% %     opt.cost.Height(nlp, robot);
% 
% % Remove constraint that requires gaits to start at t=0
% for i = 1:length(nlp.Phase)
%     if nlp.Phase(i).NumNode == 1
%         removeConstraint(nlp.Phase(i),'tContDomain');
%     end
% end
% 
% % Add any other inter-domain constraints
% opt.constraint.param_cont_T(nlp, bounds);
% opt.constraint.param_cont_R(nlp, bounds);
% opt.constraint.final_state(nlp, bounds);
% 
% % Load cost and constraints into nlp arrays
% nlp.update;
% end
