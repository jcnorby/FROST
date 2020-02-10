function FlightConstraints(nlp, bounds, varargin)

ip = inputParser;
ip.addParameter('LoadPath',[],@ischar);
ip.parse(varargin{:});

domain = nlp.Plant;

Foot0 = sys.frames.Foot0(domain);
Foot1 = sys.frames.Foot1(domain);
Foot2 = sys.frames.Foot2(domain);
Foot3 = sys.frames.Foot3(domain);

opt.constraint.foot_height(nlp, [Foot0; Foot1; Foot2; Foot3], 'stance_to_stance');
opt.constraint.knee_height(nlp);
opt.constraint.body_height(nlp);

opt.constraint.track_state_flight(nlp, bounds);

opt.constraint.motor_model(nlp, bounds);


end
