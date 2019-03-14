function StanceConstraints(nlp, bounds, varargin)
global bAerodynamic;

ip = inputParser;
ip.addParameter('LoadPath',[],@ischar);
ip.parse(varargin{:});

domain = nlp.Plant;

Foot0 = sys.frames.Foot0(domain);
Foot1 = sys.frames.Foot1(domain);
Foot2 = sys.frames.Foot2(domain);
Foot3 = sys.frames.Foot3(domain);

swingfeet = [Foot0, Foot1, Foot2, Foot3];

if any(strcmp(fieldnames(domain.Inputs.External), 'uReflectedInertiaLoad'))
    opt.constraint.reflected_inertia_const(nlp, bounds);
end

opt.constraint.zero_order_hold(nlp, bounds);
opt.constraint.symmetry(nlp, bounds);
opt.constraint.motor_model(nlp, bounds);
opt.constraint.joint_limits(nlp, bounds);
opt.constraint.non_penetration(nlp, bounds, swingfeet);

if bAerodynamic
    opt.constraint.aero_tail_model(nlp, bounds);
end

normalForces = [domain.Inputs.ConstraintWrench.fFoot0(3);domain.Inputs.ConstraintWrench.fFoot1(3);domain.Inputs.ConstraintWrench.fFoot2(3);domain.Inputs.ConstraintWrench.fFoot3(3)];
normal_forces_fun = SymFunction(['minNormalForces_', nlp.Name], normalForces, {domain.Inputs.ConstraintWrench.fFoot0,domain.Inputs.ConstraintWrench.fFoot1,domain.Inputs.ConstraintWrench.fFoot2,domain.Inputs.ConstraintWrench.fFoot3});

addNodeConstraint(nlp, normal_forces_fun, {'fFoot0','fFoot1','fFoot2','fFoot3'}, 1:nlp.NumNode-2, ...
    8, inf,'Linear');

end
