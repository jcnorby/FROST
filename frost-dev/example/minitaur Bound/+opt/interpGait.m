function new_gait = interpGait(gait, numNodes)



for i = 1:length(gait)
    
    if numNodes >1
%         gait = logger(ceil(i/2)).gait;
        tinitial = 0;
        tfinal = gait.tspan(end) - gait.tspan(1);
        new_gait(i).tspan = linspace(tinitial, tfinal, numNodes);
        tspan = linspace(gait.tspan(1), gait.tspan(end), numNodes);
        
        new_gait(i).states.x = interp1(gait.tspan, gait.states.x', tspan)';
        new_gait(i).states.dx = interp1(gait.tspan, gait.states.dx', tspan)';
        new_gait(i).states.ddx = interp1(gait.tspan, gait.states.ddx', tspan)';
        
        new_gait(i).inputs.u = interp1(gait.tspan, gait.inputs.Control.u', tspan)';
        new_gait(i).inputs.ffourBar = interp1(gait.tspan, gait.inputs.ConstraintWrench.ffourBar', tspan)';
        
        if isfield(gait.inputs.ConstraintWrench, 'fFoot0')
            new_gait(i).inputs.fFoot0 = interp1(gait.tspan, gait.inputs.ConstraintWrench.fFoot0', tspan)';
            new_gait(i).params.pFoot0 = zeros(3,1);
        end
        if isfield(gait.inputs.ConstraintWrench, 'fFoot1')
            new_gait(i).inputs.fFoot1 = interp1(gait.tspan, gait.inputs.ConstraintWrench.fFoot1', tspan)';
            new_gait(i).params.pFoot1 = zeros(3,1);
        end
        if isfield(gait.inputs.ConstraintWrench, 'fFoot2')
            new_gait(i).inputs.fFoot2 = interp1(gait.tspan, gait.inputs.ConstraintWrench.fFoot2', tspan)';
            new_gait(i).params.pFoot2 = zeros(3,1);
        end
        if isfield(gait.inputs.ConstraintWrench, 'fFoot3')
            new_gait(i).inputs.fFoot3 = interp1(gait.tspan, gait.inputs.ConstraintWrench.fFoot3', tspan)';
            new_gait(i).params.pFoot3 = zeros(3,1);
        end
        
    else
        new_gait(i) = gait(i);
    end
    new_gait(i).params = gait(i).params;
end
end