% close all; clc; clear;
% set(0, 'DefaultAxesFontSize', 18);
% set(0,'DefaultAxesXGrid','on','DefaultAxesYGrid','on')
% set(0, 'DefaultLineMarkerSize', 10)

close all; clc; clear;
if (strcmp(pwd,'C:\Users\Joe\Documents\FROST\frost-dev\example\minitaur Tail Testing\process') || ...
        strcmp(pwd,'C:\Users\Joe Desktop\Documents\FROST\frost-dev\example\minitaur Tail Testing\process'))
    cd ..
end

matlabrc;
frost_path  = '../../';

addpath(frost_path);
frost_addpath;
addpath(genpath('process'));

trialName = 'stableBoundMu03Vel125Mintime011MinAng08';

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


% dataPath = 'LOG00872.txt';
% dataPath = 'avgAcceleration2BrakeLegsMinVelMinGRFMu06.txt';
% mData = processMData(dataPath);

cloud_path = 'C:\Users\Joe Desktop\Box\Robomechanics Lab Shared Files\Minitaur Opt\';
data_path = [cloud_path,'Hardware Data Logs\fullData_', trialName, '.csv'];
if exist(cloud_path, 'dir')
    mData = processMData_ethernet(data_path);
else
    error('No cloud path detected, must specify path or change pointer to data location.')
end

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

if contains(trialName, 'Tail')
    tailMotIndex = [23];
else
    tailMotIndex = [];
end

