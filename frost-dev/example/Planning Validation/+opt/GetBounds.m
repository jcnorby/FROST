function bounds = GetBounds(model)

T = 1;
tmin = 0.001;

%% first get the model specific boundary values
model_bounds = model.getLimits(); % x, dx, ddx, u
% 
% % state constraints
% ab_lb = -0.43;
% ab_ub = 0.43;
% hip_lb = 0.1;
% hip_ub = pi - 0.1;
% knee_lb = 1;
% knee_ub = 1;
% 
% model_bounds.states.x.lb = [-10;-10;0;-pi/2;-pi/2;pi/2;ab_lb;hip_lb;knee_lb;0;ab_lb;hip_lb;knee_lb;0;ab_lb;hip_lb;knee_lb;0;ab_lb;hip_lb;knee_lb;0];
% model_bounds.states.x.ub = [10;10;2;pi/2;pi/2;pi/2;ab_ub;hip_ub;knee_ub;0;ab_ub;hip_ub;knee_ub;0;ab_ub;hip_ub;knee_ub;0;ab_ub;hip_ub;knee_ub;0];
% 
% model_bounds.states.dx.lb = [-4;0;-100;0;-100;0;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100];
% model_bounds.states.dx.ub = [4;0;100;0;100;0;100;100;100;100;100;100;100;100;100;100;100;100;100;100;100;100];

stallTorque = 250;
model_bounds.inputs.Control.u.lb = -stallTorque;
model_bounds.inputs.Control.u.ub = stallTorque;

% fixed joint constraint wrench
model_bounds.inputs.ConstraintWrench.ffourBar.lb = -1000;
model_bounds.inputs.ConstraintWrench.ffourBar.ub = 1000;

% Distance travelled
model_bounds.constrBounds.averageVelocity.lb = 0;
model_bounds.constrBounds.averageVelocity.ub = 10;

% Foot Height
model_bounds.constrBounds.footHeight.lb = 0.0;
model_bounds.constrBounds.footHeight.ub = 10;

% Periodicity
epsilon = 0;
model_bounds.constrBounds.periodicity.lb = -epsilon;
model_bounds.constrBounds.periodicity.ub = epsilon;

% Step Duration
model_bounds.time.duration.lb = 0;
model_bounds.time.duration.ub = T;
model_bounds.time.t0.lb = 0;
model_bounds.time.t0.ub = 0;
model_bounds.time.t0.x0 = 0;
model_bounds.time.tf.lb = tmin;
model_bounds.time.tf.ub = T;
model_bounds.time.tf.x0 = T;

model_bounds.params.tfinal.lb = 0;
model_bounds.params.tfinal.ub = 0.5;

model_bounds.params.dfinal.lb = 1e-3;
model_bounds.params.dfinal.ub = 2;


% Step size
% model_bounds.params.d.lb = 0.001;
% model_bounds.params.d.lb = 0;
% model_bounds.params.d.ub = Inf;

model_bounds.params.kp.lb = 0;
model_bounds.params.kp.ub = 5;
model_bounds.params.kd.lb = 0;
model_bounds.params.kd.ub = 1;
model_bounds.params.qDes.lb = model_bounds.states.x.lb(end);
model_bounds.params.qDes.ub = model_bounds.states.x.ub(end);



%% construct the boundary values for each domain
bounds = struct();
bounds = model_bounds;

bounds.Stance = model_bounds;
bounds.Flight = model_bounds;

bounds.Liftoff = model_bounds;
bounds.Liftoff.states.x = model_bounds.states.x;
bounds.Liftoff.states.xn = model_bounds.states.x;
bounds.Liftoff.states.dx = model_bounds.states.dx;
bounds.Liftoff.states.dxn = model_bounds.states.dx;

bounds.Impact = model_bounds;
bounds.Impact.states.x = model_bounds.states.x;
bounds.Impact.states.xn = model_bounds.states.x;
bounds.Impact.states.dx = model_bounds.states.dx;
bounds.Impact.states.dxn = model_bounds.states.dx;

% model_bounds.inputs.ConstraintWrench.u.lb = -model_bounds.constrBounds.stallTorque;
% model_bounds.inputs.ConstraintWrench.u.ub = model_bounds.constrBounds.stallTorque;



end
