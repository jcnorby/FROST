function [system] = LoadSystem(model, load_path)
% Load the hybrid system model

if nargin < 2
    load_path = [];
end

joint_control = JointPD('simplePD');

system = HybridSystem('minitaur');
system = addVertex(system, 'TailTest', 'Domain', model,'Control', joint_control);

% 
% frontStance = sys.domains.FrontStance(model, load_path);
% frontStance.UserNlpConstraint = @opt.callback.FrontStanceConstraints;
% backStance = sys.domains.BackStance(model, load_path);
% backStance.UserNlpConstraint = @opt.callback.BackStanceConstraints;
% 
% flightToFront = sys.domains.Flight(model, load_path);
% flightToFront.UserNlpConstraint = @opt.callback.FlightToFrontConstraints;
% flightToBack = sys.domains.Flight(model, load_path);
% flightToBack.UserNlpConstraint = @opt.callback.FlightToBackConstraints;
% 
% frontImpact = RigidImpact('FrontImpact', frontStance, 'Foot0Height'); % To frontStance
% frontImpact.addImpactConstraint(struct2array(frontStance.HolonomicConstraints), load_path);
% frontImpact.UserNlpConstraint = @opt.callback.FrontImpactConstraints;
% 
% backImpact = RigidImpact('BackImpact', backStance, 'Foot1Height'); % To backStance
% backImpact.addImpactConstraint(struct2array(backStance.HolonomicConstraints), load_path);
% backImpact.UserNlpConstraint = @opt.callback.BackImpactConstraints;
% 
% frontLiftOff = RigidImpact('FrontLiftOff', flightToBack, 'Foot2NormalForce'); % front liftoff, to flightToBack
% frontLiftOff.addImpactConstraint(struct2array(flightToBack.HolonomicConstraints), load_path);
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
% 
% system = addEdge(system, srcs, tars);
% system = setEdgeProperties(system, srcs, tars, ...
%     'Guard', {frontImpact, frontLiftOff, backImpact, backLiftOff});


end

