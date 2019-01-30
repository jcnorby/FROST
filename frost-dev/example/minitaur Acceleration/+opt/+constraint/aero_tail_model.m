function aero_tail_model(nlp, bounds)
%     constraints for motor torque

% return;
domain = nlp.Plant;
fDrag = domain.Inputs.External.fDrag;

dx = domain.States.ddx;

Cd = 2.0;
% Cd = 0;
L = 1;
h = 0.4;
w = 0.18;
A = h*w;
rho = 1.225;

% force = (0.5*rho*A*Cd*(L*dx('tail_joint')).^2);
sign_dx = dx('tail_joint')./sqrt(dx('tail_joint').^2);
force = -sign_dx*(1/6*rho*Cd*w*(L^3 - (L-h)^3)*dx('tail_joint').^2);

model_func = SymFunction('fDragModel',fDrag - force,{fDrag,dx});

addNodeConstraint(nlp, model_func, {'fDrag', 'dx'}, 'all', ...
    0, 0,'Nonlinear');

end


