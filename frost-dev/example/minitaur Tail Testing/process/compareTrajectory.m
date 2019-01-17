% close all; clc; clear;
% set(0, 'DefaultAxesFontSize', 18);
% set(0,'DefaultAxesXGrid','on','DefaultAxesYGrid','on')
% set(0, 'DefaultLineMarkerSize', 10)

close all; clc; clear;
if strcmp(pwd,'C:\Users\Joe\Documents\FROST\frost-dev\example\minitaur Tail Testing\process')
    cd ..
end
set(0, 'DefaultAxesFontSize', 24);
set(0, 'DefaultLineMarkerSize', 10);
set(0,'defaultfigurecolor',[1 1 1]);
set(0,'DefaultAxesXGrid','off','DefaultAxesYGrid','off')
set(groot,'defaulttextinterpreter','latex');
set(groot, 'defaultAxesTickLabelInterpreter','latex');
set(groot, 'defaultLegendInterpreter','latex');

restoredefaultpath; matlabrc;
frost_path  = '../../';

addpath(frost_path);
frost_addpath;
addpath(genpath('process'));
addpath C:\Users\Joe\Documents\MATLAB\Add-Ons\Functions\'Joe Functions'\

%% sim vs data (or opt vs just tail data)

% temp = load('process/tailTest.mat');
% gait = temp.gait;

