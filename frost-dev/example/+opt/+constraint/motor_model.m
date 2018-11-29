function motor_model(nlp, bounds)
%     constraints for motor torque
    
%     noLoadSpeed = 166.67;
%     stallTorque = 3.5;
    noLoadSpeed = 166.67;
    stallTorque = 3.5;

    
    domain = nlp.Plant;
    u = domain.Inputs.Control.u;
    x = domain.States.x;
    dx = domain.States.dx;
    B = domain.Gmap.Control.u;
    
    if any(strcmp(fieldnames(domain.Params), 'r'))
        R = domain.Params.r;
    else
        R = 1;
    end

    
    motors = B*u - (stallTorque - dx*(stallTorque/noLoadSpeed));
    tail = B*u/R - (stallTorque - R*dx*(stallTorque/noLoadSpeed));
    
    if isnan(getJointIndices(domain, 'tail_joint'))
        motorModel = motors([7,8,11,12,15,16,19,20]);
        motorLimit = B*u - stallTorque;
    else
        motorModel = [motors([7,8,11,12,15,16,19,20]); tail(23)];
        motorLimit = [u - [stallTorque*ones(8,1); R*stallTorque]; (-u) - [stallTorque*ones(8,1); R*stallTorque]];
        
        if any(strcmp(fieldnames(nlp.OptVarTable), 'qDes'))
            kp = domain.Params.kp;
            kd = domain.Params.kd;
            qDes = domain.Params.qDes;
            tailControl = u(9) + kp*(x('tail_joint') - qDes) + kd*dx('tail_joint');
        end
    end
    
    if any(strcmp(fieldnames(domain.Params), 'r'))
        motorModel_fun = SymFunction('motorModel',motorModel,{u,dx,R});
        motorLimit_fun = SymFunction('motorLimit',motorLimit,{u,R});
        
        motor_lb = -100;
        motor_ub = 0;
    else
        motorModel_fun = SymFunction('motorModel',motorModel,{u,dx});
        motorLimit_fun = SymFunction('motorLimit',motorLimit,{u});
        
        motor_lb = -2*stallTorque;
        motor_ub = 0;
    end

    
    
    
    if any(strcmp(fieldnames(domain.Params), 'r'))
        addNodeConstraint(nlp, motorModel_fun, {'u', 'dx', 'r'}, 'all', ...
            -2*stallTorque, 0,'Nonlinear');
        addNodeConstraint(nlp, motorLimit_fun, {'u', 'r'}, 'all', ...
            motor_lb, motor_ub,'Nonlinear');
    else
        addNodeConstraint(nlp, motorModel_fun, {'u', 'dx'}, 'all', ...
            motor_lb, motor_ub,'Nonlinear');
    end
    
    if any(strcmp(fieldnames(nlp.OptVarTable), 'qDes'))
        
        tailControl_fun = SymFunction(['tailControl_', nlp.Name],tailControl,{u,x,dx,kp,kd,qDes});
        
        addNodeConstraint(nlp, tailControl_fun, {'u','x','dx','kp','kd','qDes'}, 'all', ...
            0, 0,'Nonlinear');
        
    end
end

