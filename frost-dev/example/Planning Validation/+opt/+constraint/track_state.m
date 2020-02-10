function track_state(nlp, bounds)
% constraints for step length and step width

% domain = nlp.Plant;
% 
% x = domain.States.x;
% dx = domain.States.dx;
% temp = load('process/energyOptimalBoundWithTailRAccurate.mat');
% gait = mergeGait(temp.gait, temp.nlp);
% 
% tvec = linspace(nlp.Options.ConstantTimeHorizon(1),nlp.Options.ConstantTimeHorizon(2),nlp.NumNode);
% [a,index] = unique(gait.tspan);
% 
% tail_pos_des = interp1(gait.tspan(index), gait.states.x(23,index), tvec);
% tail_vel_des = interp1(gait.tspan(index), gait.states.dx(23,index), tvec);
% track_state_error = [x('tail_joint') - tail_pos_des;dx('tail_joint') - tail_vel_des];
% 
% for i = 1:nlp.NumNode
%     t_fun = SymFunction(['trackState', num2str(i)],track_state_error(:,i),{x,dx});
%     x_var = nlp.OptVarTable.x(i);
%     dx_var = nlp.OptVarTable.dx(i);
%     t_cstr = NlpFunction('Name',t_fun.Name,...
%         'Dimension',length(t_fun),'lb',0, 'ub',0,'Type','Linear',...
%         'SymFun',t_fun,'DepVariables',[x_var;dx_var]);
%     addConstraint(nlp, ['trackState', num2str(i)], i, t_cstr);
% end

domain = nlp.Plant;

x = domain.States.x;
dx = domain.States.dx;

tvec = linspace(nlp.Options.ConstantTimeHorizon(1),nlp.Options.ConstantTimeHorizon(2),nlp.NumNode);
s = [0 0 0.4000 1.0000 0 -1.0000];
a = [6.6667, 0, 3.5233, -6.6667, 0, 9.6833, 0.3000, 0.1000]; % s = [0 0 0.4000 1.0000 0 -1.0000];
T = tvec(end) - tvec(1);

com_state = applyStance3D(s,a, a(7),tvec);
com_pos_traj = com_state(1:3,:);
com_vel_traj = com_state(4:6,:);
com_pos = SymVariable('compos', 3);
com_vel = SymVariable('comvel', 3);
state_error = [x(1:3) - tomatrix(com_pos);dx(1:3) - tomatrix(com_vel)];
t_fun = SymFunction('trackState',state_error,{x,dx}, {[com_pos; com_vel]});

for i = 1:2:nlp.NumNode
    
    x_var = nlp.OptVarTable.x(i);
    dx_var = nlp.OptVarTable.dx(i);
    auxdata = [com_pos_traj(:,i);com_vel_traj(:,i)];
    t_cstr = NlpFunction('Name',t_fun.Name,...
        'Dimension',length(t_fun),'lb',-1e-2, 'ub',1e-2,'Type','Linear',...
        'SymFun',t_fun,'DepVariables',[x_var;dx_var],...
        'AuxData',auxdata);
    addConstraint(nlp, 'trackState', i, t_cstr);
end

end

