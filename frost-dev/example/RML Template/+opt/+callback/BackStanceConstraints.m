function BackStanceConstraints(nlp, bounds, varargin)

ip = inputParser;
ip.addParameter('LoadPath',[],@ischar);
ip.parse(varargin{:});

domain = nlp.Plant;

Foot0 = sys.frames.Foot0(domain);
Foot1 = sys.frames.Foot1(domain);
Foot2 = sys.frames.Foot2(domain);
Foot3 = sys.frames.Foot3(domain);

swingfeet = [Foot0, Foot2];

% opt.constraint.zero_order_hold(nlp, bounds);
% opt.constraint.symmetry(nlp, bounds);
opt.constraint.motor_model(nlp, bounds);
% opt.constraint.joint_limits(nlp, bounds);
opt.constraint.non_penetration(nlp, bounds, swingfeet);


%%%%%%  IF INSTANTANEOUS SWITCH, USE THIS (OTHERWISE DON'T)

%     normalForces = [domain.Inputs.ConstraintWrench.fFoot1(3);domain.Inputs.ConstraintWrench.fFoot3(3)];
%     normal_forces_fun = SymFunction(['normalForces_', nlp.Name], normalForces, {domain.Inputs.ConstraintWrench.fFoot1,domain.Inputs.ConstraintWrench.fFoot3});
%
%     addNodeConstraint(nlp, normal_forces_fun, {'fFoot1', 'fFoot3'}, 'last', ...
%         0, 0,'Linear');

end


