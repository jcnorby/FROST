function nlp  = LoadProblem(robot, bounds, load_path)

if nargin < 3
    load_path = [];
end


num_grid = 10;
options = {'EqualityConstraintBoundary', 1e-4,...
    'DistributeTimeVariable', false,...
    'DistributeParameters',true};

%     system.UserNlpConstraint = @opt.callback.StanceConstraints;



stance = sys.domains.DoubleStance(robot, load_path);
stance.UserNlpConstraint = @opt.callback.StanceConstraints;

backStance = sys.domains.BackStance(robot, load_path);
backStance.UserNlpConstraint = @opt.callback.BackStanceConstraints;

flight = sys.domains.Flight(robot, load_path);
% flight.UserNlpConstraint = @opt.callback.FlightToFrontConstraints;

frontLiftOff = RigidImpact('FrontLiftOff', backStance, 'Foot2NormalForce'); % front liftoff, to flightToBack
frontLiftOff.addImpactConstraint(struct2array(backStance.HolonomicConstraints), load_path);

% backLiftOff = RigidImpact('BackLiftOff', flight, 'Foot3NormalForce'); % back liftoff, to flightToFront
% backLiftOff.addImpactConstraint(struct2array(flight.HolonomicConstraints), load_path);




% frontImpact = RigidImpact('FrontImpact', stance, 'Foot0Height'); % To frontStance
% frontImpact.addImpactConstraint(struct2array(stance.HolonomicConstraints), load_path);
% frontImpact.UserNlpConstraint = @opt.callback.FrontImpactConstraints;
%
% backImpact = RigidImpact('BackImpact', backStance, 'Foot1Height'); % To backStance
% backImpact.addImpactConstraint(struct2array(backStance.HolonomicConstraints), load_path);
% backImpact.UserNlpConstraint = @opt.callback.BackImpactConstraints;

joint_control = JointPD('simplePD');

system = HybridSystem('minitaur');
system = addVertex(system, 'Stance', 'Domain', stance,'Control', joint_control);
system = addVertex(system, 'BackStance', 'Domain', backStance,'Control', joint_control);

srcs = {'Stance'};
%
tars = {'BackStance'};
%
system = addEdge(system, srcs, tars);
system = setEdgeProperties(system, srcs, tars, ...
    'Guard', {frontLiftOff});




nlp = HybridTrajectoryOptimization('minitaur_opt', system, num_grid, [], options{:});
%     nlp = TrajectoryOptimization('Stance', stance, num_grid, [], options{:});

if isempty(load_path)
    nlp.configure(bounds);
else
    nlp.configure(bounds, 'LoadPath',load_path);
end
% cost function
%     opt.cost.zero(nlp, system);
opt.cost.finalForwardVelocity(nlp, system);
%     opt.cost.Torque(nlp, robot);
%     opt.cost.Height(nlp, robot);


for i = 1:length(nlp.Phase)
    if nlp.Phase(i).NumNode == 1
        removeConstraint(nlp.Phase(i),'tContDomain');
    end
end

nlp.update;


end