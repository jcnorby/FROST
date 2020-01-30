function friction_cone(nlp, bounds)
    gamma = 0.9;
    
    domain = nlp.Plant;
    foot0ContactForces = domain.Inputs.External.foot0Contact;
    foot1ContactForces = domain.Inputs.External.foot1Contact;
    foot2ContactForces = domain.Inputs.External.foot2Contact;
    foot3ContactForces = domain.Inputs.External.foot3Contact;
    
    frictionCone0x = [foot0ContactForces(1) - gamma*foot0ContactForces(3);-foot0ContactForces(1) - gamma*foot0ContactForces(3)];
    frictionCone0y = [foot0ContactForces(2) - gamma*foot0ContactForces(3);-foot0ContactForces(2) - gamma*foot0ContactForces(3)];
    
    frictionCone1x = [foot1ContactForces(1) - gamma*foot1ContactForces(3);-foot1ContactForces(1) - gamma*foot1ContactForces(3)];
    frictionCone1y = [foot1ContactForces(2) - gamma*foot1ContactForces(3);-foot1ContactForces(2) - gamma*foot1ContactForces(3)];
    
    frictionCone2x = [foot2ContactForces(1) - gamma*foot2ContactForces(3);-foot2ContactForces(1) - gamma*foot2ContactForces(3)];
    frictionCone2y = [foot2ContactForces(2) - gamma*foot2ContactForces(3);-foot2ContactForces(2) - gamma*foot2ContactForces(3)];
   
    frictionCone3x = [foot3ContactForces(1) - gamma*foot3ContactForces(3);-foot3ContactForces(1) - gamma*foot3ContactForces(3)];
    frictionCone3y = [foot3ContactForces(2) - gamma*foot3ContactForces(3);-foot3ContactForces(2) - gamma*foot3ContactForces(3)];
    
    
    
    frictionCones = [frictionCone0x; frictionCone0y
        frictionCone1x; frictionCone1y
        frictionCone2x; frictionCone2y
        frictionCone3x; frictionCone3y];
    
    frictionCones_fun = SymFunction('frictionCone', frictionCones, {foot0ContactForces, foot1ContactForces,foot2ContactForces,foot3ContactForces});
    addNodeConstraint(nlp, frictionCones_fun, {'foot0Contact','foot1Contact','foot2Contact','foot3Contact'}, 'all',-Inf,0,'Linear');
end