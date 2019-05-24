function new_gait = interpGait(gait, numNodes)



for i = 1:length(gait)
    
    if (~isempty(gait(i).tspan))
%         gait = logger(ceil(i/2)).gait;
        tinitial = 0;
        tfinal = gait(i).tspan(end) - gait(i).tspan(1);
%         new_gait(i).tspan = linspace(tinitial, tfinal, 2*numNodes+1);
        tspan = linspace(gait(i).tspan(1), gait(i).tspan(end), numNodes);
        new_gait(i).tspan = tspan;
        
        new_gait(i).states.x = interp1(gait(i).tspan, gait(i).states.x', tspan)';
        new_gait(i).states.dx = interp1(gait(i).tspan, gait(i).states.dx', tspan)';
        new_gait(i).states.ddx = interp1(gait(i).tspan, gait(i).states.ddx', tspan)';
        
        new_gait(i).inputs.u = interp1(gait(i).tspan, gait(i).inputs.u', tspan)';
        new_gait(i).inputs.ffourBar = interp1(gait(i).tspan, gait(i).inputs.ffourBar', tspan)';
        
        if isfield(gait(i).inputs, 'fFoot0')
            new_gait(i).inputs.fFoot0 = interp1(gait(i).tspan, gait(i).inputs.fFoot0', tspan)';
            new_gait(i).params.pFoot0 = zeros(3,1);
        end
        if isfield(gait(i).inputs, 'fFoot1')
            new_gait(i).inputs.fFoot1 = interp1(gait(i).tspan, gait(i).inputs.fFoot1', tspan)';
            new_gait(i).params.pFoot1 = zeros(3,1);
        end
        if isfield(gait(i).inputs, 'fFoot2')
            new_gait(i).inputs.fFoot2 = interp1(gait(i).tspan, gait(i).inputs.fFoot2', tspan)';
            new_gait(i).params.pFoot2 = zeros(3,1);
        end
        if isfield(gait(i).inputs, 'fFoot3')
            new_gait(i).inputs.fFoot3 = interp1(gait(i).tspan, gait(i).inputs.fFoot3', tspan)';
            new_gait(i).params.pFoot3 = zeros(3,1);
        end
        
    else
        new_gait(i) = gait(i);
    end
    new_gait(i).params = gait(i).params;
end
end