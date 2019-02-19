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
        x('BasePosY')
        x('BasePosZ') - sind(60)*0.24;
        x('BaseRotX')
        x('BaseRotY')
        x('BaseRotZ')
        x('motor_front_leftL_joint') - pi/2 
        x('motor_front_leftR_joint') - pi/2
        x('knee_front_leftL_link') - acos(1/2)
        x('knee_front_leftR_link') - acos(1/2)
        x('motor_back_leftL_joint') - pi/2
        x('motor_back_leftR_joint') - pi/2
        x('knee_back_leftL_link') - acos(1/2)
        x('knee_back_leftR_link') - acos(1/2)
        x('motor_front_rightL_joint') - pi/2
        x('motor_front_rightR_joint') - pi/2
        x('knee_front_rightL_link') - acos(1/2)
        x('knee_front_rightR_link') - acos(1/2)
        x('motor_back_rightL_joint') - pi/2
        x('motor_back_rightR_joint') - pi/2
        x('knee_back_rightL_link') - acos(1/2)
        x('knee_back_rightR_link') - acos(1/2)];
    
%     motor = pi/2;
%     knee = acos(1/2);
%     test = [0;0;sind(60)*0.24;0;0;0;motor;motor;knee;knee;motor;motor;knee;knee;motor;motor;knee;knee;motor;motor;knee;knee;0;0;0;0]
%     ddq = zeros(26,1)
%     ddq(1) = 1;
    
    initVel = dx;

    initState = SymFunction('initState', [initPos; initVel], {x,dx});
    addNodeConstraint(nlp, initState, {'x','dx'}, 'first',  ...
        0,0,'Linear');
    
    
    
end

