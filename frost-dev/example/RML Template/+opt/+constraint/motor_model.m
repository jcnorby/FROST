function motor_model(nlp, bounds)
%     constraints for motor torque

no_load_speed_hip = 360*2*pi/60; %rad/s
stallTorque_hip = 21;  % Nm
no_load_speed_knee = 245*2*pi/60; %rad/s
stallTorque_knee = 32;  % Nm

stallTorque = [stallTorque_hip;stallTorque_hip;stallTorque_knee;
    stallTorque_hip;stallTorque_hip;stallTorque_knee;
    stallTorque_hip;stallTorque_hip;stallTorque_knee;
    stallTorque_hip;stallTorque_hip;stallTorque_knee];
no_load_speed = [no_load_speed_hip;no_load_speed_hip;no_load_speed_knee;
    no_load_speed_hip;no_load_speed_hip;no_load_speed_knee;
    no_load_speed_hip;no_load_speed_hip;no_load_speed_knee;
    no_load_speed_hip;no_load_speed_hip;no_load_speed_knee];

domain = nlp.Plant;
u = domain.Inputs.Control.u;
dx = domain.States.dx;
B = domain.Gmap.Control.u;

motorVec = [7:9,11:13,15:17,19:21];
motorsPos = u - stallTorque.*(1 - tomatrix(dx(motorVec))./no_load_speed);
motorsNeg = -u + stallTorque.*(-1 - tomatrix(dx(motorVec))./no_load_speed);

% motorLimitPos = u - stallTorque;
% motorLimitNeg = -u - stallTorque;

motorModelPos_func = SymFunction('motorModelPos',motorsPos,{u,dx});
motorModelNeg_func = SymFunction('motorModelNeg',motorsNeg,{u,dx});
% motorLimitPos_func = SymFunction('motorLimitPos',motorLimitPos,{u});
% motorLimitNeg_func = SymFunction('motorLimitNeg',motorLimitNeg,{u});


addNodeConstraint(nlp, motorModelPos_func, {'u', 'dx'}, 'all', ...
    -Inf, 0,'Nonlinear');
addNodeConstraint(nlp, motorModelNeg_func, {'u', 'dx'}, 'all', ...
    -Inf, 0,'Nonlinear');
% addNodeConstraint(nlp, motorLimitPos_func, {'u'}, 'all', ...
%     -Inf, 0,'Nonlinear');
% addNodeConstraint(nlp, motorLimitNeg_func, {'u'}, 'all', ...
%     -Inf, 0,'Nonlinear');

end
