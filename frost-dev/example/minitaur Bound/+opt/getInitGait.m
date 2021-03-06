function gait = getInitGait(nlp, bounds)

temp = load('local/simbound.mat', 'logger');
logger = temp.logger;

for i = 1:length(nlp.Phase)
    domain = nlp.Phase(i);
    numNodes = domain.NumNode;
    
    
%     if mod(i,2)
%         flow = logger(ceil(i/2)).flow;
%         tinitial = 0;
%         tfinal = flow.t(end) - flow.t(1);
%         gait(i).tspan = linspace(tinitial, tfinal, numNodes);
%         tspan = linspace(flow.t(1), flow.t(end), numNodes);
%         
%         gait(i).states.x = interp1(flow.t, flow.states.x', tspan)';
%         gait(i).states.dx = interp1(flow.t, flow.states.dx', tspan)';
%         gait(i).states.ddx = interp1(flow.t, flow.states.ddx', tspan)';
%         
%         gait(i).inputs.Control.u = interp1(flow.t, flow.inputs.Control.u', tspan)';
%         gait(i).inputs.ConstraintWrench.ffourBar = interp1(flow.t, flow.inputs.ConstraintWrench.ffourBar', tspan)';
%         
%         if isfield(flow.inputs.ConstraintWrench, 'Foot0')
%             gait(i).inputs.ConstraintWrench.fFoot0 = interp1(flow.t, flow.inputs.ConstraintWrench.fFoot0', tspan)';
%             gait(i).params.pFoot0 = zeros(3,1);
%         end
%         if isfield(flow.inputs.ConstraintWrench, 'fFoot1')
%             gait(i).inputs.ConstraintWrench.fFoot1 = interp1(flow.t, flow.inputs.ConstraintWrench.fFoot1', tspan)';
%             gait(i).params.pFoot1 = zeros(3,1);
%         end
%         if isfield(flow.inputs.ConstraintWrench, 'fFoot2')
%             gait(i).inputs.ConstraintWrench.fFoot2 = interp1(flow.t, flow.inputs.ConstraintWrench.fFoot2', tspan)';
%             gait(i).params.pFoot2 = zeros(3,1);
%         end
%         if isfield(flow.inputs.ConstraintWrench, 'fFoot3')
%             gait(i).inputs.ConstraintWrench.fFoot3 = interp1(flow.t, flow.inputs.ConstraintWrench.fFoot3', tspan)';
%             gait(i).params.pFoot3 = zeros(3,1);
%         end
%         gait(i).inputs.External = [];
%         gait(i).params.pfourBar = zeros(8,1);
%         gait(i).params.d = flow.states.x(1,end) - flow.states.x(1,1);
if mod(i,2)
        flow = logger(ceil(i/2)).flow;
        tinitial = 0;
        tfinal = flow.t(end) - flow.t(1);
        gait(i).tspan = linspace(tinitial, tfinal, numNodes);
        tspan = linspace(flow.t(1), flow.t(end), numNodes);
        
        gait(i).states.x = interp1(flow.t, flow.states.x', tspan)';
        gait(i).states.dx = interp1(flow.t, flow.states.dx', tspan)';
        gait(i).states.ddx = interp1(flow.t, flow.states.ddx', tspan)';
        
        gait(i).inputs.u = interp1(flow.t, flow.inputs.Control.u', tspan)';
        gait(i).inputs.ffourBar = interp1(flow.t, flow.inputs.ConstraintWrench.ffourBar', tspan)';
        
        if isfield(flow.inputs.ConstraintWrench, 'fFoot0')
            gait(i).inputs.fFoot0 = interp1(flow.t, flow.inputs.ConstraintWrench.fFoot0', tspan)';
            gait(i).params.pFoot0 = zeros(3,1);
        end
        if isfield(flow.inputs.ConstraintWrench, 'fFoot1')
            gait(i).inputs.fFoot1 = interp1(flow.t, flow.inputs.ConstraintWrench.fFoot1', tspan)';
            gait(i).params.pFoot1 = zeros(3,1);
        end
        if isfield(flow.inputs.ConstraintWrench, 'fFoot2')
            gait(i).inputs.fFoot2 = interp1(flow.t, flow.inputs.ConstraintWrench.fFoot2', tspan)';
            gait(i).params.pFoot2 = zeros(3,1);
        end
        if isfield(flow.inputs.ConstraintWrench, 'fFoot3')
            gait(i).inputs.fFoot3 = interp1(flow.t, flow.inputs.ConstraintWrench.fFoot3', tspan)';
            gait(i).params.pFoot3 = zeros(3,1);
        end
        gait(i).params.pfourBar = zeros(8,1);
        gait(i).params.d = flow.states.x(1,end) - flow.states.x(1,1);
        
    else
        gait(i).params = struct([]);
        gait(i).tspan = [];
        gait(i).states.x = flow.states.x(:,end);
        gait(i).states.dx = flow.states.dx(:,end);
        
        flow = logger(min(ceil(i/2)+1,4)).flow;
        gait(i).states.xn = flow.states.x(:,1);
        gait(i).states.dxn = flow.states.x(:,1);
        
        gait(i).inputs.ffourBar = flow.inputs.ConstraintWrench.ffourBar(:,1);
        
        if isfield(flow.inputs.ConstraintWrench, 'fFoot0')
            gait(i).inputs.fFoot0 = flow.inputs.ConstraintWrench.fFoot0(:,1);
        end
        if isfield(flow.inputs.ConstraintWrench, 'fFoot1')
            gait(i).inputs.fFoot1 = flow.inputs.ConstraintWrench.fFoot1(:,1);
        end
        if isfield(flow.inputs.ConstraintWrench, 'fFoot2')
            gait(i).inputs.fFoot2 = flow.inputs.ConstraintWrench.fFoot2(:,1);
        end
        if isfield(flow.inputs.ConstraintWrench, 'fFoot3')
            gait(i).inputs.fFoot3 = flow.inputs.ConstraintWrench.fFoot3(:,1);
        end
    end
    
end
% 
% gait.tspan = linspace(bounds.time.t0.x0,bounds.time.tf.x0,numNodes);
% gait.states.x = [0;0;1.5;0;0;0;pi/2;pi/2;1.0472;1.0472;pi/2;pi/2;1.0472;1.0472;pi/2;pi/2;1.0472;1.0472;pi/2;pi/2;1.0472;1.0472]*ones(1,numNodes);
% gait.states.x(3,:) = linspace(gait.states.x(3,1), 0.17, numNodes);
% gait.states.dx = zeros(nlp.Plant.numState, numNodes);
% gait.states.ddx = zeros(nlp.Plant.numState, numNodes);
% 
% gait.inputs.u = zeros(length(nlp.Plant.Inputs.Control.u),numNodes);
% gait.inputs.ffourBar = zeros(length(nlp.Plant.Inputs.ConstraintWrench.ffourBar),numNodes);
% gait.inputs.foot0Contact = zeros(length(nlp.Plant.Inputs.External.foot0Contact),numNodes);
% gait.inputs.foot1Contact = zeros(length(nlp.Plant.Inputs.External.foot1Contact),numNodes);
% gait.inputs.foot2Contact = zeros(length(nlp.Plant.Inputs.External.foot2Contact),numNodes);
% gait.inputs.foot3Contact = zeros(length(nlp.Plant.Inputs.External.foot3Contact),numNodes);

% gait.params.pfourBar = zeros(length(nlp.Plant.Params.pfourBar), 1);
end