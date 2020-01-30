close all; clc; clear;

% Call startup to add RMLscripts and default plotting options
startup;
set(0,'defaultfigureposition',[200 250 800 500])

% Determine the number of .csv files in the mocap folder
if ispc
    d = dir([pwd, '\mocap', '\*.csv']); 
else
    d = dir([pwd, '/mocap', '/*.csv']);
end
totTrial = length(d); % number of total trials
numTrial = totTrial/3; % number of trials for each morphology

% Loop through each trial
for trial = 1:totTrial
    
    % Grab the data
    mocapData = csvread(['mocap/', d(trial).name], 7, 0);
    
    % Define the behavior duration and title string based on the filename
    if contains(d(trial).name, 'Tail')
        if contains(d(trial).name, 'Inactive')
            T = 0.2439;
            titleString = 'With Inactive Tail Acceleration';
        else
            T = 0.191079;
            titleString = 'With Tail Acceleration';
        end
    else
        T = 0.218778;
        titleString = 'No Tail Acceleration';
    end
        
    % Grab relevant mocap data, combine to get distance metric
    tAll = mocapData(:, 2);
    xAll = mocapData(:, 7) - mocapData(1, 7);
    zAll = mocapData(:, 9) - mocapData(1, 9);
    dAll = sqrt(xAll.^2 + zAll.^2);
    dAll = dAll - dAll(1);
    
    % Diff to get velocity estimate, apply small filter to smooth data
    dxAll = diff(dAll)./diff(tAll);
    dxAll(end+1) = dxAll(end);
    smoothDxAll = smooth(dxAll, 3);
    
    % Identify the start of the behavior based off the velocity signal, end
    % of the behavior is duration T after that
    temp_idx = find(smoothDxAll>0.1, 1, 'first');
    idx_start = find(smoothDxAll(1:temp_idx)<0.005, 1, 'last');
    idx_end = find(tAll<(tAll(idx_start) + T), 1, 'last');
    
    % Truncate data to just behavior and interpolate to get accurate end of
    % behavior data
    indexVec = idx_start:idx_end;
    t = tAll(indexVec);
    t = t - t(1);
    t(end+1) = T;
    dx = smoothDxAll(indexVec);
    dx(end+1) = interp1(tAll,smoothDxAll, tAll(idx_start) + T);
    
    % Calculate the acceleration by the maximum velocity reached divided by
    % the duration
%     dxFinal = max(smoothDxAll);
%     accel(trial) = dxFinal/T; % Alternatively use max vel
    accel(trial) = dx(end)/T;
    
    % Log the final time, and time/velocity vectors. Stored as cells in
    % case they would be different lengths
    tfLog(trial) = t(end);
    tLog{trial} = t;
    dxLog{trial} = dx;
    
end

% Calculate final times and construct associated interpolated time vectors
noTailTf = tfLog(:,1:numTrial);
tailTf = tfLog(numTrial+1:2*numTrial);
tailInactiveTf = tfLog(2*numTrial+1:end);
N = 100;
noTailTVec = linspace(0,mean(noTailTf), N);
tailTVec = linspace(0,mean(tailTf), N);
tailInactiveTVec = linspace(0,mean(tailInactiveTf), N);

% For each trial, interpolate along constructed time vector
for trial = 1:numTrial
    noTailDxMatInterp(:,trial) = interp1(tLog{trial}, dxLog{trial}, noTailTVec, 'linear', max(dxLog{trial}));
    tailDxMatInterp(:,trial) = interp1(tLog{numTrial+trial}, dxLog{numTrial+trial}, tailTVec, 'linear', max(dxLog{numTrial+trial}));
    tailInactiveDxMatInterp(:,trial) = interp1(tLog{2*numTrial+trial}, dxLog{2*numTrial+trial}, tailInactiveTVec, 'linear', max(dxLog{2*numTrial+trial}));
end

% Grab the accelerations into vectors grouped by morphology
noTailAccel = accel(1:numTrial);
tailAccel = accel(numTrial+1:2*numTrial);
tailInactiveAccel = accel(2*numTrial+1:end);

% Calculate average acclerations
avgNoTailAccel = mean(noTailAccel)
avgTailAccel = mean(tailAccel)
avgTailInactiveAccel = mean(tailInactiveAccel)

% Calculate standard deviations
stdNoTailAccel = std(noTailAccel)
stdTailAccel = std(tailAccel)
stdTailInactiveAccel = std(tailInactiveAccel)

% Calculate percentage improvement
improvement = (avgTailAccel/avgNoTailAccel - 1)*100
improvementOverInactive = (avgTailAccel/avgTailInactiveAccel - 1)*100

% Run p-test
mu = avgNoTailAccel;     % Population mean
sigma = stdNoTailAccel;  % Population standard deviation
n = numTrial;    % Sample size
xbar = avgTailAccel;  % Sample mean
s = stdTailAccel;      % Sample standard deviation
t = (xbar - mu)/(s/sqrt(n));
p = 1-tcdf(t,n-1) % Probability of larger t-statistic

tmin = 0;tmax = 0.33; vmin = 0; vmax = 2;
tticks_a = linspace(tmin, tmax, 500);
vticks_a = linspace(vmin, vmax, 500);
[tticks, vticks] = meshgrid(tticks_a, vticks_a);
accelContourData = vticks./tticks;

