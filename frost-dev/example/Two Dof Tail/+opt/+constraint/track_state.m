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
temp = load('process/energyOptimalBoundWithTailRAccurateReflectedNew.mat');
gait = mergeGait(temp.gait, temp.nlp);

tc = 1;
tvec = (1/tc)*linspace(nlp.Options.ConstantTimeHorizon(1),nlp.Options.ConstantTimeHorizon(2),nlp.NumNode);
[a,index] = unique(gait.tspan);

tail_pos_des = interp1(gait.tspan(index), gait.states.x(23,index), tvec);
tail_vel_des = (1/tc)*interp1(gait.tspan(index), gait.states.dx(23,index), tvec);
targetx = SymVariable('targetx');
targetdx = SymVariable('targetdx');
state_error = [x('tail_joint') - tomatrix(targetx);dx('tail_joint') - targetdx];
t_fun = SymFunction('trackState',state_error,{x,dx}, {[targetx, targetdx]});

for i = 1:3:nlp.NumNode
    
    x_var = nlp.OptVarTable.x(i);
    dx_var = nlp.OptVarTable.dx(i);
    auxdata = [tail_pos_des(i),tail_vel_des(i)];
    t_cstr = NlpFunction('Name',t_fun.Name,...
        'Dimension',length(t_fun),'lb',-1e-2, 'ub',1e-2,'Type','Linear',...
        'SymFun',t_fun,'DepVariables',[x_var;dx_var],...
        'AuxData',auxdata);
    addConstraint(nlp, 'trackState', i, t_cstr);
end

end

