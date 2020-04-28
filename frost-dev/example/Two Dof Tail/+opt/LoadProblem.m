function nlp  = LoadProblem(robot, bounds, load_path)
    
    if nargin < 3
        load_path = [];
    end
    

    num_grid = 20;
    
    options = {'EqualityConstraintBoundary', 1e-4,...
        'DistributeTimeVariable', false,...
        'DistributeParameters',false};
    
    robot.UserNlpConstraint = @opt.callback.Constraints;
    
    nlp = TrajectoryOptimization('two_dof_tail', robot, num_grid, [], options{:});
    
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