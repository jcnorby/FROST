function Height(nlp, sys)

x = sys.States.x;


% P = tovector(norm(dq.*(B*u)).^2);
% power_fun = SymFunction('power',P,{u,dq});
% addRunningCost(nlp,power_fun,{'u','dx'});
height = 3-x('BasePosZ');
height_fun = SymFunction('height',height,{x});
addNodeCost(nlp,height_fun,{'x'}, 'last');

nlp.update;
end
