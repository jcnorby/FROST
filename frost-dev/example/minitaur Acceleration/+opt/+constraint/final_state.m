function final_state(nlp, bounds)
% constraints for step length and step width

domain = nlp.Plant;

x = domain.States.x;
dx = domain.States.dx;

    finalPos = x('BasePosX') - 0.1;

%     finalPos = x('BasePosZ') - 0.6;
%     finalPitch = [x('BaseRotX');x('BaseRotY');x('BaseRotZ')];


% finalPos = [x('motor_front_leftL_joint') - pi/2 
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

%     finalPos = [
%         x('motor_front_leftL_joint') - pi
%         x('motor_front_leftR_joint')
%         x('knee_front_leftL_link') - 1.0472
%         x('knee_front_leftR_link') - 1.0472
%         x('motor_back_leftL_joint') - pi
%         x('motor_back_leftR_joint')
%         x('knee_back_leftL_link') - 1.0472
%         x('knee_back_leftR_link') - 1.0472
%         x('motor_front_rightL_joint')
%         x('motor_front_rightR_joint') - pi
%         x('knee_front_rightL_link') - 1.0472
%         x('knee_front_rightR_link') - 1.0472
%         x('motor_back_rightL_joint')
%         x('motor_back_rightR_joint') - pi
%         x('knee_back_rightL_link') - 1.0472
%         x('knee_back_rightR_link') - 1.0472]; 
%     finalVel = [dx('motor_front_leftL_joint')
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
    
    if(~exist('finalVel','var'))
        finalVel = [];
    end
    finalState = [finalPos; finalVel];

finalState_fun = SymFunction('finalState', finalState, {x, dx});
addNodeConstraint(nlp, finalState_fun, {'x', 'dx'}, 'last',  ...
    0,10,'Linear');

% finalPitch_fun = SymFunction('finalPitch', finalPitch, {x, dx});
% addNodeConstraint(nlp, finalPitch_fun, {'x', 'dx'}, 'last',  ...
%     0,0,'Linear');
end

