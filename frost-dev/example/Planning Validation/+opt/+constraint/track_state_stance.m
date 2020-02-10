function track_state_stance(nlp, bounds)
% Constraint to track a COM trajectory in stance

domain = nlp.Plant;

x = domain.States.x;
dx = domain.States.dx;

tvec = linspace(nlp.Options.ConstantTimeHorizon(1),nlp.Options.ConstantTimeHorizon(2),nlp.NumNode);
s = nlp.UserParams.traj.state;
a = nlp.UserParams.traj.action;
T = tvec(end) - tvec(1);

com_state = applyStance3D(s,a, a(7),tvec);
com_pos_traj = com_state(1:3,:);
com_vel_traj = com_state(4:6,:);

com_pos = SymVariable('compos', 3);
com_vel = SymVariable('comvel', 3);
state_error = [x(1:3) - tomatrix(com_pos);dx(1:3) - tomatrix(com_vel)];
t_fun = SymFunction(['trackState_', nlp.Name],state_error,{x,dx}, {[com_pos; com_vel]});

for i = 1:2:nlp.NumNode
    
    x_var = nlp.OptVarTable.x(i);
    dx_var = nlp.OptVarTable.dx(i);
    auxdata = [com_pos_traj(:,i);com_vel_traj(:,i)];
    t_cstr = NlpFunction('Name',t_fun.Name,...
        'Dimension',length(t_fun),'lb',-1e-2, 'ub',1e-2,'Type','Linear',...
        'SymFun',t_fun,'DepVariables',[x_var;dx_var],...
        'AuxData',auxdata);
    addConstraint(nlp, ['trackState_', nlp.Name], i, t_cstr);
end

end

