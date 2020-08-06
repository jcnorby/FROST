function distanceTraveled(nlp, sys)

Ra = 0.180;
kt = 0.0954;
Nr = 1;

domain = sys.Gamma.Nodes.Domain{end};

x = domain.States.x;

distFunc = 10-x(1);
dist_fun = SymFunction('distanceTravelled',distFunc,{x});
addNodeCost(nlp.Phase(end),dist_fun,{'x'}, 'last');

nlp.update;
end