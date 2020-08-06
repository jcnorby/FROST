function feetpos = feetTrajectory(gait)

if numel(gait) > 1
    fullgait = mergeGait(gait);
else
    fullgait = gait;
end

for i = 1:length(fullgait.states.x)
    pos = computeFeetPos(fullgait.states.x(1:22,i));
    feetpos.foot0(i,:) = pos(1,:);
    feetpos.foot1(i,:) = pos(2,:);
    feetpos.foot2(i,:) = pos(3,:);
    feetpos.foot3(i,:) = pos(4,:);
end
