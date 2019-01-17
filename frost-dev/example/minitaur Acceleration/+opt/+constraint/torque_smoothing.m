function torque_smoothing(nlp, bounds)
    % constraints for impact velocities
    

    
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

    
    domain = nlp.Plant;
    x = domain.States.x;
    dx = domain.States.dx;
    u = domain.Inputs.Control.u;
    ffourbar = domain.Inputs.ConstraintWrench.ffourbar;

    
    uminus = SymVariable('uminus',size(u));
    uplus = SymVariable('uplus',size(u));
    ffourbarminus = SymVariable('ffourbarminus',size(ffourbar));
    ffourbarplus = SymVariable('ffourbarplus',size(ffourbar));

    sym_func_vars = {u, uminus, uplus, ffourbar,  ffourbarminus, ffourbarplus};
    
    if any(strcmp(fieldnames(nlp.OptVarTable), 'fFoot0'))
        fFoot0 = domain.Inputs.ConstraintWrench.fFoot0;
        fFoot0minus = SymVariable('fFoot0minus',size(fFoot0));
        fFoot0plus = SymVariable('fFoot0plus',size(fFoot0));
        sym_func_vars = {sym_func_vars, fFoot0, fFoot0minus, fFoot0plus};
    end
    if any(strcmp(fieldnames(nlp.OptVarTable), 'fFoot1'))
        fFoot1 = domain.Inputs.ConstraintWrench.fFoot1;
        fFoot1minus = SymVariable('fFoot1minus',size(fFoot1));
        fFoot1plus = SymVariable('fFoot1plus',size(fFoot1));
        sym_func_vars = {sym_func_vars, fFoot1, fFoot1minus, fFoot1plus};
    end
    if any(strcmp(fieldnames(nlp.OptVarTable), 'fFoot2'))
        fFoot2 = domain.Inputs.ConstraintWrench.fFoot2;
        fFoot2minus = SymVariable('fFoot2minus',size(fFoot2));
        fFoot2plus = SymVariable('fFoot2plus',size(fFoot2));
        sym_func_vars = {sym_func_vars, fFoot2, fFoot2minus, fFoot2plus};
    end
    if any(strcmp(fieldnames(nlp.OptVarTable), 'fFoot3')) 
        fFoot3 = domain.Inputs.ConstraintWrench.fFoot3;
        fFoot3minus = SymVariable('fFoot3minus',size(fFoot3));
        fFoot3plus = SymVariable('fFoot3plus',size(fFoot3));
        sym_func_vars = {sym_func_vars, fFoot3, fFoot3minus, fFoot3plus};
    end
    
    ts_fun = SymFunction('torqueSmoothing',ts,sym_func_vars);
    
    u_var = [nlp.OptVarTable.u(2:2:end);
        nlp.OptVarTable.ffourbar(2:2:end);
        nlp.OptVarTable.fFoot0(2:2:end);
        nlp.OptVarTable.fFoot1(2:2:end);
        nlp.OptVarTable.fFoot2(2:2:end);
        nlp.OptVarTable.fFoot3(2:2:end)];
    p_cstr = NlpFunction('Name',p_fun.Name,...
        'Dimension',length(p_error),'lb',p_lb, 'ub',p_ub,'Type','Nonlinear',...
        'SymFun',p_fun,'DepVariables',u_var);
    addConstraint(nlp, 'periodicity', 'interior', p_cstr);
    
    for i = 2:2:nlp.numNodes
        ts_fun = SymFunction('torqueSmoothing',ts,sym_func_vars);
        u_var = [nlp.OptVarTable.u(i);
            nlp.OptVarTable.ffourbar(i);
            nlp.OptVarTable.fFoot0(i);
            nlp.OptVarTable.fFoot1(i);
            nlp.OptVarTable.fFoot2(i);
            nlp.OptVarTable.fFoot3(i)];
        u_plus = 
        uminus = 

    end
    
end