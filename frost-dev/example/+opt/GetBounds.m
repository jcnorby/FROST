function bounds = GetBounds(model, vel, T)
    
    
    if nargin < 2
        vel = [0.0,0];
    end
    
    if nargin < 3
        T = 0.2;
    end
    T = 0.2;
    tmin = 0.01;
    
    %% first get the model specific boundary values
    model_bounds = model.getLimits(); % x, dx, ddx, u
    
    if any(strcmp(fieldnames(model.Params), 'r'))
        model_bounds.constrBounds.stallTorque = 35;
    else
        model_bounds.constrBounds.stallTorque = 100;%3.5;
    end
%     model_bounds.constrBounds.stallTorque = 0;
    
    % state constraints
    motorlb = -pi/2;
    motorub = pi;
    kneelb = 0;
    kneeub = pi;
        
if isnan(getJointIndices(model, 'tail_joint'))
    model_bounds.states.x.lb = [0;0;0.1;0;-pi/2;0;motorlb;motorlb;kneelb;kneelb;motorlb;motorlb;kneelb;kneelb;motorlb;motorlb;kneelb;kneelb;motorlb;motorlb;kneelb;kneelb];
    model_bounds.states.x.ub = [10;0;2;0;pi/2;0;motorub;motorub;kneeub;kneeub;motorub;motorub;kneeub;kneeub;motorub;motorub;kneeub;kneeub;motorub;motorub;kneeub;kneeub];
    
    model_bounds.states.dx.lb = [0;0;-100;0;-100;0;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100];
    model_bounds.states.dx.ub = [4;0;100;0;100;0;100;100;100;100;100;100;100;100;100;100;100;100;100;100;100;100];
else
    model_bounds.states.x.lb = [0;0;0.1;0;-pi/2;0;motorlb;motorlb;kneelb;kneelb;motorlb;motorlb;kneelb;kneelb;motorlb;motorlb;kneelb;kneelb;motorlb;motorlb;kneelb;kneelb;  -pi/2];
    model_bounds.states.x.ub = [10;0;2;0;pi/2;0;motorub;motorub;kneeub;kneeub;motorub;motorub;kneeub;kneeub;motorub;motorub;kneeub;kneeub;motorub;motorub;kneeub;kneeub; pi/2];
    
    model_bounds.states.dx.lb = [0;0;-100;0;-100;0;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100;-100; -100];
    model_bounds.states.dx.ub = [4;0;100;0;100;0;100;100;100;100;100;100;100;100;100;100;100;100;100;100;100;100;100];
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
    model_bounds.inputs.Control.u.lb = -model_bounds.constrBounds.stallTorque;
    model_bounds.inputs.Control.u.ub = model_bounds.constrBounds.stallTorque;
    
%     model_bounds.inputs.Control.u.lb = -0.1;
%     model_bounds.inputs.Control.u.ub = -0.1;
    
    % Joint min/max
    model_bounds.constrBounds.jointAng.lb = -pi/2;
    model_bounds.constrBounds.jointAng.ub = pi/2;
    model_bounds.constrBounds.jointExt.lb = 0.3;
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
    
    % Step size
    model_bounds.params.d.lb = 0.05;
    model_bounds.params.d.ub = Inf;
    
    model_bounds.params.r.lb = 0.01;
    model_bounds.params.r.ub = 10;
    
%     model_bounds.params.r.lb = 1;
%     model_bounds.params.r.ub = 1;
    
    model_bounds.params.kp.lb = 0;
    model_bounds.params.kp.ub = 5;
    model_bounds.params.kd.lb = 0;
    model_bounds.params.kd.ub = 1;
    model_bounds.params.qDes.lb = model_bounds.states.x.lb(end);
    model_bounds.params.qDes.ub = model_bounds.states.x.ub(end);
           
    
    
    %% construct the boundary values for each domain 
    bounds = struct();
    
    bounds.FrontStance = model_bounds;
%     bounds.FrontStance.params.pFoot0.lb = zeros(3,1);
%     bounds.FrontStance.params.pFoot0.ub = zeros(3,1);
%     bounds.FrontStance.params.pFoot2.lb = zeros(3,1);
%     bounds.FrontStance.params.pFoot2.ub = zeros(3,1);
    
    bounds.BackStance1 = model_bounds;
    bounds.BackStance2 = model_bounds;
    bounds.FullStance = model_bounds;
%     bounds.BackStance.params.pFoot1.lb = zeros(3,1);
%     bounds.BackStance.params.pFoot1.ub = zeros(3,1);
%     bounds.BackStance.params.pFoot3.lb = zeros(3,1);
%     bounds.BackStance.params.pFoot3.ub = zeros(3,1);
    
    bounds.FlightToFront = model_bounds;
    bounds.FlightToBack = model_bounds;
    
    bounds.FrontImpact = model_bounds;
    bounds.FrontImpact.states.x = model_bounds.states.x;
    bounds.FrontImpact.states.xn = model_bounds.states.x;
    bounds.FrontImpact.states.dx = model_bounds.states.dx;
    bounds.FrontImpact.states.dxn = model_bounds.states.dx;
    
    
    bounds.FrontLiftOff = model_bounds;
    bounds.FrontLiftOff.states.x = model_bounds.states.x;
    bounds.FrontLiftOff.states.xn = model_bounds.states.x;
    bounds.FrontLiftOff.states.dx = model_bounds.states.dx;
    bounds.FrontLiftOff.states.dxn = model_bounds.states.dx;
    
    
    bounds.BackImpact = model_bounds;
    bounds.BackImpact.states.x = model_bounds.states.x;
    bounds.BackImpact.states.xn = model_bounds.states.x;
    bounds.BackImpact.states.dx = model_bounds.states.dx;
    bounds.BackImpact.states.dxn = model_bounds.states.dx;
    
    
    bounds.BackLiftOff = model_bounds;
    bounds.BackLiftOff.states.x = model_bounds.states.x;
    bounds.BackLiftOff.states.xn = model_bounds.states.x;
    bounds.BackLiftOff.states.dx = model_bounds.states.dx;
    bounds.BackLiftOff.states.dxn = model_bounds.states.dx;
    
    bounds.FrontLiftOffBackStance = model_bounds;
    bounds.FrontLiftOffBackStance.states.x = model_bounds.states.x;
    bounds.FrontLiftOffBackStance.states.xn = model_bounds.states.x;
    bounds.FrontLiftOffBackStance.states.dx = model_bounds.states.dx;
    bounds.FrontLiftOffBackStance.states.dxn = model_bounds.states.dx;
    
    
    
end
