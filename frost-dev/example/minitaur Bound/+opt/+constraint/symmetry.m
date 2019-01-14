function symmetry(nlp, bounds)
    % constraints for impact velocities
    return;
    
    domain = nlp.Plant;
    x = domain.States.x;
    dx = domain.States.dx;
    
    symmetryfun = [x('motor_front_leftL_joint') - x('motor_front_rightR_joint')
        x('motor_front_leftR_joint') - x('motor_front_rightL_joint')
        x('knee_front_leftL_link') - x('knee_front_rightR_link')
        x('knee_front_leftR_link') - x('knee_front_rightL_link')
        x('motor_back_leftL_joint') - x('motor_back_rightR_joint')
        x('motor_back_leftR_joint') - x('motor_back_rightL_joint')
        x('knee_back_leftL_link') - x('knee_back_rightR_link')
        x('knee_back_leftR_link') - x('knee_back_rightL_link')
        dx('motor_front_leftL_joint') - dx('motor_front_rightR_joint')
        dx('motor_front_leftR_joint') - dx('motor_front_rightL_joint')
        dx('knee_front_leftL_link') - dx('knee_front_rightR_link')
        dx('knee_front_leftR_link') - dx('knee_front_rightL_link')
        dx('motor_back_leftL_joint') - dx('motor_back_rightR_joint')
        dx('motor_back_leftR_joint') - dx('motor_back_rightL_joint')
        dx('knee_back_leftL_link') - dx('knee_back_rightR_link')
        dx('knee_back_leftR_link') - dx('knee_back_rightL_link')];
    
    sym_fun = SymFunction('symmetry', symmetryfun, {x,dx});
    addNodeConstraint(nlp, sym_fun, {'x','dx'}, 'all',  ...
        0,0,'Linear');
    
end