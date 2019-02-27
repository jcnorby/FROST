function bounds = GetBounds(model, vel, T)

global bInactive
if nargin < 2
    vel = [0.0,0];
end

if nargin < 3
    T = 0.5;
end
T = 0.5;
tmin = 0.001;

%     tmin = 0;

%% first get the model specific boundary values
model_bounds = model.getLimits(); % x, dx, ddx, u

model_bounds.constrBounds.stallTorque = 3;

% state constraints
motorlb = -pi;
motorub = pi;
kneelb = 0;
kneeub = pi;

taillb = -pi/2; % -pi/2
if bInactive
    tailub = -pi/2; % pi/2
else
    tailub = pi/2;
end

if model.numState == 22
    model_bounds.states.x.lb = [0;0;0.1;0;-pi/2;0;motorlb;motorlb;kneelb;kneelb;motorlb;motorlb;kneelb;kneelb;motorlb;motorlb;kneelb;kneelb;motorlb;motorlb;kneelb;kneelb];
    model_bounds.states.x.ub = [10;0;2;0;pi/2;0;motorub;motorub;kneeub;kneeub;motorub;motorub;kneeub;kneeub;motorub;motorub;kneeub;kneeub;motorub;motorub;kneeub;kneeub];
    
    model_bounds.states.dx.lb = [0;0;-100;0;-100;0;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100];
    model_bounds.states.dx.ub = [4;0;100;0;100;0;100;100;100;100;100;100;100;100;100;100;100;100;100;100;100;100];
elseif  model.numState == 23
    model_bounds.states.x.lb = [0;0;0.1;0;-pi/2;0;motorlb;motorlb;kneelb;kneelb;motorlb;motorlb;kneelb;kneelb;motorlb;motorlb;kneelb;kneelb;motorlb;motorlb;kneelb;kneelb; -pi/2];
    model_bounds.states.x.ub = [10;0;2;0;pi/2;0;motorub;motorub;kneeub;kneeub;motorub;motorub;kneeub;kneeub;motorub;motorub;kneeub;kneeub;motorub;motorub;kneeub;kneeub; pi/2];
    
    model_bounds.states.dx.lb = [0;0;-100;0;-100;0;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100; -100];
    model_bounds.states.dx.ub = [4;0;100;0;100;0;100;100;100;100;100;100;100;100;100;100;100;100;100;100;100;100;100];
elseif model.numState == 25
    model_bounds.states.x.lb = [0;0;0.1;0;-pi/2;0;motorlb;motorlb;kneelb;kneelb;motorlb;motorlb;kneelb;kneelb;motorlb;motorlb;kneelb;kneelb;motorlb;motorlb;kneelb;kneelb; taillb;0;0];
    model_bounds.states.x.ub = [10;0;2;0;pi/2;0;motorub;motorub;kneeub;kneeub;motorub;motorub;kneeub;kneeub;motorub;motorub;kneeub;kneeub;motorub;motorub;kneeub;kneeub; tailub;0;0];
    
%     model_bounds.states.x.lb = [0;0;0.1;0;-pi/2;0;motorlb;motorlb;kneelb;kneelb;motorlb;motorlb;kneelb;kneelb;motorlb;motorlb;kneelb;kneelb;motorlb;motorlb;kneelb;kneelb; -0.005;0;0];
%     model_bounds.states.x.ub = [10;0;2;0;pi/2;0;motorub;motorub;kneeub;kneeub;motorub;motorub;kneeub;kneeub;motorub;motorub;kneeub;kneeub;motorub;motorub;kneeub;kneeub; 0.005;0;0];    
    
    model_bounds.states.dx.lb = [0;0;-100;0;-100;0;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100; -100;0;0];
    model_bounds.states.dx.ub = [4;0;100;0;100;0;100;100;100;100;100;100;100;100;100;100;100;100;100;100;100;100;100;0;0];
elseif model.numState == 26
    model_bounds.states.x.lb = [0;0;0.1;0;-pi/2;0;motorlb;motorlb;kneelb;kneelb;motorlb;motorlb;kneelb;kneelb;motorlb;motorlb;kneelb;kneelb;motorlb;motorlb;kneelb;kneelb; taillb;0;0;0];
    model_bounds.states.x.ub = [10;0;2;0;pi/2;0;motorub;motorub;kneeub;kneeub;motorub;motorub;kneeub;kneeub;motorub;motorub;kneeub;kneeub;motorub;motorub;kneeub;kneeub; tailub ;0;0;0];
    
