function nlp  = LoadProblem(robot, bounds, load_path)
    
    if nargin < 3
        load_path = [];
    end
    

    num_grid = 40;
    horizon = 0.15617;
    
    options = {'EqualityConstraintBoundary', 1e-4,...
        'ConstantTimeHorizon',[0,horizon]',...
        'DistributeParameters',false};
    
    robot.UserNlpConstraint = @opt.callback.StanceConstraints;
    
%     nlp = HybridTrajectoryOptimization('atrias_opt', system, num_grid, [], options{:});
    nlp = TrajectoryOptimization('minitaur_opt', robot, num_grid, [], options{:});
    
    if isempty(load_path)
        nlp.configure(bounds);
    else
        nlp.configure(bounds, 'LoadPath',load_path);
    end
    % cost function
%     opt.cost.zero(nlp, robot);
    opt.cost.Torque(nlp, robot);
%     opt.cost.Height(nlp, robot);
    nlp.update;
        
        
end