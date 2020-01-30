close all; clc; clear;
if (strcmp(pwd,'C:\Users\Joe\Documents\FROST\frost-dev\example\minitaur Tail Testing\process') || ...
        strcmp(pwd,'C:\Users\Joe Desktop\Documents\FROST\frost-dev\example\minitaur Tail Testing\process'))
    cd ..
end

matlabrc; startup;
frost_path  = '../../';

addpath(frost_path);
frost_addpath;
addpath(genpath('process'));

trialName = 'maxAccelerationWithAeroTailMu05Vel13MinGRF08MaxV7Nodes82';

%% sim vs data (or opt vs just tail data)

cloud_path = 'C:\Users\Joe Desktop\Box\Robomechanics Lab Shared Files\Minitaur Opt\';
% data_path = [cloud_path,'Hardware Data Logs\fullData_', trialName, '.csv'];     % Use data set corresponding to correct trajectory data
data_path = [cloud_path,'Hardware Data Logs\fullData.csv'];  % Use current dataset 
if exist(cloud_path, 'dir')
    mData = processMData_ethernet(data_path);
else
    error('JN - No cloud path detected, must specify path or change pointer to data location.')
end

% Truncate all data except during mode == 2, which corresponds to the
% acceleration, then save back into the mData struct
idx = find(mData.mode == 2);
temp = struct2cell(mData);
temp_fieldnames = fieldnames(mData);
for i = 1:length(temp)
    temp{i} = temp{i}(idx,:);
end
mData = cell2struct(temp, temp_fieldnames, 1);
mData.t = mData.t - mData.t(1);

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

fullgait = mergeGait(gait);

% fullgait.tspan = fullgait.tspan*tFactor;
tFinalData = mData.t(end);
tFinal = fullgait.tspan(end);

motorIndex = [7,8,11,12,15,16,19,20];
subplotIndex = [1,2,5,6,3,4,7,8];
frontMotors = [0 1 4 5];
refcolor = [0 0 0];
actcolor = cmuColor('red-web');

pos_fig = figure;
for motor = 0:length(motorIndex)-1
    subplot(2,4, subplotIndex(motor+1))
    axis([mData.t(1) mData.t(end) 0 2.5])
    
    act_data = plot(mData.t, mData.pos(:,motor+1),'Color', actcolor);
    hold on
    sim_data = plot(fullgait.tspan, fullgait.states.x(motorIndex(motor+1),:), 'Color', refcolor);
    title(['M', num2str(motor)]);
    if motor == 0 || motor == 2
        ylabel('Motor Pos (rad)')
    end
    if motor == 2 || motor == 3 || motor == 6 || motor == 7
        xlabel('Time (s)')
    end
    
    if motor == 7
        legend([sim_data;act_data], 'Simulation', 'Actual', 'FontSize', 12)
    end
end

pos_error_fig = figure;
for motor = 0:length(motorIndex)-1
    subplot(2,4, subplotIndex(motor+1))
        
    [unique_t, ia, ic] = unique(fullgait.tspan, 'last');
    unique_states = fullgait.states.x(motorIndex(motor+1),ia);
    sim__state_interp = interp1(unique_t, unique_states, mData.t);
    
    error_data = plot(mData.t, mData.pos(:,motor+1) - sim__state_interp,'Color', actcolor);
    axis([mData.t(1) mData.t(end) -0.2 0.2]);
    title(['M', num2str(motor)]);
    if motor == 0 || motor == 2
        ylabel('Motor Error (rad)')
    end
    if motor == 2 || motor == 3 || motor == 6 || motor == 7
        xlabel('Time (s)')
    end
end

% Plot rpy data
rpy_fig = figure;
subplot(1,2,1)
plot(mData.t, 180/pi*mData.imu_pos(:,1),'Color', actcolor);
hold on
plot(fullgait.tspan, 180/pi*fullgait.states.x(4,:), 'Color', refcolor)
title('Roll')
xlabel('Time (s)')
ylabel('Orientation (degrees)')
axis([0 mData.t(end) -20 20])

subplot(1,2,2)
act_data = plot(mData.t, 180/pi*mData.imu_pos(:,2),'Color', actcolor);
hold on
sim_data = plot(fullgait.tspan, 180/pi*fullgait.states.x(5,:), 'Color', refcolor);
title('Pitch')
xlabel('Time (s)')
axis([0 mData.t(end) -20 20])
legend([sim_data;act_data], 'Simulation', 'Actual', 'Location', 'Northeast')

% Plot tail position
if ~isempty(tailMotIndex)
    tail_fig = figure;
    act_data = plot(mData.t, mData.pos(:,9),'Color', actcolor);
    hold on
    sim_data = plot(fullgait.tspan, fullgait.states.x(tailMotIndex,:), 'Color', refcolor);
    legend([sim_data;act_data], 'Simulation', 'Actual', 'Location', 'Northeast')
    title('Tail Motor');
    ylabel('Motor Pos (rad)')
end

% Plot command components if feedforward component is available
cmd_comp_fig = figure;
if isfield(mData, 'ff')
    for motor = 0:length(motorIndex)-1
        subplot(2,4, subplotIndex(motor+1))
        
        
        ff_data = plot(mData.t, mData.ff(:,motor+1),'Color', cmuColor('red-web'), 'LineWidth', 1); hold on;
        p_term_data = plot(mData.t, mData.p_term(:,motor+1),'Color', cmuColor('blue'), 'LineWidth', 1); hold on;
        d_term_data = plot(mData.t, mData.d_term(:,motor+1),'Color', cmuColor('green'), 'LineWidth', 1);
        axis([mData.t(1) mData.t(end) -1 1]);
        
        if motor == 5
            legend([ff_data;p_term_data;d_term_data], 'Feedforward', 'P Term', 'D Term', 'FontSize', 10, 'Location', 'Southeast')
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
cmd_fig = figure;
if isfield(mData, 'ff')
    for motor = 0:length(motorIndex)-1
        subplot(2,4, subplotIndex(motor+1))
        
        cmd = plot(mData.t, mData.cmd(:,motor+1),'Color', cmuColor('red-web')); hold on;
        axis([mData.t(1) mData.t(end) -1 1]);
        
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
        
        ff_error = plot(mData.t, mData.cmd(:,motor+1) - mData.ff(:,motor+1),'Color', cmuColor('red-web')); hold on;
        axis([mData.t(1) mData.t(end) -1 1]);
        
        title(['M', num2str(motor)]);
        if motor == 0 || motor == 2
            ylabel('Feedback Control')
        end
        
        if motor == 2 || motor == 3 || motor == 6 || motor == 7
            xlabel('Time (s)')
        end
    end
end

% voltage_fig = figure;
% plot(mData.t, mData.voltage, 'Color', cmuColor('red-web'));
% xlabel('Time (s)')
% ylabel('Voltage (V)')

fig_path = [cloud_path,'Hardware Data Figures\'];
reply = input(['Save figures to Box as ',trialName,'? y/n: '],'s');
if strcmp(reply, 'y') && exist(cloud_path, 'dir')
    saveas(pos_fig, [fig_path,'MotorPos_',trialName, '.png']);
    saveas(rpy_fig, [fig_path,'RPY_',trialName, '.png']);
    if ~isempty(tailMotIndex)
        saveas(tail_fig, [fig_path,'TailPos_',trialName, '.png']);
    end
    saveas(cmd_comp_fig, [fig_path,'CmdComponents_',trialName, '.png']);
    saveas(cmd_diff_fig, [fig_path,'CmdDifference_',trialName, '.png']);
end

