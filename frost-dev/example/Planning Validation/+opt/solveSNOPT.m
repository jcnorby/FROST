function [new_gait, sol, info, total_time] = solve(nlp, x0, info)
    
    % Link the NLP problem to a NLP solver
    solver = SnoptApplication(nlp);
    
    solver.Options.snopt.bound_frac = 1e-8;
    solver.Options.snopt.bound_push = 1e-8;
    % Possible parameter changes to solver
    solver.Options.snopt.tol = 1e-4; % 1e-3
    solver.Options.snopt.dual_inf_tol = 1e-4; % 1e-3
    solver.Options.snopt.constr_viol_tol = 1e-4;
    solver.Options.snopt.compl_inf_tol = 1e-4;
    solver.Options.snopt.max_iter = 1000;
    
    %%% Only use this if contraints are the same
    if nargin > 2
        solver.Options.snopt.point_perturbation_radius = 0;
        solver.Options.snopt.warm_start_bound_push = 1e-8;
        solver.Options.snopt.warm_start_mult_bound_push = 1e-8;
        solver.Options.snopt.mu_init = 1e-6;
        solver.Options.snopt.warm_start_init_point = 'yes';
        solver.Options.zl = info.zl;
        solver.Options.zu = info.zu;
        solver.Options.lambda = info.lambda;
    end
    
    solver.Options.snopt.acceptable_tol = 1e-2;
    solver.Options.snopt.acceptable_constr_viol_tol = 1e-4;
    solver.Options.snopt.acceptable_dual_inf_tol = 1e-2;
    solver.Options.snopt.acceptable_compl_inf_tol = 1e-2;
    
    % Run the optimization
    start_time = tic();
    if nargin < 2
        [sol, info] = optimize(solver);
    else
        [sol, info] = optimize(solver, x0);
    end
    [tspan, states, inputs, params] = exportSolution(nlp, sol);
    tspan{3} = tspan{1}(end) + tspan{3};
    
    total_time = toc(start_time);
    new_gait = struct(...
        'tspan', tspan,...
        'states', states,...
        'inputs', inputs,...
        'params', params);
    
        
end