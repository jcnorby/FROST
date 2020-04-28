function bounds = GetBounds(model, vel, T)


if nargin < 2
    vel = [0.0,0];
end

if nargin < 3
    T = 0.2;
end
T = 1;
tmin = 0.001;
%     tmin = 0;

%% first get the model specific boundary values
model_bounds = model.getLimits(); % x, dx, ddx, u

model_bounds.constrBounds.stallTorque = 3;

model_bounds.states.x.lb = [0;0;0;-pi;-pi/2;-pi;-100;-100];
model_bounds.states.x.ub = [0;0;0;pi;pi/2;pi;100;100];

model_bounds.states.dx.lb = [0;0;0;-100;-100;-100;-100;-100];
model_bounds.states.dx.ub = [0;0;0;100;100;100;100;100];

model_bounds.params.pFixedbase.lb = zeros(3,1);
model_bounds.params.pFixedbase.ub = zeros(3,1);

% Step Duration
model_bounds.time.duration.lb = 0;
model_bounds.time.duration.ub = T;
model_bounds.time.t0.lb = 0;
model_bounds.time.t0.ub = 0;
model_bounds.time.t0.x0 = 0;
model_bounds.time.tf.lb = tmin;
model_bounds.time.tf.ub = T;
model_bounds.time.tf.x0 = T;

% Input min/max
model_bounds.inputs.Control.u.lb = -model_bounds.constrBounds.stallTorque;
model_bounds.inputs.Control.u.ub = model_bounds.constrBounds.stallTorque;


%% construct the boundary values for each domain

bounds = model_bounds;


end
