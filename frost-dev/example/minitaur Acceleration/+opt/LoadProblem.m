function nlp  = LoadProblem(robot, bounds, load_path)

if nargin < 3
    load_path = [];
end


num_grid.Stance = 10;
num_grid.BackStance = 10;

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
% opt.cost.avgAcceleration(nlp, system);
% opt.cost.finalForwardVelocityMinEnergy(nlp, system);
%     opt.cost.Torque(nlp, robot);
%     opt.cost.Height(nlp, robot);


for i = 1:length(nlp.Phase)
    if nlp.Phase(i).NumNode == 1
        removeConstraint(nlp.Phase(i),'tContDomain');
    end
end

if any(strcmp(fieldnames(nlp.Phase(1).OptVarTable), 'r'))
    
    R = SymVariable('r');
    RNext = SymVariable('rNext');
    
    paramContR = tomatrix(R - RNext);
    paramContR_fun = SymFunction('paramContR',paramContR,{R, RNext});

    for i = 1:2:length(nlp.Phase)-2
        R_var = nlp.Phase(i).OptVarTable.r(1);

        RNext_var = nlp.Phase(i+2).OptVarTable.r(1);
        
        paramContR_cstr = NlpFunction('Name',paramContR_fun.Name,...
        'Dimension',length(paramContR),'lb',0, 'ub',0,'Type','Linear',...
        'SymFun',paramContR_fun,'DepVariables',[R_var,RNext_var]);
    
        addConstraint(nlp.Phase(i), paramContR_cstr.Name, 'first', paramContR_cstr);
    end

end

if any(strcmp(fieldnames(nlp.Phase(1).OptVarTable), 'tfinal'))
    tfinal = SymVariable('tfinal');
    tfinalActual1 = SymVariable('tfinalActuall', 2);
    tfinalActual2 = SymVariable('tfinalActual2', 2);
    
    paramContT = tomatrix(tfinal - (tfinalActual1(2) + tfinalActual2(2)));
    paramContT_fun = SymFunction('paramContT',paramContT,{tfinal, tfinalActual1,tfinalActual2});

    tfinalActual1_var = nlp.Phase(1).OptVarTable.T(1);
    tfinalActual2_var = nlp.Phase(3).OptVarTable.T(1);

    for i = 1:length(nlp.Phase)
        if any(strcmp(fieldnames(nlp.Phase(i).OptVarTable), 'tfinal'))
            tfinal_var = nlp.Phase(i).OptVarTable.tfinal(1);
            
            paramCont_cstrT = NlpFunction('Name',paramContT_fun.Name,...
                'Dimension',length(paramContT),'lb',0, 'ub',0,'Type','Linear',...
                'SymFun',paramContT_fun,'DepVariables',[tfinal_var, tfinalActual1_var,tfinalActual2_var]);
            
            addConstraint(nlp.Phase(i), paramCont_cstrT.Name, 'first', paramCont_cstrT);
        end
    end
    
end

nlp.update;


end