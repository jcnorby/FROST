function motor_model(nlp, bounds)
%     constraints for motor torque

kt = 0.0954;
Ra = 0.220;
V = 12;
stallTorque = 3;

domain = nlp.Plant;
u = domain.Inputs.Control.u;
x = domain.States.x;
dx = domain.States.dx;
B = domain.Gmap.Control.u;

if any(strcmp(fieldnames(domain.Params), 'r'))
    R = domain.Params.r;
    Rineff = 0.8;
else
    R = 1;
    Rineff = 1;
end

% motors = B*u - kt*((V - kt*dx)/Ra);
% tail = B*u./(R*Rineff) - kt*((V - R*kt*dx)/Ra);
% 
% if isnan(getJointIndices(domain, 'tail_joint'))
%     motorModel = motors([7,8,11,12,15,16,19,20]);
%     motorLimit = B*u - stallTorque;
% else
%     motorModel = [motors([7,8,11,12,15,16,19,20]); tail(23)];
%     motorLimit = [u./Rineff - [stallTorque*ones(8,1); R*stallTorque]; (-u./Rineff) - [stallTorque*ones(8,1); R*stallTorque]];
%     
%     if any(strcmp(fieldnames(nlp.OptVarTable), 'qDes'))
%         kp = domain.Params.kp;
%         kd = domain.Params.kd;
%         qDes = domain.Params.qDes;
%         tailControl = u(9) + kp*(x('tail_joint') - qDes) + kd*dx('tail_joint');
%     end
% end

% tailPos = B*u./(R*Rineff) - kt*((V - R*kt.*dx)/Ra);
% tailNeg = -B*u./(R*Rineff) + kt*((- V - R*kt.*dx)/Ra);

motorsPos = B*u - kt*((V - kt*dx)/Ra);
motorsNeg = -B*u + kt*((- V - kt*dx)/Ra);

motorsPos = B*u - currentToTorqueFunction((V - kt*dx)/Ra);
motorsNeg = -B*u + currentToTorqueFunction((- V - kt*dx)/Ra);

if isnan(getJointIndices(domain, 'tail_joint'))
    motorModelPos = motorsPos([7,8,11,12,15,16,19,20]);
    motorModelNeg = motorsNeg([7,8,11,12,15,16,19,20]);
    
    motorLimitPos = u - stallTorque;
    motorLimitNeg = -u - stallTorque;
else
    Rurdf = domain.Joints(getJointIndices(domain, 'tail_joint')).Actuator.Ratio;
    
    tailPos = B*u./(R*Rurdf*Rineff) - currentToTorqueFunction((V - R*Rurdf*kt.*dx)/Ra); 
    tailNeg = -B*u./(R*Rurdf*Rineff) + currentToTorqueFunction((- V - R*Rurdf*kt.*dx)/Ra);

    motorModelPos = [motorsPos([7,8,11,12,15,16,19,20]); tailPos(23)];
    motorModelNeg = [motorsNeg([7,8,11,12,15,16,19,20]); tailNeg(23)];
    
    motorLimitPos = [u(1:8) - stallTorque*ones(8,1);(u(9)./Rineff) - R*stallTorque];
    motorLimitNeg = [-u(1:8) - stallTorque*ones(8,1);(-u(9)./Rineff) - R*stallTorque];

    if any(strcmp(fieldnames(nlp.OptVarTable), 'qDes'))
        kp = domain.Params.kp;
        kd = domain.Params.kd;
        qDes = domain.Params.qDes;
        tailControl = u(9) + kp*(x('tail_joint') - qDes) + kd*dx('tail_joint');
    end
end

if any(strcmp(fieldnames(domain.Params), 'r'))
    motorModelPos_func = SymFunction('motorModelPos',motorModelPos,{u,dx,R});
    motorModelNeg_func = SymFunction('motorModelNeg',motorModelNeg,{u,dx,R});
    motorLimitPos_func = SymFunction('motorLimitPos',motorLimitPos,{u,R});
    motorLimitNeg_func = SymFunction('motorLimitNeg',motorLimitNeg,{u,R});
else
    motorModelPos_func = SymFunction('motorModelPos',motorModelPos,{u,dx});
    motorModelNeg_func = SymFunction('motorModelNeg',motorModelNeg,{u,dx});
    motorLimitPos_func = SymFunction('motorLimitPos',motorLimitPos,{u});
    motorLimitNeg_func = SymFunction('motorLimitNeg',motorLimitNeg,{u});
end

