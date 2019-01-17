function [system] = LoadSystem(model, load_path)
% Load the hybrid system model

if nargin < 2
    load_path = [];
end

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






% frontStance = sys.domains.FrontStance(model, load_path);
% frontStance.UserNlpConstraint = @opt.callback.FrontStanceConstraints;
% backStance = sys.domains.BackStance(model, load_path);
% backStance.UserNlpConstraint = @opt.callback.BackStanceConstraints;
% 
% doubleToFront = sys.domains.DoubleStance(model, load_path);
% doubleToFront.UserNlpConstraint = @opt.callback.DoubleToFrontConstraints;
% doubleToBack = sys.domains.DoubleStance(model, load_path);
% doubleToBack.UserNlpConstraint = @opt.callback.DoubleToBackConstraints;
% 
% frontImpact = RigidImpact('FrontImpact', doubleToFront, 'Foot0Height'); % To frontStance
% frontImpact.addImpactConstraint(struct2array(doubleToFront.HolonomicConstraints), load_path);
% frontImpact.UserNlpConstraint = @opt.callback.FrontImpactConstraints;
% 
% backImpact = RigidImpact('BackImpact', doubleToBack, 'Foot1Height'); % To backStance
% backImpact.addImpactConstraint(struct2array(doubleToBack.HolonomicConstraints), load_path);
% backImpact.UserNlpConstraint = @opt.callback.BackImpactConstraints;
% 
% frontLiftOff = RigidImpact('FrontLiftOff', backStance, 'Foot2NormalForce'); % front liftoff, to flightToBack
% frontLiftOff.addImpactConstraint(struct2array(backStance.HolonomicConstraints), load_path);
% backLiftOff = RigidImpact('BackLiftOff', frontStance, 'Foot3NormalForce'); % back liftoff, to flightToFront
% backLiftOff.addImpactConstraint(struct2array(frontStance.HolonomicConstraints), load_path);
% 
% 
% joint_control = JointPD('simplePD');
% 
% system = HybridSystem('minitaur');
% system = addVertex(system, 'DoubleToFront', 'Domain', doubleToFront,'Control', joint_control);
% system = addVertex(system, 'FrontStance', 'Domain', frontStance,'Control', joint_control);
% system = addVertex(system, 'DoubleToBack', 'Domain', doubleToBack,'Control', joint_control);
% system = addVertex(system, 'BackStance', 'Domain', backStance,'Control', joint_control);
% 
% srcs = {'DoubleToFront'
%     'FrontStance'
%     'DoubleToBack'
%     'BackStance'};
% 
% tars = {'FrontStance'
%     'DoubleToBack'
%     'BackStance'
%     'DoubleToFront'};
% 
% system = addEdge(system, srcs, tars);
% system = setEdgeProperties(system, srcs, tars, ...
%     'Guard', {backLiftOff, backImpact, frontLiftOff, frontImpact});






%%%%% SWITCH TO INSTANTANEOUS

% Instantaneous
Stance03 = sys.domains.Stance03(model, load_path);
Stance03.UserNlpConstraint = @opt.callback.Stance03Constraints;
Stance12 = sys.domains.Stance12(model, load_path);
Stance12.UserNlpConstraint = @opt.callback.Stance12Constraints;

Impact03 = RigidImpact('Impact03', Stance03, 'Foot0Height'); % To frontStance
Impact03.addImpactConstraint(struct2array(Stance03.HolonomicConstraints), load_path);
Impact03.UserNlpConstraint = @opt.callback.Impact03Constraints;

Impact12 = RigidImpact('Impact12', Stance12, 'Foot1Height'); % To backStance
Impact12.addImpactConstraint(struct2array(Stance12.HolonomicConstraints), load_path);
Impact12.UserNlpConstraint = @opt.callback.Impact12Constraints;

joint_control = JointPD('simplePD');

system = HybridSystem('minitaur');
system = addVertex(system, 'Stance03', 'Domain', Stance03,'Control', joint_control);
system = addVertex(system, 'Stance12', 'Domain', Stance12,'Control', joint_control);

srcs = {'Stance03'
    'Stance12'};

tars = {'Stance12'
    'Stance03'};

system = addEdge(system, srcs, tars);
system = setEdgeProperties(system, srcs, tars, ...
    'Guard', {Impact12,Impact03});


end

