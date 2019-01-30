function param_cont_R(nlp, bounds)

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

