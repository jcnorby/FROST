function track_state_stance(nlp, bounds)
% Constraint to track a COM trajectory in stance

domain = nlp.Plant;

x = domain.States.x;
dx = domain.States.dx;
ddx = domain.States.ddx;

tvec = linspace(nlp.Options.ConstantTimeHorizon(1),nlp.Options.ConstantTimeHorizon(2),nlp.NumNode);
s = nlp.UserParams.traj.state;
a = nlp.UserParams.traj.action;
T = tvec(end) - tvec(1);

com_state = applyStance3D(s,a,tvec);
yaw = atan2(com_state(5,:), com_state(4,:));
com_pos_traj = [com_state([1:3,7],:)];
% com_acc_traj = getAccStance3D(a, tvec);

com_pos = SymVariable('compos', 4);
% com_vel = SymVariable('comvel', 3);
% com_acc = SymVariable('comacc', 3);
% state_error = [x(1:3) - tomatrix(com_pos);dx(1:3) - tomatrix(com_vel)];
% t_fun = SymFunction(['trackState_', nlp.Name],state_error,{x,dx}, {[com_pos; com_vel]});

% acc_error = ddx(1:3) - tomatrix(com_acc);
% t_acc_fun = SymFunction(['dd_trackState_', nlp.Name],acc_error,{ddx}, {com_acc});

pos_error = x([1:3,5]) - tomatrix(com_pos);
% vel_error = dx(1:3) - tomatrix(com_vel);
t_pos_fun = SymFunction(['trackState_', nlp.Name],pos_error,{x}, {[com_pos]});
% t_vel_fun = SymFunction(['d_trackState_', nlp.Name],vel_error,{dx}, {[com_vel]});

% % Velocity constraint at first node
% dx_var = nlp.OptVarTable.dx(1);
% auxdata = [com_vel_traj(:,1)];
% t_cstr = NlpFunction('Name',t_vel_fun.Name,...
%     'Dimension',length(t_vel_fun),'lb',-1e-3, 'ub',1e-3,'Type','Linear',...
%     'SymFun',t_vel_fun,'DepVariables',[dx_var],...
%     'AuxData',auxdata);
% addConstraint(nlp, t_vel_fun.Name, 1, t_cstr);

for i = 1:4:nlp.NumNode

    ub = [1e-2,1e-2,1e-2,1e-1];%1e-3;
    lb = -ub;
    
% % Position and Velocity Constraint
%         x_var = nlp.OptVarTable.x(i);
%         dx_var = nlp.OptVarTable.dx(i);
%         auxdata = [com_pos_traj(:,i);com_vel_traj(:,i)];
%         t_cstr = NlpFunction('Name',t_fun.Name,...
%             'Dimension',length(t_fun),'lb',lb, 'ub',ub,'Type','Linear',...
%             'SymFun',t_fun,'DepVariables',[x_var;dx_var],...
%             'AuxData',auxdata);
%         addConstraint(nlp, ['trackState_', nlp.Name], i, t_cstr);
    
% % Acceleration constraint
%     ddx_var = nlp.OptVarTable.ddx(i);
%     auxdata = [com_acc_traj(:,i)];
%     t_cstr = NlpFunction('Name',t_acc_fun.Name,...
%         'Dimension',length(t_acc_fun),'lb',0, 'ub',0,'Type','Linear',...
%         'SymFun',t_acc_fun,'DepVariables',[ddx_var],...
%         'AuxData',auxdata);
%     addConstraint(nlp, t_cstr.Name, i, t_cstr);
    
% Position constraint
        x_var = nlp.OptVarTable.x(i);
        auxdata = [com_pos_traj(:,i)];
        t_cstr = NlpFunction('Name',t_pos_fun.Name,...
            'Dimension',length(t_pos_fun),'lb',lb, 'ub',ub,'Type','Linear',...
            'SymFun',t_pos_fun,'DepVariables',[x_var],...
            'AuxData',auxdata);
        addConstraint(nlp, t_pos_fun.Name, i, t_cstr);
end

end

