function track_state_cost(nlp, sys)

domains = sys.Gamma.Nodes.Domain;

for i=1:numel(domains)
    phase = getPhaseIndex(nlp,sys.Gamma.Nodes.Name{i});
    domain = domains{i};
    
    x = domain.States.x;
    dx = domain.States.dx;
    
    tvec = linspace(nlp.Phase(phase).Options.ConstantTimeHorizon(1),nlp.Phase(phase).Options.ConstantTimeHorizon(2),nlp.Phase(phase).NumNode);
    s = nlp.Phase(phase).UserParams.traj.state;
    a = nlp.Phase(phase).UserParams.traj.action;
    T = tvec(end) - tvec(1);
    
    if strcmp(domain.Name, 'DoubleStance')
        com_state = applyStance3D(s,a,tvec);
    else
        s_takeoff = applyStance3D(s, a); 
        com_state = applyFlight3D(s_takeoff, tvec);
    end
    
    com_pos_traj = com_state(1:3,:);
    com_vel_traj = com_state(4:6,:);
    
    com_pos = SymVariable('compos', 3);
    com_vel = SymVariable('comvel', 3);
    state_error = [x(1:3) - tomatrix(com_pos);0.1*(dx(1:3) - tomatrix(com_vel))];
    t_fun = SymFunction('trackStateCost',sum(state_error.^2),{x,dx}, {[com_pos; com_vel]});
    
    for i = 1:nlp.Phase(phase).NumNode
        auxdata = [com_pos_traj(:,i);com_vel_traj(:,i)];
        addNodeCost(nlp.Phase(phase), t_fun, {'x', 'dx'},i, auxdata);
    end
    
end
nlp.update;
end
