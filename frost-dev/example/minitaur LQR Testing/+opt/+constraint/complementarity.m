function complementarity(nlp, bounds, Foot0, Foot1, Foot2, Foot3)
    % constraints for impact velocities
    
    domain = nlp.Plant;
    x = domain.States.x;
    foot0Contact = domain.Inputs.External.foot0Contact;
    foot1Contact = domain.Inputs.External.foot1Contact;
    foot2Contact = domain.Inputs.External.foot2Contact;
    foot3Contact = domain.Inputs.External.foot3Contact;
    foot0normalforce = foot0Contact(3);
    foot1normalforce = foot1Contact(3);
    foot2normalforce = foot2Contact(3);
    foot3normalforce = foot3Contact(3);
    footForces = [foot0normalforce;foot1normalforce;foot2normalforce;foot3normalforce];
    
    p_foot0 = getCartesianPosition(domain, Foot0);
    p_foot1 = getCartesianPosition(domain, Foot1);
    p_foot2 = getCartesianPosition(domain, Foot2);
    p_foot3 = getCartesianPosition(domain, Foot3);
    
    feet_height = [p_foot0(3);p_foot1(3);p_foot2(3);p_foot3(3)];
    
    comp = feet_height.*footForces;
    
    comp_func = SymFunction('complementarity', comp, {x, foot0Contact, foot1Contact, foot2Contact, foot3Contact});
    
    % impact swing foot velocity
    % (Make sure foot goes downward and slightly backward)
    lb = bounds.constrBounds.complementarity.lb;
    ub = bounds.constrBounds.complementarity.ub;
    addNodeConstraint(nlp, comp_func, {'x','foot0Contact','foot1Contact','foot2Contact','foot3Contact'}, 'all', lb, ub, 'NonLinear');
    
end