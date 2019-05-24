function domain = SlidingStance(model, load_path)
    % construct the double support sliding friction domain of Minitaur
    
    %% first make a copy of the robot model
    %| @note Do not directly assign with the model variable, since it is a
    %handle object.
    domain = copy(model);
    % set the name of the new copy
    domain.setName('SlidingStance');
    
    % Extract state variables
    q = domain.States.x;
    
    if nargin < 2
        load_path = [];
    end
    
    %% Add contact
    % left foot point contact
    [foot0, fric_coef] = sys.frames.Foot0(model);
    
    p_foot0 = getCartesianPosition(domain, foot0);
    
    fFootX = SymVariable('fFoot0X');
    Jac = jacobian(p_foot0(1), q);
    domain = addInput(domain, 'External','fFoot0X', fFootX, transpose(Jac));
    
    constr = [p_foot0(2);p_foot0(3)];
    hol = HolonomicConstraint(domain, constr, 'Foot0',...
        'ConstrLabel',{{'Foot0Y','Foot0Z'}},...
        'DerivativeOrder',2);
    domain = addHolonomicConstraint(domain,hol);
    %     domain = addContact(domain,left_foot,fric_coef, geom, load_path);
    if ~isempty(fric_coef)
        
        f = domain.Inputs.ConstraintWrench.fFoot0;
        fx = domain.Inputs.External.fFoot0X;
        % get the friction cone constraint
        %         [friction_cone, fc_label, auxdata] = getFrictionCone(left_foot, f, fric_coef);
        mu = SymVariable('mu');
        gamma = SymVariable('gamma');
        % x, y, z, roll, yaw
        epsilon = 1e-3;
        constr = [f(2) - 0; % fz >= 0
            fx + (mu/sqrt(2))*f(2) + epsilon;
            -(fx + (mu/sqrt(2))*f(2)) + epsilon;
            f(1) + (mu/sqrt(2))*f(2);  % -mu/sqrt(2) * fz < fu
            -f(1) + (mu/sqrt(2))*f(2)]; % fy < mu/sqrt(2) * fz
            
        
        % create a symbolic function object
        friction_cone = SymFunction(['u_friction_cone_', foot0.Name, domain.Name],...
            constr,{f,fx},{[mu;gamma]});
        
        % create the label text
        fc_label = {'normal_force';
            'friction_x_pos';
            'friction_x_neg';
            'friction_y_pos';
            'friction_y_neg';
            };
        
        
        auxdata = [fric_coef.mu; fric_coef.gamma];
        % create an unilateral constraint object
        fc_cstr = UnilateralConstraint(domain, friction_cone,...
            ['fc' foot0.Name, domain.Name], {'fFoot0', 'fFoot0X'}, ...
            'ConstrLabel',{fc_label(:)'},...
            'AuxData',auxdata);
        % add as a set of unilateral constraints
        domain = addUnilateralConstraint(domain, fc_cstr);
        
    end
    
        %% Add contact
    % left foot point contact
    [foot2, fric_coef] = sys.frames.Foot2(model);
    
    p_foot2 = getCartesianPosition(domain, foot2);
    
    fFootX = SymVariable('fFoot2X');
    Jac = jacobian(p_foot2(1), q);
    domain = addInput(domain, 'External','fFoot2X', fFootX, transpose(Jac));
    
    constr = [p_foot2(2);p_foot2(3)];
    hol = HolonomicConstraint(domain, constr, 'Foot2',...
        'ConstrLabel',{{'Foot2Y','Foot2Z'}},...
        'DerivativeOrder',2);
    domain = addHolonomicConstraint(domain,hol);
    %     domain = addContact(domain,left_foot,fric_coef, geom, load_path);
    if ~isempty(fric_coef)
        
        f = domain.Inputs.ConstraintWrench.fFoot2;
        fx = domain.Inputs.External.fFoot2X;
        % get the friction cone constraint
        %         [friction_cone, fc_label, auxdata] = getFrictionCone(left_foot, f, fric_coef);
        mu = SymVariable('mu');
        gamma = SymVariable('gamma');
        % x, y, z, roll, yaw
        constr = [f(2) - 0; % fz >= 0
            fx + (mu/sqrt(2))*f(2) + epsilon;  % -mu/sqrt(2) * fz < fx
            -fx - (mu/sqrt(2))*f(2) + epsilon; % fx < mu/sqrt(2) * fz
            f(1) + (mu/sqrt(2))*f(2);  % -mu/sqrt(2) * fz < fu
            -f(1) + (mu/sqrt(2))*f(2)]; % fy < mu/sqrt(2) * fz
 
        
        % create a symbolic function object
        friction_cone = SymFunction(['u_friction_cone_', foot2.Name, domain.Name],...
            constr,{f, fx},{[mu;gamma]});
        
        % create the label text
        fc_label = {'normal_force';
            'friction_x_pos';
            'friction_x_neg';
            'friction_y_pos';
            'friction_y_neg';
            };
        
        
        auxdata = [fric_coef.mu; fric_coef.gamma];
        % create an unilateral constraint object
        fc_cstr = UnilateralConstraint(domain, friction_cone,...
            ['fc' foot2.Name, domain.Name], {'fFoot2', 'fFoot2X'}, ...
            'ConstrLabel',{fc_label(:)'},...
            'AuxData',auxdata);
        % add as a set of unilateral constraints
        domain = addUnilateralConstraint(domain, fc_cstr);
    end
    
    %% Add contact
    % left foot point contact
    [foot1, fric_coef] = sys.frames.Foot1(model);
    
    p_foot1 = getCartesianPosition(domain, foot1);
    
    fFootX = SymVariable('fFoot1X');
    Jac = jacobian(p_foot1(1), q);
    domain = addInput(domain, 'External','fFoot1X', fFootX, transpose(Jac));
    
    constr = [p_foot1(2);p_foot1(3)];
    hol = HolonomicConstraint(domain, constr, 'Foot1',...
        'ConstrLabel',{{'Foot1Y','Foot1Z'}},...
        'DerivativeOrder',2);
    domain = addHolonomicConstraint(domain,hol);
    %     domain = addContact(domain,left_foot,fric_coef, geom, load_path);
    if ~isempty(fric_coef)
        
        f = domain.Inputs.ConstraintWrench.fFoot1;
        fx = domain.Inputs.External.fFoot1X;
        % get the friction cone constraint
        %         [friction_cone, fc_label, auxdata] = getFrictionCone(left_foot, f, fric_coef);
        mu = SymVariable('mu');
        gamma = SymVariable('gamma');
        % x, y, z, roll, yaw
        constr = [f(2) - 0; % fz >= 0
            fx + (mu/sqrt(2))*f(2) + epsilon;  % -mu/sqrt(2) * fz < fx
            -fx - (mu/sqrt(2))*f(2) + epsilon; % fx < mu/sqrt(2) * fz
            f(1) + (mu/sqrt(2))*f(2);  % -mu/sqrt(2) * fz < fu
            -f(1) + (mu/sqrt(2))*f(2)]; % fy < mu/sqrt(2) * fz

        
        % create a symbolic function object
        friction_cone = SymFunction(['u_friction_cone_', foot1.Name, domain.Name],...
            constr,{f, fx},{[mu;gamma]});
        
        % create the label text
        fc_label = {'normal_force';
            'friction_x_pos';
            'friction_x_neg';
            'friction_y_pos';
            'friction_y_neg';
            };
        
        
        auxdata = [fric_coef.mu; fric_coef.gamma];
        % create an unilateral constraint object
        fc_cstr = UnilateralConstraint(domain, friction_cone,...
            ['fc' foot1.Name, domain.Name], {'fFoot1','fFoot1X'}, ...
            'ConstrLabel',{fc_label(:)'},...
            'AuxData',auxdata);
        % add as a set of unilateral constraints
        domain = addUnilateralConstraint(domain, fc_cstr);
    end
    
        %% Add contact
    % left foot point contact
    [foot3, fric_coef] = sys.frames.Foot3(model);
    
    p_foot3 = getCartesianPosition(domain, foot3);
    
    fFootX = SymVariable('fFoot3X');
    Jac = jacobian(p_foot3(1), q);
    domain = addInput(domain, 'External','fFoot3X', fFootX, transpose(Jac));
    
    constr = [p_foot3(2);p_foot3(3)];
    hol = HolonomicConstraint(domain, constr, 'Foot3',...
        'ConstrLabel',{{'Foot3Y','Foot3Z'}},...
        'DerivativeOrder',2);
    domain = addHolonomicConstraint(domain,hol);
    %     domain = addContact(domain,left_foot,fric_coef, geom, load_path);
    if ~isempty(fric_coef)
        
        f = domain.Inputs.ConstraintWrench.fFoot3;
        fx = domain.Inputs.External.fFoot3X;
        % get the friction cone constraint
        %         [friction_cone, fc_label, auxdata] = getFrictionCone(left_foot, f, fric_coef);
        mu = SymVariable('mu');
        gamma = SymVariable('gamma');
        % x, y, z, roll, yaw
        constr = [f(2) - 0; % fz >= 0
            fx + (mu/sqrt(2))*f(2) + epsilon;  % -mu/sqrt(2) * fz < fx
            -fx - (mu/sqrt(2))*f(2) + epsilon; % fx < mu/sqrt(2) * fz
            f(1) + (mu/sqrt(2))*f(2);  % -mu/sqrt(2) * fz < fu
            -f(1) + (mu/sqrt(2))*f(2)]; % fy < mu/sqrt(2) * fz

        
        % create a symbolic function object
        friction_cone = SymFunction(['u_friction_cone_', foot3.Name, domain.Name],...
            constr,{f,fx},{[mu;gamma]});
        
        % create the label text
        fc_label = {'normal_force';
            'friction_x_pos';
            'friction_x_neg';
            'friction_y_pos';
            'friction_y_neg'
            };
        
        auxdata = [fric_coef.mu; fric_coef.gamma];
        % create an unilateral constraint object
        fc_cstr = UnilateralConstraint(domain, friction_cone,...
            ['fc' foot3.Name, domain.Name], {'fFoot3','fFoot3X'}, ...
            'ConstrLabel',{fc_label(:)'},...
            'AuxData',auxdata);
        % add as a set of unilateral constraints
        domain = addUnilateralConstraint(domain, fc_cstr);
    end
    
    %% Add front feet event
    dq = domain.States.dx;
    foot0_x_vel = jacobian(p_foot0(1), q)*dq;
    h_nsf0 = UnilateralConstraint(domain,foot0_x_vel,'Foot0Vel',{'x', 'dx'});
    domain = addEvent(domain, h_nsf0);
    
%     %% Add back feet event
%     % rear foot normal force = f(3)
%     nf_nsf = UnilateralConstraint(domain,domain.Inputs.ConstraintWrench.fFoot3(3),'Foot3NormalForce','fFoot3');
%     domain = addEvent(domain, nf_nsf);
   
end
    