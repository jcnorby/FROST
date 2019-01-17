 % Back Stance Domain 
 %
 % Contact: Back toes
function domain = 03Stance(model, load_path)
    % construct the back stance domain of Minitaur
    
    %% first make a copy of the robot model
    %| @note Do not directly assign with the model variable, since it is a
    %handle object.
    domain = copy(model);
    % set the name of the new copy
    domain.setName('03Stance');
    
    % Extract state variables
    q = domain.States.x;
    
    if nargin < 2
        load_path = [];
    end
    
%      %% Add contact
%     % left foot point contact
%     [foot0, fric_coef] = sys.frames.Foot0(model);
%     
%     p_foot0 = getCartesianPosition(domain, foot0);
%     
%     constr = [p_foot0(1);p_foot0(3)];
%     hol = HolonomicConstraint(domain, constr, 'Foot0',...
%         'ConstrLabel',{{'Foot0X','Foot0Z'}},...
%         'DerivativeOrder',2);
%     domain = addHolonomicConstraint(domain,hol);
%     %     domain = addContact(domain,left_foot,fric_coef, geom, load_path);
%     if ~isempty(fric_coef)
%         
%         f = domain.Inputs.ConstraintWrench.fFoot0;
%         % get the friction cone constraint
%         %         [friction_cone, fc_label, auxdata] = getFrictionCone(left_foot, f, fric_coef);
%         mu = SymVariable('mu');
%         gamma = SymVariable('gamma');
%         % x, y, z, roll, yaw
%         constr = [f(2) - 0; % fz >= 0
%             f(1) + (mu/sqrt(2))*f(2);  % -mu/sqrt(2) * fz < fx
%             -f(1) + (mu/sqrt(2))*f(2)]; % fx < mu/sqrt(2) * fz
%             
%         
%         % create a symbolic function object
%         friction_cone = SymFunction(['u_friction_cone_', foot0.Name],...
%             constr,{f},{[mu;gamma]});
%         
%         % create the label text
%         fc_label = {'normal_force';
%             'friction_x_pos';
%             'friction_x_neg'
%             };
%         
%         
%         auxdata = [fric_coef.mu; fric_coef.gamma];
%         % create an unilateral constraint object
%         fc_cstr = UnilateralConstraint(domain, friction_cone,...
%             ['fc' foot0.Name], 'fFoot0', ...
%             'ConstrLabel',{fc_label(:)'},...
%             'AuxData',auxdata);
%         % add as a set of unilateral constraints
%         domain = addUnilateralConstraint(domain, fc_cstr);
%     end
%     
%         % Add contact
%     left foot point contact
%     [foot2, fric_coef] = sys.frames.Foot2(model);
%     
%     p_foot2 = getCartesianPosition(domain, foot2);
%     
%     constr = [p_foot2(1);p_foot2(2);p_foot2(3)];
%     hol = HolonomicConstraint(domain, constr, 'Foot2',...
%         'ConstrLabel',{{'Foot2X','Foot2Y','Foot2Z'}},...
%         'DerivativeOrder',2);
%     domain = addHolonomicConstraint(domain,hol);
%         domain = addContact(domain,left_foot,fric_coef, geom, load_path);
%     if ~isempty(fric_coef)
%         
%         f = domain.Inputs.ConstraintWrench.fFoot2;
%         get the friction cone constraint
%                 [friction_cone, fc_label, auxdata] = getFrictionCone(left_foot, f, fric_coef);
%         mu = SymVariable('mu');
%         gamma = SymVariable('gamma');
%         x, y, z, roll, yaw
%         constr = [f(3) - 0; % fz >= 0
%             f(1) + (mu/sqrt(2))*f(3);  % -mu/sqrt(2) * fz < fx
%             -f(1) + (mu/sqrt(2))*f(3); % fx < mu/sqrt(2) * fz
%             f(2) + (mu/sqrt(2))*f(3);  % -mu/sqrt(2) * fz < fu
%             -f(2) + (mu/sqrt(2))*f(3)]; % fy < mu/sqrt(2) * fz
%  
%         
%         create a symbolic function object
%         friction_cone = SymFunction(['u_friction_cone_', foot2.Name],...
%             constr,{f},{[mu;gamma]});
%         
%         create the label text
%         fc_label = {'normal_force';
%             'friction_x_pos';
%             'friction_x_neg';
%             'friction_y_pos';
%             'friction_y_neg';
%             };
%         
%         
%         auxdata = [fric_coef.mu; fric_coef.gamma];
%         create an unilateral constraint object
%         fc_cstr = UnilateralConstraint(domain, friction_cone,...
%             ['fc' foot2.Name], 'fFoot2', ...
%             'ConstrLabel',{fc_label(:)'},...
%             'AuxData',auxdata);
%         add as a set of unilateral constraints
%         domain = addUnilateralConstraint(domain, fc_cstr);
%     end
    
    %% Add contact
    % left foot point contact
    [foot0, fric_coef] = sys.frames.Foot0(model);
    
    p_foot0 = getCartesianPosition(domain, foot0);
    
    constr = [p_foot0(1);p_foot0(2);p_foot0(3)];
    hol = HolonomicConstraint(domain, constr, 'Foot0',...
        'ConstrLabel',{{'Foot0X','Foot0Y','Foot0Z'}},...
        'DerivativeOrder',2);
    domain = addHolonomicConstraint(domain,hol);
    %     domain = addContact(domain,left_foot,fric_coef, geom, load_path);
    if ~isempty(fric_coef)
        
        f = domain.Inputs.ConstraintWrench.fFoot0;
        % get the friction cone constraint
        %         [friction_cone, fc_label, auxdata] = getFrictionCone(left_foot, f, fric_coef);
        mu = SymVariable('mu');
        gamma = SymVariable('gamma');
        % x, y, z, roll, yaw
        constr = [f(3) - 0; % fz >= 0
            f(1) + (mu/sqrt(2))*f(3);  % -mu/sqrt(2) * fz < fx
            -f(1) + (mu/sqrt(2))*f(3); % fx < mu/sqrt(2) * fz
            f(2) + (mu/sqrt(2))*f(3);  % -mu/sqrt(2) * fz < fu
            -f(2) + (mu/sqrt(2))*f(3)]; % fy < mu/sqrt(2) * fz
            
        
        % create a symbolic function object
        friction_cone = SymFunction(['u_friction_cone_', foot0.Name],...
            constr,{f},{[mu;gamma]});
        
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
            ['fc' foot0.Name], 'fFoot0', ...
            'ConstrLabel',{fc_label(:)'},...
            'AuxData',auxdata);
        % add as a set of unilateral constraints
        domain = addUnilateralConstraint(domain, fc_cstr);
    end
    
        %% Add contact
    % left foot point contact
    [foot3, fric_coef] = sys.frames.Foot3(model);
    
    p_foot3 = getCartesianPosition(domain, foot3);
    
    constr = [p_foot3(1);p_foot3(2);p_foot3(3)];
    hol = HolonomicConstraint(domain, constr, 'Foot3',...
        'ConstrLabel',{{'Foot3X','Foot3Y','Foot3Z'}},...
        'DerivativeOrder',2);
    domain = addHolonomicConstraint(domain,hol);
    %     domain = addContact(domain,left_foot,fric_coef, geom, load_path);
    if ~isempty(fric_coef)
        
        f = domain.Inputs.ConstraintWrench.fFoot3;
        % get the friction cone constraint
        %         [friction_cone, fc_label, auxdata] = getFrictionCone(left_foot, f, fric_coef);
        mu = SymVariable('mu');
        gamma = SymVariable('gamma');
        % x, y, z, roll, yaw
        constr = [f(3) - 0; % fz >= 0
            f(1) + (mu/sqrt(2))*f(3);  % -mu/sqrt(2) * fz < fx
            -f(1) + (mu/sqrt(2))*f(3); % fx < mu/sqrt(2) * fz
            f(2) + (mu/sqrt(2))*f(3);  % -mu/sqrt(2) * fz < fu
            -f(2) + (mu/sqrt(2))*f(3)]; % fy < mu/sqrt(2) * fz
 
        
        % create a symbolic function object
        friction_cone = SymFunction(['u_friction_cone_', foot3.Name],...
            constr,{f},{[mu;gamma]});
        
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
            ['fc' foot3.Name], 'fFoot3', ...
            'ConstrLabel',{fc_label(:)'},...
            'AuxData',auxdata);
        % add as a set of unilateral constraints
        domain = addUnilateralConstraint(domain, fc_cstr);
    end
  
    
    %% Add event
    % rear foot normal force = f(3)
    nf_nsf = UnilateralConstraint(domain,f(3),'Foot0NormalForce','fFoot0');
    domain = addEvent(domain, nf_nsf);
    
        %% Add events
    
    % height of non-stance foot (left back toe)
    [foot1_frame] = sys.frames.Foot1(model);
    p1_swingFoot = getCartesianPosition(domain, foot1_frame);
    h_nsf1 = UnilateralConstraint(domain,p1_swingFoot(3),'Foot1Height','x');
    domain = addEvent(domain, h_nsf1);
   
end
    