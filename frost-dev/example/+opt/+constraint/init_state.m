function init_state(nlp, bounds)
    % constraints for step length and step width
    
    domain = nlp.Plant;

    x = domain.States.x;
    dx = domain.States.dx;
    
    initPos = [x('BasePosX')
        x('BasePosY')
        x('BaseRotZ')];
    
    initVel = dx('BasePosZ');
    
%     initPos = [x('BasePosX')
%         x('BasePosY')
%         x('BasePosZ') - 0.2*sin(1.0472);
%         x('BaseRotX')
%         x('BaseRotY')
%         x('BaseRotZ')
%         x('motor_front_leftL_joint') - pi/2 
%         x('motor_front_leftR_joint') - pi/2
%         x('knee_front_leftL_link') - 1.0472
%         x('knee_front_leftR_link') - 1.0472
%         x('motor_back_leftL_joint') - pi/2
%         x('motor_back_leftR_joint') - pi/2
%         x('knee_back_leftL_link') - 1.0472
%         x('knee_back_leftR_link') - 1.0472
%         x('motor_front_rightL_joint') - pi/2
%         x('motor_front_rightR_joint') - pi/2
%         x('knee_front_rightL_link') - 1.0472
%         x('knee_front_rightR_link') - 1.0472
%         x('motor_back_rightL_joint') - pi/2
%         x('motor_back_rightR_joint') - pi/2
%         x('knee_back_rightL_link') - 1.0472
%         x('knee_back_rightR_link') - 1.0472];
%     
%     initVel = dx;

    initState = SymFunction('initState', [initPos; initVel], {x,dx});
    addNodeConstraint(nlp, initState, {'x','dx'}, 'first',  ...
        0,0,'Linear');
    
    
    
end

