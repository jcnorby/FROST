function nlp  = LoadProblem(system, bounds, load_path)
    
    if nargin < 3
        load_path = [];
    end
    

%     num_grid.FlightToFront = 30;
%     num_grid.FrontStance = 30;
%     num_grid.FlightToBack = 30;
%     num_grid.BackStance = 30;
%     num_grid = 10;
%     options = {'EqualityConstraintBoundary', 1e-4,...
%         'DistributeTimeVariable', false,...
%         'DistributeParameters',true,...
%         'CollocationScheme', 'Trapezoidal'};
num_grid = 10;
options = {'EqualityConstraintBoundary', 1e-4,...
        'DistributeTimeVariable', false,...
        'DistributeParameters',true};
        
    nlp = HybridTrajectoryOptimization('minitaur_opt', system, num_grid, [], options{:});
    
    
    if isempty(load_path)
        nlp.configure(bounds);
    else
        nlp.configure(bounds, 'LoadPath',load_path);
    end
    % cost function
    opt.cost.CoT(nlp, system);
%     opt.cost.zero(nlp, system);
%     opt.cost.distanceTraveled(nlp, system);

    opt.customConstraints(nlp, bounds);


    nlp.update;
        
        
end