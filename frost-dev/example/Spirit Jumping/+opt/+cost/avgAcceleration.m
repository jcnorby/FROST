function avgAcceleration(nlp, sys)
    
    i = length(sys.Gamma.Nodes.Domain);
    domain = sys.Gamma.Nodes.Domain{i};
    
    dx = domain.States.dx;
    
    tfinal = domain.Params.tfinal;
    
    Accel = dx(1)/(tfinal + 1e-6);
    avgAcceleration = SymFunction('avgAcceleration',10-Accel,{dx, tfinal});
    addNodeCost(nlp.Phase(3),avgAcceleration,{'dx', 'tfinal'}, 'last');
  
    domains = sys.Gamma.Nodes.Domain;
    
%     for i=1:numel(domains)
%         domain = domains{i};
%     
%         u = domain.Inputs.Control.u;
%         u2r = sum(tovector(0.01*norm(u).^2));
%         u2r_fun = SymFunction(['zero_' sys.Gamma.Nodes.Name{i}],u2r,{u});
%         rs_phase = getPhaseIndex(nlp,sys.Gamma.Nodes.Name{i});
%         addRunningCost(nlp.Phase(rs_phase),u2r_fun,{'u'});
%         
%     end
    nlp.update;
end