function final_state(nlp, bounds)
% constraints for step length and step width

domain = nlp.Phase(end).Plant;

x = domain.States.x;
dx = domain.States.dx;

finalPos = [x('BasePosY')
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
    
    finalVel = dx;

if(~exist('finalPos','var'))
    finalPos = [];
end
if(~exist('finalVel','var'))
    finalVel = [];
end
finalState = [finalPos; finalVel];

finalState_fun = SymFunction('finalState', finalState, {x, dx});
addNodeConstraint(nlp.Phase(end), finalState_fun, {'x', 'dx'}, 'last',  ...
    0,0,'Linear');

end

