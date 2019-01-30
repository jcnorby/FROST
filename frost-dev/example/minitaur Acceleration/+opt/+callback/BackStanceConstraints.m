function BackStanceConstraints(nlp, bounds, varargin)
    global bAerodynamic;
    
    ip = inputParser;
    ip.addParameter('LoadPath',[],@ischar);
    ip.parse(varargin{:});
    
    domain = nlp.Plant;
    
    Foot0 = sys.frames.Foot0(nlp.Plant);
    Foot1 = sys.frames.Foot1(nlp.Plant);
    Foot2 = sys.frames.Foot2(nlp.Plant);
    Foot3 = sys.frames.Foot3(nlp.Plant);
    
%     opt.constraint.track_state(nlp, bounds);
    opt.constraint.zero_order_hold(nlp, bounds);

    if any(strcmp(fieldnames(domain.Inputs.External), 'uReflectedInertiaLoad'))
        opt.constraint.reflected_inertia_const(nlp, bounds);
    end
    
%     opt.constraint.init_state(nlp, bounds);
%     opt.constraint.final_state(nlp, bounds);
%     opt.constraint.periodicity(nlp, bounds);
    opt.constraint.symmetry(nlp, bounds);
    opt.constraint.motor_model(nlp, bounds);
    opt.constraint.joint_limits(nlp, bounds);
    opt.constraint.non_penetration(nlp, bounds, [Foot0, Foot2]);
    %     opt.constraint.friction_cone(nlp, bounds);
    %     opt.constraint.no_slip(nlp, bounds, Foot0, Foot1, Foot2, Foot3);
    %     opt.constraint.complementarity(nlp, bounds, Foot0, Foot1, Foot2, Foot3)
    
    if bAerodynamic
        opt.constraint.aero_tail_model(nlp, bounds);
    end
    
    %%%%%%  IF INSTANTANEOUS SWITCH, USE THIS (OTHERWISE DON'T)
    
    normalForces = [domain.Inputs.ConstraintWrench.fFoot1(3);domain.Inputs.ConstraintWrench.fFoot3(3)];
    normal_forces_fun = SymFunction(['normalForces_', nlp.Name], normalForces, {domain.Inputs.ConstraintWrench.fFoot1,domain.Inputs.ConstraintWrench.fFoot3});
    
    addNodeConstraint(nlp, normal_forces_fun, {'fFoot1', 'fFoot3'}, 'last', ...
        0, 0,'Linear');

end
