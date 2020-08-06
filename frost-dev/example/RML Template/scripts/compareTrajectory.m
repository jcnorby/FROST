% JN 2020 - jnorby@andrew.cmu.edu
close all; clc; clear;

restoredefaultpath; matlabrc;
frost_path  = '../../';
addpath(frost_path);
frost_addpath;
addpath(genpath('process'));

temp = load('local/energyOptimalBoundAccurateNew.mat');
minitaurData = open_log('LOG00405.txt');
tFinalData = 0.001*(minitaurData.t(end) - minitaurData.t(1));


nlp = temp.nlp;
sol = temp.sol;
gait = temp.gait;
tFactor = 0.001*(floor(1000*gait(end-1).tspan(end)))/(gait(end-1).tspan(end));

fullgait = mergeGait(gait, nlp);
% fullgait.tspan = fullgait.tspan*tFactor;
tFinal = fullgait.tspan(end);
nLoops = ceil(tFinalData/tFinal);
loopedgait = fullgait;
for i = 1:nLoops-1
    loopedgait.tspan = [loopedgait.tspan, fullgait.tspan + loopedgait.tspan(end)];
    loopedgait.states.x = [loopedgait.states.x, fullgait.states.x];
end



motorIndex = [7,8,11,12,15,16,19,20];
subplotIndex = [1,2,5,6,3,4,7,8];
frontMotors = [0 1 4 5];
refcolor = [0 0 0];
actcolor = [1 0 0];

figure(1)
for motor = 0:length(motorIndex)-1
    subplot(2,4, subplotIndex(motor+1))
    plot((minitaurData.t - minitaurData.t(1))/1000, minitaurData.pos(:,motor+1),'Color', actcolor);
    hold on
    plot(loopedgait.tspan, loopedgait.states.x(motorIndex(motor+1),:), 'Color', refcolor)
    title(['M', num2str(motor)]);
    if motor == 0 || motor == 2
        ylabel('Motor Pos (rad)')
    end
    
    for j = 0:nLoops-1
        if any(motor == frontMotors)
            highlight(gait(3).tspan(1) + tFinal*j, gait(3).tspan(end) + tFinal*j, [0 1 0], 0.25)
        else
            highlight(gait(7).tspan(1) + tFinal*j, gait(7).tspan(end) + tFinal*j, [0 1 0], 0.25)
        end
    end
end
legend('Data', 'Reference', 'location', 'northeast')

figure(2)
subplot(1,2,1)
plot((minitaurData.t - minitaurData.t(1))/1000, 180/pi*minitaurData.eul(:,1),'Color', actcolor);
hold on
plot(loopedgait.tspan, 180/pi*loopedgait.states.x(4,:), 'Color', refcolor)
title('Roll')
ylabel('degrees')
for j = 0:nLoops-1
        highlight(gait(3).tspan(1) + tFinal*j, gait(3).tspan(end) + tFinal*j, [0 1 0], 0.25)
        highlight(gait(7).tspan(1) + tFinal*j, gait(7).tspan(end) + tFinal*j, [0 1 1], 0.25)
end

subplot(1,2,2)
plot((minitaurData.t - minitaurData.t(1))/1000, 180/pi*minitaurData.eul(:,2),'Color', actcolor);
hold on
plot(loopedgait.tspan, 180/pi*loopedgait.states.x(5,:), 'Color', refcolor)
title('Pitch')
legend('Data', 'Reference', 'location', 'northeast')
for j = 0:nLoops-1
        highlight(gait(3).tspan(1) + tFinal*j, gait(3).tspan(end) + tFinal*j, [0 1 0], 0.25)
        highlight(gait(7).tspan(1) + tFinal*j, gait(7).tspan(end) + tFinal*j, [0 1 1], 0.25)
end
