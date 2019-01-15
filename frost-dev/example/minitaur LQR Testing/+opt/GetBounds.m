function bounds = GetBounds(model, vel, T)


if nargin < 2
    vel = [0.0,0];
end

if nargin < 3
    T = 0.2;
end
T = 1;
tmin = 0.00;
%     tmin = 0;

%% first get the model specific boundary values
model_bounds = model.getLimits(); % x, dx, ddx, u

model_bounds.constrBounds.stallTorque = 35;

% state constraints
% motorlb = pi/2;
% motorub = pi/2;
% kneelb = acos(0.5);
% kneeub = acos(0.5);

motorlb = -pi;
motorub = pi;
kneelb = 0;
kneeub = pi-kneelb;

if model.numState == 9
    model_bounds.states.x.lb = [0;0;0.2;0;-pi/2;0;-pi/2;0;0];
    model_bounds.states.x.ub = [0;0;0.2;0;pi/2;0;pi/2;0;0];
    
    model_bounds.states.dx.lb = [0;0;-100;0;-100;0;-100;0;0];
    model_bounds.states.dx.ub = [4;0;100;0;100;0;100;0;0];
elseif model.numState == 22
    model_bounds.states.x.lb = [0;0;0.2;0;-pi/2;0;motorlb;motorlb;kneelb;kneelb;motorlb;motorlb;kneelb;kneelb;motorlb;motorlb;kneelb;kneelb;motorlb;motorlb;kneelb;kneelb];
    model_bounds.states.x.ub = [0;0;0.2;0;pi/2;0;motorub;motorub;kneeub;kneeub;motorub;motorub;kneeub;kneeub;motorub;motorub;kneeub;kneeub;motorub;motorub;kneeub;kneeub];
    
%     model_bounds.states.x.lb = [0;0;0.24*cosd(30);0;0;0;motorlb;motorlb;kneelb;kneelb;motorlb;motorlb;kneelb;kneelb;motorlb;motorlb;kneelb;kneelb;motorlb;motorlb;kneelb;kneelb];
%     model_bounds.states.x.ub = [0;0;0.24*cosd(30);0;0;0;motorub;motorub;kneeub;kneeub;motorub;motorub;kneeub;kneeub;motorub;motorub;kneeub;kneeub;motorub;motorub;kneeub;kneeub];
    
    model_bounds.states.dx.lb = [0;0;0;0;-100;0;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100];
    model_bounds.states.dx.ub = [0;0;0;0;100;0;100;100;100;100;100;100;100;100;100;100;100;100;100;100;100;100];
    
%     model_bounds.states.dx.lb = zeros(22,1);
%     model_bounds.states.dx.ub = zeros(22,1);
    
%     model_bounds.states.ddx.lb = zeros(22,1);
%     model_bounds.states.ddx.ub = zeros(22,1);
elseif  model.numState == 23
    model_bounds.states.x.lb = [0;0;0.1;0;-pi/2;0;motorlb;motorlb;kneelb;kneelb;motorlb;motorlb;kneelb;kneelb;motorlb;motorlb;kneelb;kneelb;motorlb;motorlb;kneelb;kneelb; -pi/2];
    model_bounds.states.x.ub = [10;0;2;0;pi/2;0;motorub;motorub;kneeub;kneeub;motorub;motorub;kneeub;kneeub;motorub;motorub;kneeub;kneeub;motorub;motorub;kneeub;kneeub; pi/2];
    
    model_bounds.states.dx.lb = [0;0;-100;0;-100;0;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100; -100];
    model_bounds.states.dx.ub = [4;0;100;0;100;0;100;100;100;100;100;100;100;100;100;100;100;100;100;100;100;100;100];
elseif model.numState == 25
    model_bounds.states.x.lb = [0;0;0.1;0;-pi/2;0;motorlb;motorlb;kneelb;kneelb;motorlb;motorlb;kneelb;kneelb;motorlb;motorlb;kneelb;kneelb;motorlb;motorlb;kneelb;kneelb; -pi/2;0;0];
    model_bounds.states.x.ub = [10;0;2;0;pi/2;0;motorub;motorub;kneeub;kneeub;motorub;motorub;kneeub;kneeub;motorub;motorub;kneeub;kneeub;motorub;motorub;kneeub;kneeub; pi/2;0;0];
    
    model_bounds.states.dx.lb = [0;0;-100;0;-100;0;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100; -100;0;0];
    model_bounds.states.dx.ub = [4;0;100;0;100;0;100;100;100;100;100;100;100;100;100;100;100;100;100;100;100;100;100;0;0];
end
        


% fixed joint constraint wrench
model_bounds.inputs.ConstraintWrench.ffourBar.lb = -1000;
model_bounds.inputs.ConstraintWrench.ffourBar.ub = 1000;

% fixed joint constraints
model_bounds.params.pfourBar.lb = zeros(8,1);
model_bounds.params.pfourBar.ub = zeros(8,1);

model_bounds.params.pFixedbase.lb = zeros(6,1);
model_bounds.params.pFixedbase.ub = zeros(6,1);

% initial yaw
model_bounds.constrBounds.yaw_initial.lb = 0;
model_bounds.constrBounds.yaw_initial.ub = 0;



% Input min/max
if isnan(getJointIndices(model, 'tail_joint'))
    model_bounds.inputs.Control.u.lb = -model_bounds.constrBounds.stallTorque;
    model_bounds.inputs.Control.u.ub = model_bounds.constrBounds.stallTorque;
else
    model_bounds.params.r.lb = 45;
    model_bounds.params.r.ub = 45;
    
    model_bounds.inputs.Control.u.lb = -model_bounds.constrBounds.stallTorque*[model_bounds.params.r.ub];
    model_bounds.inputs.Control.u.ub = model_bounds.constrBounds.stallTorque*[model_bounds.params.r.ub];
end




%% construct the boundary values for each domain

bounds = model_bounds;

bounds.Stance = model_bounds;


model_bounds.inputs.ConstraintWrench.u.lb = -model_bounds.constrBounds.stallTorque;
model_bounds.inputs.ConstraintWrench.u.ub = model_bounds.constrBounds.stallTorque;



end
