function [system] = LoadSystem(model, load_path)
% Load the hybrid system model

if nargin < 2
    load_path = [];
end

% Define domains
frontStance = sys.domains.FrontStance(model, load_path);
frontStance.UserNlpConstraint = @opt.callback.FrontStanceConstraints;

backStance = sys.domains.BackStance(model, load_path);
backStance.UserNlpConstraint = @opt.callback.BackStanceConstraints;

flight = sys.domains.Flight(model, load_path);
flight.UserNlpConstraint = @opt.callback.FlightToFrontConstraints;

% Define transitions
frontImpact = RigidImpact('FrontImpact', frontStance, 'Foot0Height'); % To frontStance
frontImpact.addImpactConstraint(struct2array(frontStance.HolonomicConstraints), load_path);
frontImpact.UserNlpConstraint = @opt.callback.FrontImpactConstraints;

backImpact = RigidImpact('BackImpact', backStance, 'Foot1Height'); % To backStance
backImpact.addImpactConstraint(struct2array(backStance.HolonomicConstraints), load_path);
backImpact.UserNlpConstraint = @opt.callback.BackImpactConstraints;

backLiftOff = RigidImpact('BackLiftOff', flight, 'Foot3NormalForce'); % back liftoff, to flightToFront
backLiftOff.addImpactConstraint(struct2array(flight.HolonomicConstraints), load_path);

% This does nothing for optimization, just for simulation
joint_control = JointPD('simplePD');

system = HybridSystem('minitaur');
system = addVertex(system, 'FrontStance', 'Domain', frontStance,'Control', joint_control);
system = addVertex(system, 'BackStance', 'Domain', backStance,'Control', joint_control);
system = addVertex(system, 'Flight', 'Domain', flight,'Control', joint_control);


srcs = {'FrontStance','BackStance','Flight'};
tars = {'BackStance','Flight','FrontStance'};

system = addEdge(system, srcs, tars);
system = setEdgeProperties(system, srcs, tars, ...
    'Guard', {backImpact, backLiftOff, frontImpact});

end

