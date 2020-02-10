function [system] = LoadStanceToFlightSystem(model, load_path)
% Load the hybrid system model

if nargin < 2
    load_path = [];
end

joint_control = JointPD('simplePD');

stance = sys.domains.DoubleStance(model, load_path);
stance.UserNlpConstraint = @opt.callback.StanceConstraints;

flight = sys.domains.Flight(model, load_path);
flight.UserNlpConstraint = @opt.callback.FlightConstraints;

impact= RigidImpact('Impact', stance, 'Foot0Height'); % To frontStance
impact.addImpactConstraint(struct2array(stance.HolonomicConstraints), load_path);
impact.UserNlpConstraint = @opt.callback.ImpactConstraints;

liftoff = RigidImpact('Liftoff', flight, 'Foot2NormalForce'); % front liftoff, to flightToBack
liftoff.addImpactConstraint(struct2array(flight.HolonomicConstraints), load_path);


joint_control = JointPD('simplePD');

system = HybridSystem('vision60');
system = addVertex(system, 'Stance', 'Domain', stance,'Control', joint_control);
system = addVertex(system, 'Flight', 'Domain', flight,'Control', joint_control);

srcs = {'Stance', 'Flight'};
tars = {'Flight', 'Stance'};

system = addEdge(system, srcs, tars);
system = setEdgeProperties(system, srcs, tars, ...
    'Guard', {liftoff, impact});
% srcs = {'Stance'};
% tars = {'Flight'};
% 
% system = addEdge(system, srcs, tars);
% system = setEdgeProperties(system, srcs, tars, ...
%     'Guard', {liftoff});

end