%     model_bounds.states.x.lb = [0;0;0.1;0;-pi/2;0;motorlb;motorlb;kneelb;kneelb;motorlb;motorlb;kneelb;kneelb;motorlb;motorlb;kneelb;kneelb;motorlb;motorlb;kneelb;kneelb; -0.005;0;0];
%     model_bounds.states.x.ub = [10;0;2;0;pi/2;0;motorub;motorub;kneeub;kneeub;motorub;motorub;kneeub;kneeub;motorub;motorub;kneeub;kneeub;motorub;motorub;kneeub;kneeub; 0.005;0;0];    
    
    model_bounds.states.dx.lb = [0;0;-100;0;-100;0;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100; -100;0;0;0];
    model_bounds.states.dx.ub = [4;0;100;0;100;0;100;100;100;100;100;100;100;100;100;100;100;100;100;100;100;100;100;0;0;0];
end
        


% fixed joint constraint wrench
model_bounds.inputs.ConstraintWrench.ffourBar.lb = -1000;
model_bounds.inputs.ConstraintWrench.ffourBar.ub = 1000;

% fixed joint constraints
model_bounds.params.pfourBar.lb = zeros(8,1);
model_bounds.params.pfourBar.ub = zeros(8,1);

% initial yaw
model_bounds.constrBounds.yaw_initial.lb = 0;
model_bounds.constrBounds.yaw_initial.ub = 0;



% Input min/max
if isnan(getJointIndices(model, 'tail_joint'))
    model_bounds.inputs.Control.u.lb = -model_bounds.constrBounds.stallTorque;
    model_bounds.inputs.Control.u.ub = model_bounds.constrBounds.stallTorque;
else
    
    if model.Joints(getJointIndices(model, 'tail_joint')).Actuator.Ratio ~= 1
        model_bounds.params.r.lb = 1; % 0.1
        model_bounds.params.r.ub = 1; % 50
    else
        model_bounds.params.r.lb = 0.1;
        model_bounds.params.r.ub = 50;
    end
%     model_bounds.inputs.Control.u.lb = -model_bounds.constrBounds.stallTorque*[1;1;1;1;1;1;1;1;model_bounds.params.r.ub];
%     model_bounds.inputs.Control.u.ub = model_bounds.constrBounds.stallTorque*[1;1;1;1;1;1;1;1;model_bounds.params.r.ub];
    
    model_bounds.inputs.Control.u.lb = -model_bounds.constrBounds.stallTorque*[1;1;1;1;1;1;1;1;model_bounds.params.r.ub];
    model_bounds.inputs.Control.u.ub = model_bounds.constrBounds.stallTorque*[1;1;1;1;1;1;1;1;model_bounds.params.r.ub];
end

% Joint min/max
model_bounds.constrBounds.jointAng.lb = -pi/2;
model_bounds.constrBounds.jointAng.ub = pi/2;
model_bounds.constrBounds.jointExt.lb = 0.4;
model_bounds.constrBounds.jointExt.ub = pi - model_bounds.constrBounds.jointExt.lb;

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
bounds.BackStance = model_bounds;

bounds.FrontLiftOff = model_bounds;
bounds.FrontLiftOff.states.x = model_bounds.states.x;
bounds.FrontLiftOff.states.xn = model_bounds.states.x;
bounds.FrontLiftOff.states.dx = model_bounds.states.dx;
bounds.FrontLiftOff.states.dxn = model_bounds.states.dx;



bounds.Flight = model_bounds;

bounds.BackLiftOff = model_bounds;
bounds.BackLiftOff.states.x = model_bounds.states.x;
bounds.BackLiftOff.states.xn = model_bounds.states.x;
bounds.BackLiftOff.states.dx = model_bounds.states.dx;
bounds.BackLiftOff.states.dxn = model_bounds.states.dx;

% model_bounds.inputs.ConstraintWrench.u.lb = -model_bounds.constrBounds.stallTorque;
% model_bounds.inputs.ConstraintWrench.u.ub = model_bounds.constrBounds.stallTorque;



end
