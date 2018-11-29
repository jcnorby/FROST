function DoubleToFrontConstraints(nlp, bounds, varargin)
    
    ip = inputParser;
    ip.addParameter('LoadPath',[],@ischar);
    ip.parse(varargin{:});
    
    domain = nlp.Plant;
    
%     opt.constraint.init_state(nlp, bounds);
%     opt.constraint.final_state(nlp, bounds);
%     opt.constraint.periodicity(nlp, bounds);
%     opt.constraint.motor_model(nlp, bounds);
%     opt.constraint.non_penetration(nlp, bounds, Foot0, Foot1, Foot2, Foot3);

    opt.constraint.joint_limits(nlp, bounds);
    opt.constraint.motor_model(nlp, bounds);
    opt.constraint.distance_traveled(nlp, bounds);
%     opt.constraint.zero_order_hold(nlp,bounds)
%     opt.constraint.average_velocity(nlp, bounds);
    opt.constraint.symmetry(nlp, bounds);
        
    if any(strcmp(fieldnames(domain.Params), 'r'))
        opt.constraint.reflected_inertia_const(nlp, bounds);
    end
    
%     opt.constraint.friction_cone(nlp, bounds);
%     opt.constraint.no_slip(nlp, bounds, Foot0, Foot1, Foot2, Foot3);
%     opt.constraint.complementarity(nlp, bounds, Foot0, Foot1, Foot2, Foot3)
    
end
