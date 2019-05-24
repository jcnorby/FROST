function init_state(nlp, bounds)
% constraints for step length and step width
global bTail;
domain = nlp.Plant;

x = domain.States.x;
dx = domain.States.dx;

% if bTail
%     temp = load('local/stableBoundWithAeroTailInactiveMu03Vel125Mintime0125MinAng08.mat');
% else
%     temp = load('local/stableBoundMu03Vel125Mintime011MinAng08.mat');
% end

temp = load('local/stableBoundWithAeroTailInactiveMu03Vel125Mintime0125MinAng08.mat');

gait = temp.gait;
[x_traj,dx_traj, ~] = apexState(gait);

x_traj(1) = 0;
initPos = x - x_traj(1:domain.numState);
initVel = dx - dx_traj(1:domain.numState);


% initPos = [x('BasePosX')
%     x('BasePosZ') - 0.3
%     x('BaseRotY')];
%
% initVel = [dx('BasePosX') - 1.5
%     dx('BasePosZ');
%     dx('BaseRotY')];


%     initVel = [];

bound = 1e-3*ones(length([initPos; initVel]),1);
bound(7:length(initPos)) = 1e-2;
bound(7:end) = 1e-2;

initState = SymFunction('initState', [initPos; initVel], {x,dx});
addNodeConstraint(nlp, initState, {'x','dx'}, 'first',  ...
    -bound,bound,'Linear');

%     minInitialForwardVel = [dx('BasePosX')];
%     minInitialForwardVel_fun = SymFunction('minInitialForwardVel', minInitialForwardVel, {dx});
%     addNodeConstraint(nlp, minInitialForwardVel_fun, {'dx'}, 'first',  ...
%         2.5,15,'Linear');


end