% temp = load('local/energyOptimalBoundWithTailBackOffsetRAccurateReflectedNew.mat');
% nlp = temp.nlp;
% sol = temp.sol;
% gait = temp.gait;
%
% R = 45.39;
% Rineff = 0.8;
% kt = 0.0954;
% Ra = 0.22;
% V = 15;
% % gait = mergeGait(gait, nlp);
% gait.df = 1/(0.95*V)*(gait.inputs.u*Ra/(kt*R*Rineff) + kt*R*gait.states.dx(tailMotIndex, :)');


dataPath = 'decentNoTailRun3m.txt';
mData = processMData(dataPath);
%
% tFinalData = mData.t(end);
%
% tFinal = gait.tspan(end);
% nLoops = ceil(tFinalData/tFinal);
% loopedgait = gait;
% for i = 1:nLoops-1
%     loopedgait.tspan = [loopedgait.tspan, gait.tspan + loopedgait.tspan(end)];
%     loopedgait.states.x = [loopedgait.states.x, gait.states.x];
%     loopedgait.states.dx = [loopedgait.states.dx, gait.states.dx];
%     loopedgait.states.ddx = [loopedgait.states.ddx, gait.states.ddx];
%     loopedgait.df = [loopedgait.df; gait.df];
% end
%
% plot(loopedgait.tspan, loopedgait.states.x(tailMotIndex,:));
% hold on
% % plot(mData.t, mData.params(:,2));
% plot(mData.t, mData.pos(:,1));
% hold on
% plot(mData.t, mData.params(:, 3:6))
% hold on
% plot(loopedgait.tspan, loopedgait.df)
% legend('traj', 'tail pos', 'uPos', 'uVel', 'df', 'open loop', 'df ref')
%
%
% return;

%% NLP vs data

tailMotIndex = [];
% temp = load('local/energyOptimalBoundWithTailBackOffsetInstantaneousSwitch250Lighter.mat');
temp = load('local/energyOptimalBoundInstantaneousSwitchGSMClearance.mat');
nlp = temp.nlp;
sol = temp.sol;
gait = temp.gait;

fullgait = mergeGait(gait, nlp);
% fullgait.tspan = fullgait.tspan*tFactor;
tFinalData = mData.t(end);
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

f1 = figure(1)
for motor = 0:length(motorIndex)-1
    subplot(2,4, subplotIndex(motor+1))
    plot(mData.t, mData.pos(:,motor+1),'Color', actcolor);
    hold on
    plot(loopedgait.tspan, loopedgait.states.x(motorIndex(motor+1),:), 'Color', refcolor)
    title(['M', num2str(motor)]);
    if motor == 0 || motor == 2
        ylabel('Motor Pos (rad)')
    end
    axis([mData.t(1) mData.t(end) 0 3])
    if motor == 2 || motor == 3 || motor == 6 || motor == 7
        xlabel('Time (s)')
    end
    
%     for j = 0:nLoops-1
%         if any(motor == frontMotors)
%             highlight(gait(3).tspan(1) + tFinal*j, gait(3).tspan(end) + tFinal*j, [0 1 0], 0.25)
%         else
%             highlight(gait(7).tspan(1) + tFinal*j, gait(7).tspan(end) + tFinal*j, [0 1 0], 0.25)
%         end
%     end
    for j = 0:nLoops-1
        if any(motor ~= frontMotors)
            highlight(gait(1).tspan(1) + tFinal*j, gait(1).tspan(end) + tFinal*j, [0 1 0], 0.25)
        else
            highlight(gait(3).tspan(1) + tFinal*j, gait(3).tspan(end) + tFinal*j, [0 1 0], 0.25)
        end
    end
end
% legendflex(gca, {'Data','Reference'}, 'ref', f1, 'anchor', {'e','e'}, 'buffer', [-40 0])

figure(2)
subplot(1,2,1)
plot(mData.t, 180/pi*mData.eul(:,1),'Color', actcolor);
hold on
plot(loopedgait.tspan, 180/pi*loopedgait.states.x(4,:), 'Color', refcolor)
title('Roll')
ylabel('degrees')
for j = 0:nLoops-1
%     highlight(gait(3).tspan(1) + tFinal*j, gait(3).tspan(end) + tFinal*j, [0 1 0], 0.25)
%     highlight(gait(7).tspan(1) + tFinal*j, gait(7).tspan(end) + tFinal*j, [0 1 1], 0.25)
    highlight(gait(1).tspan(1) + tFinal*j, gait(1).tspan(end) + tFinal*j, [0 1 0], 0.25)
    highlight(gait(3).tspan(1) + tFinal*j, gait(3).tspan(end) + tFinal*j, [0 1 1], 0.25)
end

subplot(1,2,2)
plot(mData.t, 180/pi*mData.eul(:,2),'Color', actcolor);
hold on
plot(loopedgait.tspan, 180/pi*loopedgait.states.x(5,:), 'Color', refcolor)
title('Pitch')
% legend('Data', 'Reference', 'location', 'northeast')
for j = 0:nLoops-1
%     highlight(gait(3).tspan(1) + tFinal*j, gait(3).tspan(end) + tFinal*j, [0 1 0], 0.25)
%     highlight(gait(7).tspan(1) + tFinal*j, gait(7).tspan(end) + tFinal*j, [0 1 1], 0.25)
    highlight(gait(1).tspan(1) + tFinal*j, gait(1).tspan(end) + tFinal*j, [0 1 0], 0.25)
    highlight(gait(3).tspan(1) + tFinal*j, gait(3).tspan(end) + tFinal*j, [0 1 1], 0.25)
end

if ~isempty(tailMotIndex)
    figure(3)
    plot(mData.t, mData.pos(:,9),'Color', actcolor);
    hold on
    plot(loopedgait.tspan, loopedgait.states.x(tailMotIndex,:), 'Color', refcolor)
    title('Tail Motor');
    ylabel('Motor Pos (rad)')
    for j = 0:nLoops-1
%         highlight(gait(3).tspan(1) + tFinal*j, gait(3).tspan(end) + tFinal*j, [0 1 0], 0.25)
%         highlight(gait(7).tspan(1) + tFinal*j, gait(7).tspan(end) + tFinal*j, [0 1 1], 0.25)
        highlight(gait(1).tspan(1) + tFinal*j, gait(1).tspan(end) + tFinal*j, [0 1 0], 0.25)
        highlight(gait(3).tspan(1) + tFinal*j, gait(3).tspan(end) + tFinal*j, [0 1 1], 0.25)
    end
end

figure(4)
subplot(1,2,1)
plot(mData.t, mData.voltage, 'b', mData.t, mData.current, 'r')
legend('voltage', 'current', 'location', 'northeast')
hold on
subplot(1,2,2)
plot(mData.t, mData.power_int, 'k',mData.t, mData.logging,  'k:')
legend('power_int', 'location', 'northeast')