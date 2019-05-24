function finalForwardVelocityMinEnergy(nlp, sys)

    
    i = length(sys.Gamma.Nodes.Domain);
    domain = sys.Gamma.Nodes.Domain{i};
    
    dx = domain.States.dx;
    
    invSpeed = 1/(dx(1) + 1e-6);
    finalForwardVelocity_fun = SymFunction('finalForwardVelocity',invSpeed,{dx});
    addNodeCost(nlp.Phase(end),finalForwardVelocity_fun,{'dx'}, 'last');
  
    domains = sys.Gamma.Nodes.Domain;
    

    for i=1:numel(domains)
        domain = domains{i};
        
        if any(strcmp(fieldnames(domain.Params), 'r'))
            R = domain.Params.r;
            Rineff = 0.8;
            Rurdf = domain.Joints(getJointIndices(domain, 'tail_joint')).Actuator.Ratio;
        else
            R = 1;
            Rineff = 1;
            Rurdf = 1;
        end
        
        u = domain.Inputs.Control.u;
        
        if ~isnan(getJointIndices(domain, 'tail_joint'))
            torqueTail = u(9)*u(9)./(R*R*Rineff*Rineff*Rurdf*Rurdf);
        else
            torqueTail = 0;
        end
        
        u2r = 0.02*(sum(tovector(u(1:8)*tomatrix(u(1:8)))) + torqueTail);
        
        if any(strcmp(fieldnames(domain.Params), 'r'))
            u2r_fun = SymFunction(['finalForwardVelocityMinEnergy_' sys.Gamma.Nodes.Name{i}],u2r,{u, R});
        else
            u2r_fun = SymFunction(['finalForwardVelocityMinEnergy_' sys.Gamma.Nodes.Name{i}],u2r,{u});
        end
        
        rs_phase = getPhaseIndex(nlp,sys.Gamma.Nodes.Name{i});
        if any(strcmp(fieldnames(domain.Params), 'r'))
            addRunningCost(nlp.Phase(rs_phase),u2r_fun,{'u', 'r'});
        else
            addRunningCost(nlp.Phase(rs_phase),u2r_fun,{'u'});
        end
        
    end
    nlp.update;
end