gait_path = [cloud_path,'FROST Gaits\', trialName, '.mat'];
if exist(cloud_path, 'dir')
    temp = load(gait_path);
else
    error('No cloud path detected, must specify path or change pointer to gait location.')
end


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
actcolor = cmuColor('red-web');

pos_fig = figure;
for motor = 0:length(motorIndex)-1
    subplot(2,4, subplotIndex(motor+1))
    axis([mData.t(1) mData.t(end) 0 2.5])
    % 2 phase bound
    for j = 0:nLoops-1
        if any(motor == frontMotors)
            highlight(gait(1).tspan(1) + tFinal*j, gait(1).tspan(end) + tFinal*j, cmuColor('gray'), 1)
        else
            highlight(gait(3).tspan(1) + tFinal*j, gait(3).tspan(end) + tFinal*j, cmuColor('gray'), 1)
        end
    end
    hold on;
    
    plot(mData.t, mData.pos(:,motor+1),'Color', actcolor);
    hold on
    plot(loopedgait.tspan, loopedgait.states.x(motorIndex(motor+1),:), 'Color', refcolor)
    title(['M', num2str(motor)]);
    if motor == 0 || motor == 2
        ylabel('Motor Pos (rad)')
    end
    if motor == 2 || motor == 3 || motor == 6 || motor == 7
        xlabel('Time (s)')
    end
    
%     % 4 phase bound
%     for j = 0:nLoops-1
%         if any(motor == frontMotors)
%             highlight(gait(3).tspan(1) + tFinal*j, gait(3).tspan(end) + tFinal*j, [0 1 0], 0.25)
%         else
%             highlight(gait(7).tspan(1) + tFinal*j, gait(7).tspan(end) + tFinal*j, [0 1 0], 0.25)
%         end
%     end
end
% legendflex(gca, {'Data','Reference'}, 'ref', f1, 'anchor', {'e','e'}, 'buffer', [-40 0])

% Plot rpy data
rpy_fig = figure;
subplot(1,2,1)
plot(mData.t, 180/pi*mData.imu_pos(:,1),'Color', actcolor);
hold on
plot(loopedgait.tspan, 180/pi*loopedgait.states.x(4,:), 'Color', refcolor)
title('Roll')
xlabel('Time (s)')
ylabel('Orientation (degrees)')
axis([0 mData.t(end) -20 20])

subplot(1,2,2)
plot(mData.t, 180/pi*mData.imu_pos(:,2),'Color', actcolor);
hold on
plot(loopedgait.tspan, 180/pi*loopedgait.states.x(5,:), 'Color', refcolor)
title('Pitch')
xlabel('Time (s)')
axis([0 mData.t(end) -20 20])


% Plot tail position
if ~isempty(tailMotIndex)
    tail_fig = figure;
    plot(mData.t, mData.pos(:,9),'Color', actcolor);
    hold on
    plot(loopedgait.tspan, loopedgait.states.x(tailMotIndex,:), 'Color', refcolor)
    title('Tail Motor');
    ylabel('Motor Pos (rad)')
end

% Plot command components if feedforward component is available
cmd_comp_fig = figure;
if isfield(mData, 'ff')
    for motor = 0:length(motorIndex)-1
        subplot(2,4, subplotIndex(motor+1))
%         axis([mData.t(1) mData.t(end) -1 1])
        axis([(nLoops-2)*tFinal (nLoops-1)*tFinal -1 1])
        
        % 2 phase bound
        for j = 0:nLoops-1
            if any(motor == frontMotors)
                highlight(gait(1).tspan(1) + tFinal*j, gait(1).tspan(end) + tFinal*j, cmuColor('gray'), 1)
            else
                highlight(gait(3).tspan(1) + tFinal*j, gait(3).tspan(end) + tFinal*j, cmuColor('gray'), 1)
            end
        end
        hold on;
        
%         plot(mData.t, mData.cmd(:,motor+1),'Color', cmuColor('dark-gray'), 'LineWidth', 1); hold on;
        ff_data = plot(mData.t, mData.ff(:,motor+1),'Color', cmuColor('red-web'), 'LineWidth', 1); hold on;
        p_term_data = plot(mData.t, mData.p_term(:,motor+1),'Color', cmuColor('blue'), 'LineWidth', 1); hold on;
        d_term_data = plot(mData.t, mData.d_term(:,motor+1),'Color', cmuColor('green'), 'LineWidth', 1);
        
        if motor == 5
            legend([ff_data;p_term_data;d_term_data], 'Feedforward', 'P Term', 'D Term', 'FontSize', 12)
        end
        
        title(['M', num2str(motor)]);
        if motor == 0 || motor == 2
            ylabel('Duty Factor')
        end
        
        if motor == 2 || motor == 3 || motor == 6 || motor == 7
            xlabel('Time (s)')
        end
    end
end

% Plot correctional inputs
cmd_diff_fig = figure;
if isfield(mData, 'ff')
    for motor = 0:length(motorIndex)-1
        subplot(2,4, subplotIndex(motor+1))
%         axis([mData.t(1) mData.t(end) -1 1])
        axis([(nLoops-2)*tFinal (nLoops-1)*tFinal -1 1])
        
        % 2 phase bound
        for j = 0:nLoops-1
            if any(motor == frontMotors)
                highlight(gait(1).tspan(1) + tFinal*j, gait(1).tspan(end) + tFinal*j, cmuColor('gray'), 1)
            else
                highlight(gait(3).tspan(1) + tFinal*j, gait(3).tspan(end) + tFinal*j, cmuColor('gray'), 1)
            end
        end
        hold on;
        
        ff_error = plot(mData.t, mData.cmd(:,motor+1) - mData.ff(:,motor+1),'Color', cmuColor('red-web'), 'LineWidth', 1); hold on;
        
        title(['M', num2str(motor)]);
        if motor == 0 || motor == 2
            ylabel('Feedback Control')
        end
        
        if motor == 2 || motor == 3 || motor == 6 || motor == 7
            xlabel('Time (s)')
        end
    end
end

% % Plot energetics data, if available
% figure(4)
% subplot(1,2,1)
% plot(mData.t, mData.voltage, 'b', mData.t, mData.current, 'r')
% legend('voltage', 'current', 'location', 'northeast')
% hold on
% subplot(1,2,2)
% plot(mData.t, mData.power_int, 'k',mData.t, mData.logging,  'k:')
% legend('power_int', 'location', 'northeast')

fig_path = [cloud_path,'Hardware Data Figures\'];
reply = input(['Save figures to Box? y/n: '],'s');
if strcmp(reply, 'y') && exist(cloud_path, 'dir')
    saveas(pos_fig, [fig_path,'MotorPos_',trialName, '.png']);
    saveas(rpy_fig, [fig_path,'RPY_',trialName, '.png']);
    if ~isempty(tailMotIndex)
        saveas(tail_fig, [fig_path,'TailPos_',trialName, '.png']);
    end
    saveas(cmd_comp_fig, [fig_path,'CmdComponents_',trialName, '.png']);
    saveas(cmd_diff_fig, [fig_path,'CmdDifference_',trialName, '.png']);
end