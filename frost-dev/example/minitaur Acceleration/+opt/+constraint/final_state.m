function final_state(nlp, bounds)
% constraints for step length and step width
global bTail

domain = nlp.Phase(end).Plant;

x = domain.States.x;
dx = domain.States.dx;

%     finalPos = x('BasePosX') - 0.1;

%     finalPos = x('BasePosZ') - 0.6;
%     finalPitch = [x('BaseRotX');x('BaseRotY');x('BaseRotZ')];

finalVel = [dx('motor_front_leftL_joint')
    dx('motor_front_leftR_joint')
    dx('knee_front_leftL_link')
    dx('knee_front_leftR_link')
    dx('motor_front_rightL_joint')
    dx('motor_front_rightR_joint')
    dx('knee_front_rightL_link')
    dx('knee_front_rightR_link')];

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

if(~exist('finalPos','var'))
    finalPos = [];
end
if(~exist('finalVel','var'))
    finalVel = [];
end
finalState = [finalPos; finalVel];

angle = 0.5*[x('motor_front_leftR_joint') - x('motor_front_leftL_joint')
    x('motor_front_rightL_joint') - x('motor_front_rightR_joint')];

angvel = 0.5*[dx('motor_front_leftR_joint') - dx('motor_front_leftL_joint')
    dx('motor_front_rightL_joint') - dx('motor_front_rightR_joint')];

extvel = 0.5*[dx('motor_front_leftR_joint') + dx('motor_front_leftL_joint')
    dx('motor_front_rightL_joint') + dx('motor_front_rightR_joint')];

ang_fun = SymFunction('jointAngFinalState', [angle; angvel; extvel], {x, dx});
% addNodeConstraint(nlp.Phase(end), ang_fun, {'x', 'dx'}, 'last', ...
%     [-pi,-pi,-pi,-pi,0,0],[0,0,0,0,10,10],'Linear');

finalState_fun = SymFunction('finalState', finalState, {x, dx});
addNodeConstraint(nlp.Phase(end), finalState_fun, {'x', 'dx'}, 'last',  ...
    0,0,'Linear');

minFinalForwardVel = [dx('BasePosX')];
minFinalForwardVel_fun = SymFunction('minFinalForwardVel', minFinalForwardVel, {dx});
addNodeConstraint(nlp.Phase(end), minFinalForwardVel_fun, {'dx'}, 'last',  ...
    1.3,10,'Linear');

% finalPitch_fun = SymFunction('finalPitch', finalPitch, {x, dx});
% addNodeConstraint(nlp, finalPitch_fun, {'x', 'dx'}, 'last',  ...
%     0,0,'Linear');




g = -9.81;
yFinal = sind(60)*0.24;
tTD = (-dx('BasePosZ') - sqrt(dx('BasePosZ').^2 - 4*(g/2)*(x('BasePosZ') - yFinal)))/g;
thetaTD = x('BaseRotY') + dx('BaseRotY')*tTD;

zeroRotation_fun = SymFunction('zeroRotation', thetaTD, {x,dx});
% addNodeConstraint(nlp.Phase(end), zeroRotation_fun, {'x','dx'}, 'last',  ...
%     0,0,'Linear');

% if bTail
%     addNodeConstraint(nlp.Phase(end), zeroRotation_fun, {'x','dx'}, 'last',  ...
%         10/180*pi,15/180*pi,'Linear');
% else
%     addNodeConstraint(nlp.Phase(end), zeroRotation_fun, {'x','dx'}, 'last',  ...
%         0/180*pi,0/180*pi,'Linear');
% end

addNodeConstraint(nlp.Phase(end), zeroRotation_fun, {'x','dx'}, 'last',  ...
        0/180*pi,0/180*pi,'Linear');

end

