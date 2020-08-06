function StanceConstraints(nlp, bounds, varargin)

ip = inputParser;
ip.addParameter('LoadPath',[],@ischar);
ip.parse(varargin{:});

domain = nlp.Plant;

Foot0 = sys.frames.Foot0(domain);
Foot1 = sys.frames.Foot1(domain);
Foot2 = sys.frames.Foot2(domain);
Foot3 = sys.frames.Foot3(domain);

opt.constraint.foot_height(nlp, [Foot0; Foot1; Foot2; Foot3], 'stance');
opt.constraint.knee_height(nlp);
opt.constraint.body_height(nlp);

opt.constraint.motor_model(nlp, bounds);
opt.constraint.init_state(nlp, bounds);
% opt.constraint.final_state(nlp, bounds);

normalForces = [domain.Inputs.ConstraintWrench.fFoot0(3);domain.Inputs.ConstraintWrench.fFoot1(3);domain.Inputs.ConstraintWrench.fFoot2(3);domain.Inputs.ConstraintWrench.fFoot3(3)];
normal_forces_fun = SymFunction(['minNormalForces_', nlp.Name], normalForces, {domain.Inputs.ConstraintWrench.fFoot0,domain.Inputs.ConstraintWrench.fFoot1,domain.Inputs.ConstraintWrench.fFoot2,domain.Inputs.ConstraintWrench.fFoot3});

addNodeConstraint(nlp, normal_forces_fun, {'fFoot0','fFoot1','fFoot2','fFoot3'}, 'except-last', ...
    0, inf,'Linear');

addNodeConstraint(nlp, normal_forces_fun, {'fFoot0','fFoot1','fFoot2','fFoot3'}, 'last', ...
    0, 0,'Linear');

end
