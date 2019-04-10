function [system] = LoadSystem(model, load_path)
% Load the hybrid system model

if nargin < 2
    load_path = [];
end

% No Sliding
%
% % Define domains
% flight = sys.domains.Flight(model, load_path);
% flight.UserNlpConstraint = @opt.callback.FlightToFrontConstraints;
% 
% frontStance = sys.domains.FrontStance(model, load_path);
% frontStance.UserNlpConstraint = @opt.callback.FrontStanceConstraints;
% 
% % stanceSliding = sys.domains.DoubleStanceSliding(model, load_path);
% % stanceSliding.UserNlpConstraint = @opt.callback.StanceSlidingConstraints;
% 
% stance = sys.domains.DoubleStance(model, load_path);
% stance.UserNlpConstraint = @opt.callback.StanceConstraints;
% 
% % Define transitions
% frontImpact = RigidImpact('FrontImpact', frontStance, 'Foot0Height'); % To frontStance
% frontImpact.addImpactConstraint(struct2array(frontStance.HolonomicConstraints), load_path);
% frontImpact.UserNlpConstraint = @opt.callback.FrontImpactConstraints;
% 
% backImpact = RigidImpact('BackImpact', stance, 'Foot1Height'); % To backStance
% backImpact.addImpactConstraint(struct2array(stance.HolonomicConstraints), load_path);
% backImpact.UserNlpConstraint = @opt.callback.BackImpactConstraints;
% 
% % impact = RigidImpact('Impact', stanceSliding, 'Foot0Height'); % To frontStance
% % impact.addImpactConstraint(struct2array(stanceSliding.HolonomicConstraints), load_path);
% % impact.UserNlpConstraint = @opt.callback.ImpactConstraints;
% 
% % This does nothing for optimization, just for simulation
% joint_control = JointPD('simplePD');
% 
% system = HybridSystem('minitaur');
% system = addVertex(system, 'Flight', 'Domain', flight,'Control', joint_control);
% system = addVertex(system, 'FrontStance', 'Domain', frontStance,'Control', joint_control);
% system = addVertex(system, 'Stance', 'Domain', stance,'Control', joint_control);
% 
% 
% srcs = {'Flight','FrontStance'};
% tars = {'FrontStance', 'Stance'};
% 
% system = addEdge(system, srcs, tars);
% system = setEdgeProperties(system, srcs, tars, ...
%     'Guard', {frontImpact, backImpact});


% With Sliding

% Define domains
flight = sys.domains.Flight(model, load_path);
flight.UserNlpConstraint = @opt.callback.FlightToFrontConstraints;

slidingStance = sys.domains.SlidingStance(model, load_path);
slidingStance.UserNlpConstraint = @opt.callback.SlidingStanceConstraints;

stance = sys.domains.DoubleStance(model, load_path);
stance.UserNlpConstraint = @opt.callback.StanceConstraints;

% Define transitions

impact1 = RigidImpact('Impact1', slidingStance, 'Foot0Height'); % To frontStance
impact1.addImpactConstraint(struct2array(slidingStance.HolonomicConstraints), load_path);
impact1.UserNlpConstraint = @opt.callback.Impact1Constraints;

impact2 = RigidImpact('Impact2', stance, 'Foot0Vel'); % To frontStance
impact2.addImpactConstraint(struct2array(stance.HolonomicConstraints), load_path);
impact2.UserNlpConstraint = @opt.callback.Impact2Constraints;

% This does nothing for optimization, just for simulation
joint_control = JointPD('simplePD');

system = HybridSystem('minitaur');
system = addVertex(system, 'Flight', 'Domain', flight,'Control', joint_control);
system = addVertex(system, 'SlidingStance', 'Domain', slidingStance,'Control', joint_control);
system = addVertex(system, 'Stance', 'Domain', stance,'Control', joint_control);


srcs = {'Flight','SlidingStance'};
tars = {'SlidingStance', 'Stance'};

system = addEdge(system, srcs, tars);
system = setEdgeProperties(system, srcs, tars, ...
    'Guard', {impact1, impact2});

end

