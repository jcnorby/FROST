function aero_tail_model(nlp, bounds)
%     constraints for motor torque
global bAerodynamic;
global bTail

if bTail
    domain = nlp.Plant;
    fDrag = domain.Inputs.External.fDrag;
    
    x = domain.States.x;
    dx = domain.States.dx;
    
    Cd = 2.3;
    % Cd = 0;
    L = 1;
    h = 0.4;
    L = nlp.Plant.Links(getLinkIndices(nlp.Plant, 'tail_link')).Offset(3) + h/2;
    w = 0.18;
    A = h*w;
    rho = 1.225;
    
    % force = (0.5*rho*A*Cd*(L*dx('tail_joint')).^2);
    sign_vel = dx('tail_joint')./sqrt(dx('tail_joint').^2);
    
%     pos = getCartesianPosition(domain, sys.frames.TailMass(domain));
%     J_pos = jacobian(pos, x);
    
    J_pos = computeBodyJacobian(sys.frames.TailMass(domain), domain.numState);
    vel = J_pos * dx;
    vel = vel(1);
    sign_vel = vel./sqrt(vel.^2 + 1e-6);
    
    if bAerodynamic
        force = -sign_vel*(1/2*rho*Cd*A*vel.^2);
    else
        force = 0;
    end
    
    force
    
    model_func = SymFunction('fDragModel',fDrag - force,{fDrag,x,dx});
    addNodeConstraint(nlp, model_func, {'fDrag', 'x','dx'}, 'all', ...
        0, 0,'Nonlinear');
end

end


