function [system] = LoadSystem(model, load_path)
% Load the hybrid system model

if nargin < 2
    load_path = [];
end

joint_control = JointPD('simplePD');


frontStance = sys.domains.FrontStance(model, load_path);
frontStance.UserNlpConstraint = @opt.callback.FrontStanceConstraints;
% backStance = sys.domains.BackStance(model, load_path);
% backStance.UserNlpConstraint = @opt.callback.BackStanceConstraints;
stance = sys.domains.DoubleStance(model, load_path);
stance.UserNlpConstraint = @opt.callback.StanceConstraints;
% 
flightToFront = sys.domains.Flight(model, load_path);
flightToFront.UserNlpConstraint = @opt.callback.FlightToFrontConstraints;
% flightToBack = sys.domains.Flight(model, load_path);
% flightToBack.UserNlpConstraint = @opt.callback.FlightToBackConstraints;
% 
frontImpact = RigidImpact('FrontImpact', frontStance, 'Foot0Height'); % To frontStance
frontImpact.addImpactConstraint(struct2array(frontStance.HolonomicConstraints), load_path);
frontImpact.UserNlpConstraint = @opt.callback.FrontImpactConstraints;
% 
% backImpact = RigidImpact('BackImpact', backStance, 'Foot1Height'); % To backStance
% backImpact.addImpactConstraint(struct2array(backStance.HolonomicConstraints), load_path);
% backImpact.UserNlpConstraint = @opt.callback.BackImpactConstraints;

allImpact= RigidImpact('AllImpact', stance, 'Foot0Height'); % To frontStance
allImpact.addImpactConstraint(struct2array(stance.HolonomicConstraints), load_path);
allImpact.UserNlpConstraint = @opt.callback.FrontImpactConstraints;
% 
frontLiftOff = RigidImpact('FrontLiftOff', flightToFront, 'Foot2NormalForce'); % front liftoff, to flightToBack
frontLiftOff.addImpactConstraint(struct2array(flightToFront.HolonomicConstraints), load_path);
% backLiftOff = RigidImpact('BackLiftOff', flightToFront, 'Foot3NormalForce'); % back liftoff, to flightToFront
% backLiftOff.addImpactConstraint(struct2array(flightToFront.HolonomicConstraints), load_path);
% 
% joint_control = JointPD('simplePD');
% 
% system = HybridSystem('minitaur');
% system = addVertex(system, 'FlightToFront', 'Domain', flightToFront,'Control', joint_control);
% system = addVertex(system, 'FrontStance', 'Domain', frontStance,'Control', joint_control);
% system = addVertex(system, 'FlightToBack', 'Domain', flightToBack,'Control', joint_control);
% system = addVertex(system, 'BackStance', 'Domain', backStance,'Control', joint_control);
% 
% srcs = {'FlightToFront'
%     'FrontStance'
%     'FlightToBack'
%     'BackStance'};
% 
% tars = {'FrontStance'
%     'FlightToBack'
%     'BackStance'
%     'FlightToFront'};

joint_control = JointPD('simplePD');

system = HybridSystem('vision60');
% system = addVertex(system, 'FlightToFront', 'Domain', flightToFront,'Control', joint_control);
% system = addVertex(system, 'FrontStance', 'Domain', frontStance,'Control', joint_control);
system = addVertex(system, 'Flight', 'Domain', flightToFront,'Control', joint_control);
system = addVertex(system, 'Stance', 'Domain', stance,'Control', joint_control);

% srcs = {'FlightToFront', 'FrontStance'};
% tars = {'FrontStance', 'FlightToFront'};
srcs = {'Flight', 'Stance'};
tars = {'Stance', 'Flight'};

system = addEdge(system, srcs, tars);
system = setEdgeProperties(system, srcs, tars, ...
    'Guard', {allImpact, frontLiftOff});


end

