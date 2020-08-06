function min_grf(nlp, bounds)
    % constraints for step length and step width
    
    domain = nlp.Plant;
    x = domain.States.x;
    grf = domain.Inputs.ConstraintWrench;
    
    % knee angle
    angle = 0.5*[x('motor_front_leftR_joint') - x('motor_front_leftL_joint')
        x('motor_back_leftR_joint') - x('motor_back_leftL_joint')
        x('motor_front_rightL_joint') - x('motor_front_rightR_joint')
        x('motor_back_rightL_joint') - x('motor_back_rightR_joint')];
    
    extension = 0.5*[x('motor_front_leftR_joint') + x('motor_front_leftL_joint')
        x('motor_back_leftR_joint') + x('motor_back_leftL_joint')
        x('motor_front_rightL_joint') + x('motor_front_rightR_joint')
        x('motor_back_rightL_joint') + x('motor_back_rightR_joint')];
    
    ang_fun = SymFunction('jointAng', angle, {x});
    addNodeConstraint(nlp, ang_fun, {'x'}, 'all', ...
        bounds.constrBounds.jointAng.lb, ...
        bounds.constrBounds.jointAng.ub,'Linear');
    
    ext_fun = SymFunction('jointExt', extension, {x});
    addNodeConstraint(nlp, ext_fun, {'x'}, 'all', ...
        bounds.constrBounds.jointExt.lb, ...
        bounds.constrBounds.jointExt.ub,'Linear');
    
end

