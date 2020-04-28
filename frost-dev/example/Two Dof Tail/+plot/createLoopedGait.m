function loopedGait = createLoopedGait(gait)

nPhases = length(gait);
nLoops = 10;

loopedGait = gait;

for loopNum = 1:nLoops-1
    tempGait = gait;
    for i = 1:2:7
        tempGait(i).states.x(1,:) = gait(i).states.x(1,:) + loopedGait(end).states.x(1,end);
        tempGait(i).tspan = gait(i).tspan + loopedGait(end-1).tspan(end);
    end
    for i = 2:2:8
        tempGait(i).states.x(1,:) = gait(i).states.x(1,:) + loopedGait(end).states.x(1,end);
        tempGait(i).states.xn(1,:) = gait(i).states.xn(1,:) + loopedGait(end).states.x(1,end);
    end
    loopedGait(length(loopedGait)+1:length(loopedGait)+nPhases) = tempGait;
end

end