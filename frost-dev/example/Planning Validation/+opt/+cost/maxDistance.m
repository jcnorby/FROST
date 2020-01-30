function maxDistance(nlp, sys)
    
    i = length(sys.Gamma.Nodes.Domain);
    domain = sys.Gamma.Nodes.Domain{i};
    
    x = domain.States.x;
    dx = domain.States.dx;
    
    g = -9.81;
    yFinal = sind(60)*0.24;
    tTD = (-dx('BasePosZ') - sqrt(dx('BasePosZ').^2 - 4*(g/2)*(x('BasePosZ') - yFinal)))/g;
    xTD = x('BasePosX') + dx('BasePosX')*tTD;
%     thetaTD = x('BaseRotY') + dx('BaseRotY')*tTD;
    
%     invDist = 1/(xTD + 1e-6);
    invDist = 5-xTD;
    finalForwardVelocity_fun = SymFunction('maxDistance',invDist,{x,dx});
    addNodeCost(nlp.Phase(end),finalForwardVelocity_fun,{'x','dx'}, 'last');
  
    domains = sys.Gamma.Nodes.Domain;

    nlp.update;
end
