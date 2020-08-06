function periodicity(nlp, bounds)
    % constraints for impact velocities
    
    domain = nlp.Plant;
    x = domain.States.x;
    dx = domain.States.dx;
    
    % average step velocity
    p_lb = bounds.constrBounds.periodicity.lb;
    p_ub = bounds.constrBounds.periodicity.ub;
    x0 = x;
    dx0 = dx;
    xf = SymVariable('xf',size(x));
    dxf = SymVariable('dxf',size(dx));
    p_error = tomatrix([xf(2:end)-x0(2:end);dxf-dx0]);
%     p_error = tomatrix([xf(2:end)-x0(2:end);dxf([1:2,4:end])-dx0([1:2,4:end])]);
    p_fun = SymFunction('periodicity',p_error,{x0, xf, dx0, dxf});
    x0_var = nlp.OptVarTable.x(1);
    dx0_var = nlp.OptVarTable.dx(1);
    xf_var = nlp.OptVarTable.x(end);
    dxf_var = nlp.OptVarTable.dx(end);
    p_cstr = NlpFunction('Name',p_fun.Name,...
        'Dimension',length(p_error),'lb',p_lb, 'ub',p_ub,'Type','Nonlinear',...
        'SymFun',p_fun,'DepVariables',[x0_var;xf_var;dx0_var;dxf_var]);
    addConstraint(nlp, 'periodicity', 'last', p_cstr);

%     p_lb = bounds.constrBounds.periodicity.lb;
%     p_ub = bounds.constrBounds.periodicity.ub;
%     x0 = x;
%     xf = SymVariable('xf',size(x));
%     p_error = tomatrix(xf(2:end)-x0(2:end));
%     p_fun = SymFunction('periodicity',p_error,{x0, xf});
%     x0_var = nlp.OptVarTable.x(1);
%     xf_var = nlp.OptVarTable.x(end);
%     p_cstr = NlpFunction('Name',p_fun.Name,...
%         'Dimension',length(p_error),'lb',p_lb, 'ub',p_ub,'Type','Nonlinear',...
%         'SymFun',p_fun,'DepVariables',[x0_var;xf_var]);
%     addConstraint(nlp, 'periodicity', 'last', p_cstr);
    
%     dist = x(1);
%     minDist = SymFunction('minDist', dist, {x});
%     addNodeConstraint(nlp, minDist, {'x'}, 'last',  ...
%         bounds.constrBounds.minDist.lb, ...
%         bounds.constrBounds.minDist.ub,'Linear');
    
end