function FlightToFrontConstraints(nlp, bounds, varargin)

ip = inputParser;
ip.addParameter('LoadPath',[],@ischar);
ip.parse(varargin{:});

domain = nlp.Plant;

Foot0 = sys.frames.Foot0(domain);
Foot1 = sys.frames.Foot1(domain);
Foot2 = sys.frames.Foot2(domain);
Foot3 = sys.frames.Foot3(domain);

opt.constraint.foot_height(nlp, [Foot0; Foot1; Foot2; Foot3], 'stance_to_stance');

%     opt.constraint.joint_limits(nlp, bounds);
opt.constraint.motor_model(nlp, bounds);
%     opt.constraint.distance_traveled(nlp, bounds);
%     opt.constraint.zero_order_hold(nlp,bounds)
%     opt.constraint.average_velocity(nlp, bounds);
%     opt.constraint.symmetry(nlp, bounds);
%     opt.constraint.ground_speed_matching(nlp, bounds);

end