% close all; clc; clear;
% set(0, 'DefaultAxesFontSize', 18);
% set(0,'DefaultAxesXGrid','on','DefaultAxesYGrid','on')
% set(0, 'DefaultLineMarkerSize', 10)

close all; clc; clear;
if strcmp(pwd,'C:\Users\Joe\Documents\frost-dev\example\minitaur Tail Testing\process')
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

tailMotIndex = [23];

%% sim vs data (or opt vs just tail data)


%% NLP vs data

temp = load('local/energyOptimalBoundWithTailBackOffsetInstantaneousSwitch300.mat');
nlpTail = temp.nlp;
gaitTail = temp.gait;

fullgaitTail = mergeGait(gaitTail, nlpTail);
tFinalTail = fullgaitTail.tspan(end);
fullgaitTail.tspan = fullgaitTail.tspan/tFinalTail;
nLoops = 1;
loopedgaitTail = fullgaitTail;

temp = load('local/energyOptimalBoundInstantaneousSwitch.mat');
nlpnoTail = temp.nlp;
gaitnoTail = temp.gait;

fullgaitnoTail = mergeGait(gaitnoTail, nlpnoTail);
tFinalnoTail = fullgaitnoTail.tspan(end);
fullgaitnoTail.tspan = fullgaitnoTail.tspan/tFinalnoTail;
nLoops = 1;
loopedgaitnoTail = fullgaitnoTail;

motorIndex = [7,8,11,12,15,16,19,20];
motorIndex = [1,2,3,4,5,6,7,8];
subplotIndex = [1,2,6,7,3,4,8,9];
frontMotors = [0 1 4 5];
refcolor = [0 0 0];
actcolor = [1 0 0];

f1 = figure(1)
for motor = 0:length(motorIndex)-1
    subplot(2,5, subplotIndex(motor+1))
    plot(loopedgaitnoTail.tspan, loopedgaitnoTail.inputs.u(motorIndex(motor+1),:), 'Color', refcolor)
    hold on
    plot(loopedgaitTail.tspan, loopedgaitTail.inputs.u(motorIndex(motor+1),:), 'Color', actcolor)
    title(['M', num2str(motor)]);
    if motor == 0 || motor == 2
        ylabel('Motor Pos (rad)')
    end
    axis([loopedgaitTail.tspan(1) loopedgaitTail.tspan(end) -1.5 1.5])
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
        if any(motor == frontMotors)
            highlight(gaitTail(1).tspan(1) + tFinalTail*j, gaitTail(1).tspan(end) + tFinalTail*j, [0 1 0], 0.25)
        else
            highlight(gaitTail(3).tspan(1) + tFinalTail*j, gaitTail(3).tspan(end) + tFinalTail*j, [0 1 0], 0.25)
        end
    end
end
legendflex(gca, {'Data','Reference'}, 'ref', f1, 'anchor', {'e','e'}, 'buffer', [-40 0])

figure(2)
subplot(1,2,1)
plot(loopedgaitnoTail.tspan, 180/pi*loopedgaitnoTail.states.x(4,:), 'Color', refcolor)
hold on
plot(loopedgaitTail.tspan, 180/pi*loopedgaitTail.states.x(4,:), 'Color', actcolor)
title('Roll')
ylabel('degrees')
for j = 0:nLoops-1
%     highlight(gait(3).tspan(1) + tFinal*j, gait(3).tspan(end) + tFinal*j, [0 1 0], 0.25)
%     highlight(gait(7).tspan(1) + tFinal*j, gait(7).tspan(end) + tFinal*j, [0 1 1], 0.25)
    highlight(gaitTail(1).tspan(1) + tFinalTail*j, gaitTail(1).tspan(end) + tFinalTail*j, [0 1 0], 0.25)
    highlight(gaitTail(3).tspan(1) + tFinalTail*j, gaitTail(3).tspan(end) + tFinalTail*j, [0 1 1], 0.25)
end

subplot(1,2,2)
plot(loopedgaitnoTail.tspan, 180/pi*loopedgaitnoTail.states.x(5,:), 'Color', refcolor)
hold on
plot(loopedgaitTail.tspan, 180/pi*loopedgaitTail.states.x(5,:), 'Color', actcolor)
title('Pitch')
legend('Data', 'Reference', 'location', 'northeast')
for j = 0:nLoops-1
%     highlight(gait(3).tspan(1) + tFinal*j, gait(3).tspan(end) + tFinal*j, [0 1 0], 0.25)
%     highlight(gait(7).tspan(1) + tFinal*j, gait(7).tspan(end) + tFinal*j, [0 1 1], 0.25)
    highlight(gaitTail(1).tspan(1) + tFinalTail*j, gaitTail(1).tspan(end) + tFinalTail*j, [0 1 0], 0.25)
    highlight(gaitTail(3).tspan(1) + tFinalTail*j, gaitTail(3).tspan(end) + tFinalTail*j, [0 1 1], 0.25)
end

% if ~isempty(tailMotIndex)
%     figure(3)
%     plot(gaitTail.tspan, gaitTail.states.x(tailMotIndex,:), 'Color', refcolor)
%     hold on
%     plot(gaitTail.tspan, gaitTail.states.x(tailMotIndex,:), 'Color', refcolor)
%     title('Tail Motor');
%     ylabel('Motor Pos (rad)')
%     for j = 0:nLoops-1
% %         highlight(gait(3).tspan(1) + tFinal*j, gait(3).tspan(end) + tFinal*j, [0 1 0], 0.25)
% %         highlight(gait(7).tspan(1) + tFinal*j, gait(7).tspan(end) + tFinal*j, [0 1 1], 0.25)
%         highlight(gaitTail(1).tspan(1) + tFinalTail*j, gaitTail(1).tspan(end) + tFinalTail*j, [0 1 0], 0.25)
%         highlight(gaitTail(3).tspan(1) + tFinalTail*j, gaitTail(3).tspan(end) + tFinalTail*j, [0 1 1], 0.25)
%     end
% end
% 
% figure(4)
% subplot(1,2,1)
% plot(mData.t, mData.voltage, 'b', mData.t, mData.current, 'r')
% hold on
% subplot(1,2,2)
% plot(mData.t, mData.power, 'k')
% legend('voltage', 'current', 'power', 'location', 'northeast')