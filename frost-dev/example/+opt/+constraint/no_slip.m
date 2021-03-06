function no_slip(nlp, bounds, Foot0, Foot1, Foot2, Foot3)
    % constraints for impact velocities
    
    domain = nlp.Plant;
    x = domain.States.x;
    dx = domain.States.dx;
    foot0Contact = domain.Inputs.External.foot0Contact;
    foot1Contact = domain.Inputs.External.foot1Contact;
    foot2Contact = domain.Inputs.External.foot2Contact;
    foot3Contact = domain.Inputs.External.foot3Contact;
    foot0normalforce = foot0Contact(3);
    foot1normalforce = foot1Contact(3);
    foot2normalforce = foot2Contact(3);
    foot3normalforce = foot3Contact(3);

    footForces = [foot0normalforce;foot0normalforce;foot0normalforce;...
        foot1normalforce;foot1normalforce;foot1normalforce;...
        foot2normalforce;foot2normalforce;foot2normalforce;...
        foot3normalforce;foot3normalforce;foot3normalforce];
    
    pos0 = getCartesianPosition(domain, Foot0);
    pos1 = getCartesianPosition(domain, Foot1);  
    pos2 = getCartesianPosition(domain, Foot2);  
    pos3 = getCartesianPosition(domain, Foot3);  
    J_pos = jacobian([pos0'; pos1'; pos2'; pos3'], x);
    
    footVel = J_pos * dx;
    
    no_slip = footVel.*footForces;
    no_slip_func = SymFunction('noSlip', no_slip, {x, dx, foot0Contact, foot1Contact, foot2Contact, foot3Contact});
    
    lb = bounds.constrBounds.noSlip.lb;
    ub = bounds.constrBounds.noSlip.ub;
    addNodeConstraint(nlp, no_slip_func, {'x','dx','foot0Contact','foot1Contact','foot2Contact','foot3Contact'}, 'all', lb, ub, 'NonLinear');
    
end
