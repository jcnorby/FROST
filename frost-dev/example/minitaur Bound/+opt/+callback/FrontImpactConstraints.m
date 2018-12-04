function FrontImpactConstraints(nlp, src, tar, bounds, varargin)
plant = nlp.Plant;

% no need to be time-continuous
%     removeConstraint(nlp,'tContDomain');

% first call the class method (calling impact model since it no longer
% applies if we have a custom function)
plant.rigidImpactConstraint(nlp, src, tar, bounds, varargin{:});

% dx = plant.States.dx;
% dxn = plant.States.dxn;
% 
% lb = -0.1;
% ub = 0.1;
% 
% constraint_func = SymFunction(['smooth_',nlp.Name], dx-dxn, {dx, dxn});
% addNodeConstraint(nlp, constraint_func, {'dx','dxn'}, 'all', lb, ub, 'linear');
opt.constraint.minimize_impact(nlp, bounds)
end
