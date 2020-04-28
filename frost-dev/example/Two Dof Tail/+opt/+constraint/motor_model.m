function motor_model(nlp, bounds)
%     constraints for motor torque

kt = 0.0954;
Ra = 0.22;
V = 16.5;

stallTorque = 3;

domain = nlp.Plant;
u = domain.Inputs.Control.u;
dx = domain.States.dx;
B = domain.Gmap.Control.u;

motorsPos = B*u - kt*((V - kt*dx)/Ra);
motorsNeg = -B*u + kt*((-V - kt*dx)/Ra);

motorIndex = [7,8];
motorModelPos = motorsPos(motorIndex);
motorModelNeg = motorsNeg(motorIndex);

motorLimitPos = u - stallTorque;
motorLimitNeg = -u - stallTorque;

motorModelPos_func = SymFunction('motorModelPos',motorModelPos,{u,dx});
motorModelNeg_func = SymFunction('motorModelNeg',motorModelNeg,{u,dx});
motorLimitPos_func = SymFunction('motorLimitPos',motorLimitPos,{u});
motorLimitNeg_func = SymFunction('motorLimitNeg',motorLimitNeg,{u});

addNodeConstraint(nlp, motorModelPos_func, {'u', 'dx'}, 'all', ...
    -Inf, 0,'Nonlinear');
addNodeConstraint(nlp, motorModelNeg_func, {'u', 'dx'}, 'all', ...
    -Inf, 0,'Nonlinear');
addNodeConstraint(nlp, motorLimitPos_func, {'u'}, 'all', ...
    -Inf, 0,'Nonlinear');
addNodeConstraint(nlp, motorLimitNeg_func, {'u'}, 'all', ...
    -Inf, 0,'Nonlinear');
