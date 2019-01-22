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
        r = domain.Params.r;
    
        u = domain.Inputs.Control.u;
        u2r = sum(tovector(0.05*u(1:8)*tomatrix(u(1:8)))) + 0.05*u(9)*u(9)/r;
        u2r_fun = SymFunction(['finalForwardVelocityMinEnergy_' sys.Gamma.Nodes.Name{i}],u2r,{u, r});
        rs_phase = getPhaseIndex(nlp,sys.Gamma.Nodes.Name{i});
        addRunningCost(nlp.Phase(rs_phase),u2r_fun,{'u', 'r'});
        
    end
    nlp.update;
end
