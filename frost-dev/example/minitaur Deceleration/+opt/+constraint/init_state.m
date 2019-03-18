function init_state(nlp, bounds)
    % constraints for step length and step width
    
    domain = nlp.Plant;

    x = domain.States.x;
    dx = domain.States.dx;
    
%     initPos = [x('BasePosX')
%         x('BasePosY')
%         x('BaseRotZ')];
%     
%     initVel = dx('BasePosZ');
    
    initPos = [x('BasePosX')
        x('BasePosZ') - 0.3
        x('BaseRotY')];
%         x('motor_front_leftL_joint') - pi/2 
%         x('motor_front_leftR_joint') - pi/2
%         x('knee_front_leftL_link') - acos(1/2)
%         x('knee_front_leftR_link') - acos(1/2)
%         x('motor_back_leftL_joint') - pi/2
%         x('motor_back_leftR_joint') - pi/2
%         x('knee_back_leftL_link') - acos(1/2)
%         x('knee_back_leftR_link') - acos(1/2)
%         x('motor_front_rightL_joint') - pi/2
%         x('motor_front_rightR_joint') - pi/2
%         x('knee_front_rightL_link') - acos(1/2)
%         x('knee_front_rightR_link') - acos(1/2)
%         x('motor_back_rightL_joint') - pi/2
%         x('motor_back_rightR_joint') - pi/2
%         x('knee_back_rightL_link') - acos(1/2)
%         x('knee_back_rightR_link') - acos(1/2)];
    
    initVel = [dx('BasePosX') - 1.5
        dx('BasePosZ');
        dx('BaseRotY')]; 
    
%         dx('motor_front_leftL_joint')
%         dx('motor_front_leftR_joint')
%         dx('knee_front_leftL_link')
%         dx('knee_front_leftR_link')
%         dx('motor_back_leftL_joint')
%         dx('motor_back_leftR_joint')
%         dx('knee_back_leftL_link')
%         dx('knee_back_leftR_link')
%         dx('motor_front_rightL_joint')
%         dx('motor_front_rightR_joint')
%         dx('knee_front_rightL_link')
%         dx('knee_front_rightR_link')
%         dx('motor_back_rightL_joint')
%         dx('motor_back_rightR_joint')
%         dx('knee_back_rightL_link')
%         dx('knee_back_rightR_link')];
    
%     initVel = [];

    initState = SymFunction('initState', [initPos; initVel], {x,dx});
    addNodeConstraint(nlp, initState, {'x','dx'}, 'first',  ...
        0,0,'Linear');
    
%     minInitialForwardVel = [dx('BasePosX')];
%     minInitialForwardVel_fun = SymFunction('minInitialForwardVel', minInitialForwardVel, {dx});
%     addNodeConstraint(nlp, minInitialForwardVel_fun, {'dx'}, 'first',  ...
%         1.5,15,'Linear');
    
    
end

