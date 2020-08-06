function [x,dx, i] = apexState(gait)

if numel(gait) > 1
    fullgait = mergeGait(gait);
else
    fullgait = gait;
end

% Select foot apex state
feetpos = feetTrajectory(gait);
[~,i] = max(feetpos.foot0(:,3));

% % Select body apex state
% zpos = fullgait.states.x(3,:)'
% [y,i] = max(zpos);

x = fullgait.states.x(:,i);
dx = fullgait.states.dx(:,i);