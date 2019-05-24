function param_cont_T(nlp, bounds)

if length(nlp.Phase) == 3
    if any(strcmp(fieldnames(nlp.Phase(1).OptVarTable), 'tfinal'))
        tfinal = SymVariable('tfinal');
        tfinalActual1 = SymVariable('tfinalActuall', 2);
        tfinalActual2 = SymVariable('tfinalActual2', 2);
        
        paramContT = tomatrix(tfinal - (tfinalActual1(2) + tfinalActual2(2)));
        paramContT_fun = SymFunction('paramContT',paramContT,{tfinal, tfinalActual1,tfinalActual2});
        
        tfinalActual1_var = nlp.Phase(1).OptVarTable.T(1);
        tfinalActual2_var = nlp.Phase(3).OptVarTable.T(1);
        
        for i = 1:length(nlp.Phase)
            if any(strcmp(fieldnames(nlp.Phase(i).OptVarTable), 'tfinal'))
                tfinal_var = nlp.Phase(i).OptVarTable.tfinal(1);
                
                paramCont_cstrT = NlpFunction('Name',paramContT_fun.Name,...
                    'Dimension',length(paramContT),'lb',0, 'ub',0,'Type','Linear',...
                    'SymFun',paramContT_fun,'DepVariables',[tfinal_var, tfinalActual1_var,tfinalActual2_var]);
                
                addConstraint(nlp.Phase(i), paramCont_cstrT.Name, 'first', paramCont_cstrT);
            end
        end
        
    end
elseif length(nlp.Phase) == 5 || length(nlp.Phase) == 6
    if any(strcmp(fieldnames(nlp.Phase(1).OptVarTable), 'tfinal'))
        tfinal = SymVariable('tfinal');
        tfinalActual1 = SymVariable('tfinalActuall', 2);
        tfinalActual2 = SymVariable('tfinalActual2', 2);
        tfinalActual3 = SymVariable('tfinalActual3', 2);
        
        paramContT = tomatrix(tfinal - (tfinalActual1(2) + tfinalActual2(2) + tfinalActual3(2)));
        paramContT_fun = SymFunction('paramContT',paramContT,{tfinal, tfinalActual1,tfinalActual2,tfinalActual3});
        
        tfinalActual1_var = nlp.Phase(1).OptVarTable.T(1);
        tfinalActual2_var = nlp.Phase(3).OptVarTable.T(1);
        tfinalActual3_var = nlp.Phase(5).OptVarTable.T(1);
        
        for i = 1:length(nlp.Phase)
            if any(strcmp(fieldnames(nlp.Phase(i).OptVarTable), 'tfinal'))
                tfinal_var = nlp.Phase(i).OptVarTable.tfinal(1);
                
                paramCont_cstrT = NlpFunction('Name',paramContT_fun.Name,...
                    'Dimension',length(paramContT),'lb',0, 'ub',0,'Type','Linear',...
                    'SymFun',paramContT_fun,'DepVariables',[tfinal_var, tfinalActual1_var,tfinalActual2_var,tfinalActual3_var]);
                
                addConstraint(nlp.Phase(i), paramCont_cstrT.Name, 'first', paramCont_cstrT);
            end
        end
        
    end
else
    error('Wrong number of phases!')
end