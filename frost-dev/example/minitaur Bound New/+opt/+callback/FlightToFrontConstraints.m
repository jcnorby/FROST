function FlightToFrontConstraints(nlp, bounds, varargin)
global bTail

ip = inputParser;
ip.addParameter('LoadPath',[],@ischar);
ip.parse(varargin{:});

domain = nlp.Plant;

Foot0 = sys.frames.Foot0(domain);
Foot1 = sys.frames.Foot1(domain);
Foot2 = sys.frames.Foot2(domain);
Foot3 = sys.frames.Foot3(domain);

swingfeet = [Foot0; Foot2; Foot1; Foot3];

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

% opt.constraint.init_state(nlp, bounds);
% opt.constraint.joint_ang_restrictions(nlp, bounds, [0;1;2;3]);

end
