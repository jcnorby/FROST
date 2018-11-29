function distance_traveled(nlp, bounds)

if any(strcmp(fieldnames(nlp.OptVarTable), 'd'))
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
end

end