accel_fig = figure(5);

% % Plot individual trials
% for trial = 1:numTrial
%     
%     plot(tLog{trial}, dxLog{trial}, 'color', cmuColor('dark-gray'), 'linewidth', 2)
%     xlabel('Time (s)')
%     ylabel('Forward Velocity (m/s)')
%     axis([tmin tmax vmin vmax])
%     hold on
%     
%     plot(tLog{trial+numTrial}, dxLog{trial+numTrial}, 'color', cmuColor('red-web'), 'linewidth', 2)
%     xlabel('Time (s)')
%     axis([tmin tmax vmin vmax])
%     [~,accelContours] = contour(tticks, vticks, accelContourData,4:1:7, 'k--', 'ShowText', 'on'); 
%     hold on
% end
% for trial = 1:numTrial
%     
%     plot(tLog{trial}(end), dxLog{trial}(end), 'o', 'MarkerFaceColor', cmuColor('dark-gray'), 'MarkerSize', 10,'MarkerEdgeColor','k'); hold on;
%     plot(tLog{trial+numTrial}(end), dxLog{trial+numTrial}(end), 'o', 'MarkerFaceColor', cmuColor('red-web'), 'MarkerSize', 10,'MarkerEdgeColor','k'); hold on;
%     
%     legend('No Tail', 'With Tail', 'Acceleration $(\frac{m}{s^2})$', 'Location', 'Northwest')
% end

% Grab average final velocities (just for plotting)
noTailAvgDxFinal = mean(noTailDxMatInterp(end,:));
tailAvgDxFinal = mean(tailDxMatInterp(end,:));
tailInactiveAvgDxFinal = mean(tailInactiveDxMatInterp(end,:));

% Plot collective average with std shading
[no_tail_avg_handle, no_tail_std_handle] = stdshade(noTailDxMatInterp', 0.5, cmuColor('dark-gray'), noTailTVec); hold on;
[inactive_tail_avg_handle, inactive_tail_std_handle] = stdshade(tailInactiveDxMatInterp', 0.5, cmuColor('blue'), tailInactiveTVec); hold on;
[tail_avg_handle, tail_std_handle] = stdshade(tailDxMatInterp', 0.5, cmuColor('red-web'), tailTVec);

xlabel('Time (s)')
ylabel('Forward Velocity (m/s)')
axis([tmin tmax vmin vmax])
[c,accelContours] = contour(tticks, vticks, accelContourData,4:1:7, 'k--', 'ShowText', 'on');
clabel(c,accelContours,'FontSize',15)
hold on

plot(noTailTVec(end), noTailAvgDxFinal, 'o', 'MarkerFaceColor', cmuColor('dark-gray'), 'MarkerSize', 10,'MarkerEdgeColor','k'); hold on;
plot(tailTVec(end), tailAvgDxFinal, 'o', 'MarkerFaceColor', cmuColor('red-web'), 'MarkerSize', 10,'MarkerEdgeColor','k'); hold on;
plot(tailInactiveTVec(end), tailInactiveAvgDxFinal, 'o', 'MarkerFaceColor', cmuColor('blue'), 'MarkerSize', 10,'MarkerEdgeColor','k'); hold on;
legend([no_tail_std_handle, tail_std_handle, inactive_tail_std_handle, accelContours],'No Tail', 'With Tail', 'With Inactive Tail','Acceleration $(\frac{m}{s^2})$', 'Location', 'Northwest')
cropWhiteSpace;

% % Plot against optimized trajectories
% no_tail_sim = load('../local/maxAccelerationMu05Vel13MinGRF08MaxV7.mat');
% no_tail_sim = mergeGait(no_tail_sim.gait);
% plot(no_tail_sim.tspan, no_tail_sim.states.dx(1,:), '--','color', cmuColor('dark-gray')); hold on;
% tail_sim = load('../local/maxAccelerationWithAeroTailMu05Vel13MinGRF08MaxV7.mat');
% tail_sim = mergeGait(tail_sim.gait);
% plot(tail_sim.tspan, tail_sim.states.dx(1,:), '--','color', cmuColor('red-web')); hold on;
% tail_inactive_sim = load('../local/maxAccelerationWithInactiveAeroTailMu05Vel13MinGRF08MaxV7.mat');
% tail_inactive_sim = mergeGait(tail_inactive_sim.gait);
% plot(tail_inactive_sim.tspan, tail_inactive_sim.states.dx(1,:), '--','color', cmuColor('blue')); hold on;

% Save the figures
cloud_path = 'C:\Users\Joe Desktop\Box\Robomechanics Lab Shared Files\Minitaur Opt\';
fig_path = [cloud_path,'Hardware Data Figures\'];
reply = input(['Save figure to Box? y/n: '],'s');
if strcmp(reply, 'y') && exist(cloud_path, 'dir')
    saveas(accel_fig, [fig_path,'AccelerationComparisonAero.png']);
    saveas(accel_fig, [fig_path,'AccelerationComparisonAeroEPS'], 'epsc');
    saveas(accel_fig, [fig_path,'AccelerationComparisonAeroPDF.pdf']);
    disp('Saved')
end

