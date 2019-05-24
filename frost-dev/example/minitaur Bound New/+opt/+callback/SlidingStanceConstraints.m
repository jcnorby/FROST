function SlidingStanceConstraints(nlp, bounds, varargin)
global bTail;

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

if bTail
    opt.constraint.aero_tail_model(nlp, bounds);
end

normalForces = [domain.Inputs.ConstraintWrench.fFoot0(2);domain.Inputs.ConstraintWrench.fFoot1(2);domain.Inputs.ConstraintWrench.fFoot2(2);domain.Inputs.ConstraintWrench.fFoot3(2)];
normal_forces_fun = SymFunction(['minNormalForces_', nlp.Name], normalForces, {domain.Inputs.ConstraintWrench.fFoot0,domain.Inputs.ConstraintWrench.fFoot1,domain.Inputs.ConstraintWrench.fFoot2,domain.Inputs.ConstraintWrench.fFoot3});

addNodeConstraint(nlp, normal_forces_fun, {'fFoot0','fFoot1','fFoot2','fFoot3'}, 1:nlp.NumNode-2,...
    8, inf,'Linear');

x = domain.States.x;
dx = domain.States.dx;
p_foot0 = getCartesianPosition(domain, Foot0);
p_foot1 = getCartesianPosition(domain, Foot1);
p_foot2 = getCartesianPosition(domain, Foot2);
p_foot3 = getCartesianPosition(domain, Foot3);
feet_x_vel = jacobian([p_foot0(1);p_foot1(1);p_foot2(1);p_foot3(1)], x)*dx;

feet_x_vel_fun = SymFunction(['FeetVel', nlp.Name], feet_x_vel, {x,dx});

addNodeConstraint(nlp, feet_x_vel_fun, {'x','dx'}, 'except-terminal',...
    0, Inf,'Linear');
addNodeConstraint(nlp, feet_x_vel_fun, {'x','dx'}, 'last',...
    0, 0,'Linear');
end
