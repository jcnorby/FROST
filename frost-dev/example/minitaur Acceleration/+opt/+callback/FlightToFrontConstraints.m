function FlightToFrontConstraints(nlp, bounds, varargin)
    global bAerodynamic
    
    ip = inputParser;
    ip.addParameter('LoadPath',[],@ischar);
    ip.parse(varargin{:});
    
    domain = nlp.Plant;
    
    Foot0 = sys.frames.Foot0(domain);
    Foot1 = sys.frames.Foot1(domain);
    Foot2 = sys.frames.Foot2(domain);
    Foot3 = sys.frames.Foot3(domain);
    
    swingfeet = [Foot0; Foot2; Foot1; Foot3];
    
    if any(strcmp(fieldnames(domain.Inputs.External), 'uReflectedInertiaLoad'))
        opt.constraint.reflected_inertia_const(nlp, bounds);
    end
    
%     opt.constraint.init_state(nlp, bounds);
%     opt.constraint.final_state(nlp, bounds);
%     opt.constraint.periodicity(nlp, bounds);
%     opt.constraint.motor_model(nlp, bounds);
%     opt.constraint.non_penetration(nlp, bounds, Foot0, Foot1, Foot2, Foot3);

    opt.constraint.non_penetration(nlp, bounds, swingfeet);
    opt.constraint.joint_limits(nlp, bounds);
    opt.constraint.motor_model(nlp, bounds);
%     opt.constraint.distance_traveled(nlp, bounds);
    opt.constraint.zero_order_hold(nlp,bounds)
%     opt.constraint.average_velocity(nlp, bounds);
    opt.constraint.symmetry(nlp, bounds);
%     opt.constraint.ground_speed_matching(nlp, bounds);
    
    if bAerodynamic
        opt.constraint.aero_tail_model(nlp, bounds);
    end
    
%     opt.constraint.friction_cone(nlp, bounds);
%     opt.constraint.no_slip(nlp, bounds, Foot0, Foot1, Foot2, Foot3);
%     opt.constraint.complementarity(nlp, bounds, Foot0, Foot1, Foot2, Foot3)
    
end
