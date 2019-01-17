function distance_traveled(nlp, bounds)
    
    domain = nlp.Plant;
    x = domain.States.x;
    d = domain.Params.d;
    
    % average step velocity
    x0 = x;
    xf = SymVariable('xf',size(x0));
    d_error = tomatrix(xf(1)-x0(1) - d);
    d_fun = SymFunction(['distParam2_', nlp.Name],d_error,{x0, xf, d});
    x0_var = nlp.OptVarTable.x(1);
    xf_var = nlp.OptVarTable.x(end);
    d_var = nlp.OptVarTable.d(end);
    d_cstr = NlpFunction('Name',d_fun.Name,...
        'Dimension',1,'lb',0, 'ub',0,'Type','Linear',...
        'SymFun',d_fun,'DepVariables',[x0_var;xf_var;d_var]);
    addConstraint(nlp, 'distParam', 'last', d_cstr);

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

