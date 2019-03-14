function finalForwardVelocity(nlp, sys)
    
    i = length(sys.Gamma.Nodes.Domain);
    domain = sys.Gamma.Nodes.Domain{i};
    
    dx = domain.States.dx;
    
    invSpeed = 1/(dx(1) + 1e-6);
    finalForwardVelocity_fun = SymFunction('finalForwardVelocity',invSpeed,{dx});
    addNodeCost(nlp.Phase(end),finalForwardVelocity_fun,{'dx'}, 'last');
  
    domains = sys.Gamma.Nodes.Domain;

    nlp.update;
end