if any(strcmp(fieldnames(domain.Params), 'r'))
    addNodeConstraint(nlp, motorModelPos_func, {'u', 'dx', 'r'}, 'all', ...
        -Inf, 0,'Nonlinear');
    addNodeConstraint(nlp, motorModelNeg_func, {'u', 'dx', 'r'}, 'all', ...
        -Inf, 0,'Nonlinear');
    addNodeConstraint(nlp, motorLimitPos_func, {'u', 'r'}, 'all', ...
        -Inf, 0,'Nonlinear');
    addNodeConstraint(nlp, motorLimitNeg_func, {'u', 'r'}, 'all', ...
        -Inf, 0,'Nonlinear');
else
    addNodeConstraint(nlp, motorModelPos_func, {'u', 'dx'}, 'all', ...
        -Inf, 0,'Nonlinear');
    addNodeConstraint(nlp, motorModelNeg_func, {'u', 'dx'}, 'all', ...
        -Inf, 0,'Nonlinear');
    addNodeConstraint(nlp, motorLimitPos_func, {'u'}, 'all', ...
        -Inf, 0,'Nonlinear');
    addNodeConstraint(nlp, motorLimitNeg_func, {'u'}, 'all', ...
        -Inf, 0,'Nonlinear');
end

if any(strcmp(fieldnames(nlp.OptVarTable), 'qDes'))
    
    tailControl_fun = SymFunction(['tailControl_', nlp.Name],tailControl,{u,x,dx,kp,kd,qDes});
    
    addNodeConstraint(nlp, tailControl_fun, {'u','x','dx','kp','kd','qDes'}, 'all', ...
        0, 0,'Nonlinear');
    
end
end

% %     constraints for motor torque
%     
% %     noLoadSpeed = 166.67;
% %     stallTorque = 3.5;
%     noLoadSpeed = 166.67;
%     stallTorque = 3.5;
% 
%     
%     domain = nlp.Plant;
%     u = domain.Inputs.Control.u;
%     x = domain.States.x;
%     dx = domain.States.dx;
%     B = domain.Gmap.Control.u;
%     
%     if any(strcmp(fieldnames(domain.Params), 'r'))
%         R = domain.Params.r;
%     else
%         R = 1;
%     end
% 
%     
%     motors = B*u - (stallTorque - dx*(stallTorque/noLoadSpeed));
%     tail = B*u/R - (stallTorque - R*dx*(stallTorque/noLoadSpeed));
%     
%     if isnan(getJointIndices(domain, 'tail_joint'))
%         motorModel = motors([7,8,11,12,15,16,19,20]);
%         motorLimit = B*u - stallTorque;
%     else
%         motorModel = [motors([7,8,11,12,15,16,19,20]); tail(23)];
%         motorLimit = [u - [stallTorque*ones(8,1); R*stallTorque]; (-u) - [stallTorque*ones(8,1); R*stallTorque]];
%         
%         if any(strcmp(fieldnames(nlp.OptVarTable), 'qDes'))
%             kp = domain.Params.kp;
%             kd = domain.Params.kd;
%             qDes = domain.Params.qDes;
%             tailControl = u(9) + kp*(x('tail_joint') - qDes) + kd*dx('tail_joint');
%         end
%     end
%     
%     if any(strcmp(fieldnames(domain.Params), 'r'))
%         motorModel_fun = SymFunction('motorModel',motorModel,{u,dx,R});
%         motorLimit_fun = SymFunction('motorLimit',motorLimit,{u,R});
%         
%         motor_lb = -100;
%         motor_ub = 0;
%     else
%         motorModel_fun = SymFunction('motorModel',motorModel,{u,dx});
%         motorLimit_fun = SymFunction('motorLimit',motorLimit,{u});
%         
%         motor_lb = -2*stallTorque;
%         motor_ub = 0;
%     end
% 
%     
%     
%     
%     if any(strcmp(fieldnames(domain.Params), 'r'))
%         addNodeConstraint(nlp, motorModel_fun, {'u', 'dx', 'r'}, 'all', ...
%             -2*stallTorque, 0,'Nonlinear');
%         addNodeConstraint(nlp, motorLimit_fun, {'u', 'r'}, 'all', ...
%             motor_lb, motor_ub,'Nonlinear');
%     else
%         addNodeConstraint(nlp, motorModel_fun, {'u', 'dx'}, 'all', ...
%             motor_lb, motor_ub,'Nonlinear');
%     end
%     
%     if any(strcmp(fieldnames(nlp.OptVarTable), 'qDes'))
%         
%         tailControl_fun = SymFunction(['tailControl_', nlp.Name],tailControl,{u,x,dx,kp,kd,qDes});
%         
%         addNodeConstraint(nlp, tailControl_fun, {'u','x','dx','kp','kd','qDes'}, 'all', ...
%             0, 0,'Nonlinear');
%         
%     end
% end







