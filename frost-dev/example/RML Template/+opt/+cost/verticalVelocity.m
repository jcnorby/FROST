function verticalVelocity(nlp)

if isa(nlp, 'TrajectoryOptimization')
    domain = nlp.Plant;
else
    domain = nlp.Phase(end).Plant;
end

dx = domain.States.dx;
vel = -dx('BasePosZ');
vel_fun = SymFunction('VertVelocity',vel,{dx});

if isa(nlp, 'TrajectoryOptimization')
    addNodeCost(nlp,vel_fun,{'dx'}, 'last');
else
    addNodeCost(nlp.Phase(end),vel_fun,{'dx'}, 'last');
end

nlp.update;
end
