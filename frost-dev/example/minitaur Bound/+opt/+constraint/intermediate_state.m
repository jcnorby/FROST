function intermediate_state(nlp, bounds)
% constraints for step length and step width

domain = nlp.Plant;

x = domain.States.x;
dx = domain.States.dx;

temp = load('local/stableBoundWithAeroTailInactiveMu03Vel125Mintime0125MinAng08.mat');
gait = temp.gait;
[x_traj,dx_traj, index] = apexState(gait);

intPos = x - x_traj(1:domain.numState);
intVel = dx - dx_traj(1:domain.numState);

index = index - nlp.NumNode;
intermediateState = SymFunction('intermediateState', [intPos; intVel], {x,dx});
addNodeConstraint(nlp, intermediateState, {'x','dx'}, index,  ...
    -1e3,1e3,'Linear');

%     minInitialForwardVel = [dx('BasePosX')];
%     minInitialForwardVel_fun = SymFunction('minInitialForwardVel', minInitialForwardVel, {dx});
%     addNodeConstraint(nlp, minInitialForwardVel_fun, {'dx'}, 'first',  ...
%         2.5,15,'Linear');


end