% function motor_model(nlp, bounds)
% %     constraints for motor torque
% 
% kt = 0.0954;
% Ra = 0.22;
% V = 16.5;
% 
% stallTorque = 3;
% Rineff = 0.8;
% 
% 
% domain = nlp.Plant;
% u = domain.Inputs.Control.u;
% x = domain.States.x;
% dx = domain.States.dx;
% B = domain.Gmap.Control.u;
% 
% if any(strcmp(fieldnames(domain.Params), 'r'))
%     R = domain.Params.r;
% else
%     R = 1;
% end
% 
% % motors = B*u - kt*((V - kt*dx)/Ra);
% % tail = B*u./(R*Rineff) - kt*((V - R*kt*dx)/Ra);
% % 
% % if isnan(getJointIndices(domain, 'tail_joint'))
% %     motorModel = motors([7,8,11,12,15,16,19,20]);
% %     motorLimit = B*u - stallTorque;
% % else
% %     motorModel = [motors([7,8,11,12,15,16,19,20]); tail(23)];
% %     motorLimit = [u./Rineff - [stallTorque*ones(8,1); R*stallTorque]; (-u./Rineff) - [stallTorque*ones(8,1); R*stallTorque]];
% %     
% %     if any(strcmp(fieldnames(nlp.OptVarTable), 'qDes'))
% %         kp = domain.Params.kp;
% %         kd = domain.Params.kd;
% %         qDes = domain.Params.qDes;
% %         tailControl = u(9) + kp*(x('tail_joint') - qDes) + kd*dx('tail_joint');
% %     end
% % end
% 
% motorsPos = B*u - kt*((V - kt*dx)/Ra);
% tailPos = B*u./(R*Rineff) - kt*((V - R*kt.*dx)/Ra);
% motorsNeg = -B*u + kt*((-V - kt*dx)/Ra);
% tailNeg = -B*u./(R*Rineff) + kt*((-V - R*kt.*dx)/Ra);
% 
% if isnan(getJointIndices(domain, 'tail_joint'))
%     motorModelPos = motorsPos([7,8,11,12,15,16,19,20]);
%     motorModelNeg = motorsNeg([7,8,11,12,15,16,19,20]);
%     
%     motorLimitPos = u - stallTorque;
%     motorLimitNeg = -u - stallTorque;
% else
%     motorModelPos = [tailPos(7)];
%     motorModelNeg = [tailNeg(7)];
%     
%     motorLimitPos = [(u(1)./Rineff) - R*stallTorque];
%     motorLimitNeg = [(-u(1)./Rineff) - R*stallTorque];
% 
% end
% 
% if any(strcmp(fieldnames(domain.Params), 'r'))
%     motorModelPos_func = SymFunction('motorModelPos',motorModelPos,{u,dx,R});
%     motorModelNeg_func = SymFunction('motorModelNeg',motorModelNeg,{u,dx,R});
%     motorLimitPos_func = SymFunction('motorLimitPos',motorLimitPos,{u,R});
%     motorLimitNeg_func = SymFunction('motorLimitNeg',motorLimitNeg,{u,R});
% else
%     motorModelPos_func = SymFunction('motorModelPos',motorModelPos,{u,dx});
%     motorModelNeg_func = SymFunction('motorModelNeg',motorModelNeg,{u,dx});
%     motorLimitPos_func = SymFunction('motorLimitPos',motorLimitPos,{u});
%     motorLimitNeg_func = SymFunction('motorLimitNeg',motorLimitNeg,{u});
% end
% 
% if any(strcmp(fieldnames(domain.Params), 'r'))
%     addNodeConstraint(nlp, motorModelPos_func, {'u', 'dx', 'r'}, 'all', ...
%         -Inf, 0,'Nonlinear');
%     addNodeConstraint(nlp, motorModelNeg_func, {'u', 'dx', 'r'}, 'all', ...
%         -Inf, 0,'Nonlinear');
%     addNodeConstraint(nlp, motorLimitPos_func, {'u', 'r'}, 'all', ...
%         -Inf, 0,'Nonlinear');
%     addNodeConstraint(nlp, motorLimitNeg_func, {'u', 'r'}, 'all', ...
%         -Inf, 0,'Nonlinear');
% else
%     addNodeConstraint(nlp, motorModelPos_func, {'u', 'dx'}, 'all', ...
%         -Inf, 0,'Nonlinear');
%     addNodeConstraint(nlp, motorModelNeg_func, {'u', 'dx'}, 'all', ...
%         -Inf, 0,'Nonlinear');
%     addNodeConstraint(nlp, motorLimitPos_func, {'u'}, 'all', ...
%         -Inf, 0,'Nonlinear');
%     addNodeConstraint(nlp, motorLimitNeg_func, {'u'}, 'all', ...
%         -Inf, 0,'Nonlinear');
% end
% 
% if any(strcmp(fieldnames(nlp.OptVarTable), 'qDes'))
%     
%     tailControl_fun = SymFunction(['tailControl_', nlp.Name],tailControl,{u,x,dx,kp,kd,qDes});
%     
%     addNodeConstraint(nlp, tailControl_fun, {'u','x','dx','kp','kd','qDes'}, 'all', ...
%         0, 0,'Nonlinear');
%     
% end
% end
% 
% % %     constraints for motor torque
% %     
% % %     noLoadSpeed = 166.67;
% % %     stallTorque = 3.5;
% %     noLoadSpeed = 166.67;
% %     stallTorque = 3.5;
% % 
% %     
% %     domain = nlp.Plant;
% %     u = domain.Inputs.Control.u;
% %     x = domain.States.x;
% %     dx = domain.States.dx;
% %     B = domain.Gmap.Control.u;
% %     
% %     if any(strcmp(fieldnames(domain.Params), 'r'))
% %         R = domain.Params.r;
% %     else
% %         R = 1;
% %     end
% % 
% %     
% %     motors = B*u - (stallTorque - dx*(stallTorque/noLoadSpeed));
% %     tail = B*u/R - (stallTorque - R*dx*(stallTorque/noLoadSpeed));
% %     
% %     if isnan(getJointIndices(domain, 'tail_joint'))
% %         motorModel = motors([7,8,11,12,15,16,19,20]);
% %         motorLimit = B*u - stallTorque;
% %     else
% %         motorModel = [motors([7,8,11,12,15,16,19,20]); tail(23)];
% %         motorLimit = [u - [stallTorque*ones(8,1); R*stallTorque]; (-u) - [stallTorque*ones(8,1); R*stallTorque]];
% %         
% %         if any(strcmp(fieldnames(nlp.OptVarTable), 'qDes'))
% %             kp = domain.Params.kp;
% %             kd = domain.Params.kd;
% %             qDes = domain.Params.qDes;
% %             tailControl = u(9) + kp*(x('tail_joint') - qDes) + kd*dx('tail_joint');
% %         end
% %     end
% %     
% %     if any(strcmp(fieldnames(domain.Params), 'r'))
% %         motorModel_fun = SymFunction('motorModel',motorModel,{u,dx,R});
% %         motorLimit_fun = SymFunction('motorLimit',motorLimit,{u,R});
% %         
% %         motor_lb = -100;
% %         motor_ub = 0;
% %     else
% %         motorModel_fun = SymFunction('motorModel',motorModel,{u,dx});
% %         motorLimit_fun = SymFunction('motorLimit',motorLimit,{u});
% %         
% %         motor_lb = -2*stallTorque;
% %         motor_ub = 0;
% %     end
% % 
% %     
% %     
% %     
% %     if any(strcmp(fieldnames(domain.Params), 'r'))
% %         addNodeConstraint(nlp, motorModel_fun, {'u', 'dx', 'r'}, 'all', ...
% %             -2*stallTorque, 0,'Nonlinear');
% %         addNodeConstraint(nlp, motorLimit_fun, {'u', 'r'}, 'all', ...
% %             motor_lb, motor_ub,'Nonlinear');
% %     else
% %         addNodeConstraint(nlp, motorModel_fun, {'u', 'dx'}, 'all', ...
% %             motor_lb, motor_ub,'Nonlinear');
% %     end
% %     
% %     if any(strcmp(fieldnames(nlp.OptVarTable), 'qDes'))
% %         
% %         tailControl_fun = SymFunction(['tailControl_', nlp.Name],tailControl,{u,x,dx,kp,kd,qDes});
% %         
% %         addNodeConstraint(nlp, tailControl_fun, {'u','x','dx','kp','kd','qDes'}, 'all', ...
% %             0, 0,'Nonlinear');
% %         
% %     end
% % end
% 
% 
