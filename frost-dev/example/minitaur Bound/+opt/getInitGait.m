function gait = getInitGait(logger, N)

numNodes = N;
gait = struct;

flow = logger.flow;
tinitial = 0;
tfinal = flow.t(end) - flow.t(1);
gait.tspan = linspace(tinitial, tfinal, numNodes);
tspan = linspace(flow.t(1), flow.t(end), numNodes);

gait.states.x = interp1(flow.t, flow.states.x', tspan)';
gait.states.dx = interp1(flow.t, flow.states.dx', tspan)';
gait.states.ddx = interp1(flow.t, flow.states.ddx', tspan)';

gait.inputs.u = interp1(flow.t, flow.inputs.Control.u', tspan)';
gait.inputs.ffourBar = interp1(flow.t, flow.inputs.ConstraintWrench.ffourBar', tspan)';

if isfield(flow.inputs.ConstraintWrench, 'fFoot0')
    gait.inputs.fFoot0 = interp1(flow.t, flow.inputs.ConstraintWrench.fFoot0', tspan)';
    gait.params.pFoot0 = zeros(3,1);
end
if isfield(flow.inputs.ConstraintWrench, 'fFoot1')
    gait.inputs.fFoot1 = interp1(flow.t, flow.inputs.ConstraintWrench.fFoot1', tspan)';
    gait.params.pFoot1 = zeros(3,1);
end
if isfield(flow.inputs.ConstraintWrench, 'fFoot2')
    gait.inputs.fFoot2 = interp1(flow.t, flow.inputs.ConstraintWrench.fFoot2', tspan)';
    gait.params.pFoot2 = zeros(3,1);
end
if isfield(flow.inputs.ConstraintWrench, 'fFoot3')
    gait.inputs.fFoot3 = interp1(flow.t, flow.inputs.ConstraintWrench.fFoot3', tspan)';
    gait.params.pFoot3 = zeros(3,1);
end


end