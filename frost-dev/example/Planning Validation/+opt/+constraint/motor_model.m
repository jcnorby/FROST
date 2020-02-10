function motor_model(nlp, bounds)
%     constraints for motor torque

no_load_speed = 21; %rad/s
stallTorque = 230;  % Nm

domain = nlp.Plant;
u = domain.Inputs.Control.u;
dx = domain.States.dx;
B = domain.Gmap.Control.u;

motorVec = [7:9,11:13,15:17,19:21];
motorsPos = B*u - stallTorque*(1 - dx/no_load_speed);
motorsNeg = -B*u + stallTorque*(-1 - dx/no_load_speed);

% motorLimitPos = u - stallTorque;
% motorLimitNeg = -u - stallTorque;

motorModelPos_func = SymFunction('motorModelPos',motorsPos(motorVec),{u,dx});
motorModelNeg_func = SymFunction('motorModelNeg',motorsNeg(motorVec),{u,dx});
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
