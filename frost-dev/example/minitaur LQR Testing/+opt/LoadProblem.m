function nlp  = LoadProblem(robot, bounds, load_path)
    
    if nargin < 3
        load_path = [];
    end
    

    num_grid = 20;
    horizon = 1;
    
    options = {'EqualityConstraintBoundary', 1e-4,...
        'ConstantTimeHorizon',[0,horizon]',...
        'DistributeParameters',false};
    
%     system.UserNlpConstraint = @opt.callback.StanceConstraints;
    
    
    
stance = sys.domains.DoubleStance(robot, load_path);
stance.UserNlpConstraint = @opt.callback.StanceConstraints;

% frontImpact = RigidImpact('FrontImpact', stance, 'Foot0Height'); % To frontStance
% frontImpact.addImpactConstraint(struct2array(stance.HolonomicConstraints), load_path);
% frontImpact.UserNlpConstraint = @opt.callback.FrontImpactConstraints;
% 
% backImpact = RigidImpact('BackImpact', backStance, 'Foot1Height'); % To backStance
% backImpact.addImpactConstraint(struct2array(backStance.HolonomicConstraints), load_path);
% backImpact.UserNlpConstraint = @opt.callback.BackImpactConstraints;

% joint_control = JointPD('simplePD');

% system = HybridSystem('minitaur');
% system = addVertex(system, 'Stance', 'Domain', stance,'Control', joint_control);
% system = addVertex(system, 'FrontStance', 'Domain', stance,'Control', joint_control);

% srcs = {'BackStance'
%     'FrontStance'};
% 
% tars = {'FrontStance'
%     'BackStance'};
% 
% system = addEdge(system, srcs, tars);
% system = setEdgeProperties(system, srcs, tars, ...
%     'Guard', {frontImpact,backImpact});
    
    
    
    
%     nlp = HybridTrajectoryOptimization('minitaur_opt', system, num_grid, [], options{:});
    nlp = TrajectoryOptimization('Stance', stance, num_grid, [], options{:});
    
    if isempty(load_path)
        nlp.configure(bounds);
    else
        nlp.configure(bounds, 'LoadPath',load_path);
    end
    % cost function
    opt.cost.zero(nlp, stance);
%     opt.cost.Torque(nlp, robot);
%     opt.cost.Height(nlp, robot);
    nlp.update;
        
        
end