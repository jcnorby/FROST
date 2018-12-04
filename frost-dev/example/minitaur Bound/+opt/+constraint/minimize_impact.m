function minimize_impact(nlp, bounds)
% return;
plant = nlp.Plant;

dx = plant.States.dx;
dxn = plant.States.dxn;

lb = -0.1;
ub = 0.1;

constraint_func = SymFunction(['smooth_',nlp.Name], dx-dxn, {dx, dxn});
addNodeConstraint(nlp, constraint_func, {'dx','dxn'}, 'all', lb, ub, 'linear');