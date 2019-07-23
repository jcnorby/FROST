close all; clc; clear;
startup;
if ispc
    if strcmp(pwd,'C:\Users\Joe\Documents\FROST\frost-dev\example\minitaur Tail Testing\process') || strcmp(pwd,'C:\Users\Joe Desktop\Documents\FROST\frost-dev\example\minitaur Tail Testing\process')
        cd ..\
    end
else
    if strcmp(pwd,'/home/joe/Documents/FROST/frost-dev/example/minitaur Tail Testing/process')
        cd ../
    end
end
set(groot,'defaultfigureposition',[200 250 800 500])

if ispc
    d = dir([pwd, '\process\mocap', '\*.csv']); % Determine the number of .csv files in the mocap folder
else
    d = dir([pwd, '/process/mocap', '/*.csv']);
end
totTrial = length(d); % number of total trials
numTrial = totTrial/2; % number of trials for each morphology

dxMat = zeros(33,totTrial);
for trial = 1:totTrial
    %     if bTail
    %         mocapData = csvread('mocap/WithTailAccel2_001.csv', 7, 0);
    %         indexVec = (65:95)';
    %         titleString = 'With Tail Acceleration = ';
    %     else
    %         mocapData = csvread('mocap/NoTailAccel_001.csv', 7, 0);
    %         indexVec = (74:106)';
    %         titleString = 'No Tail Acceleration = ';
    %     end
    
    if ispc
        mocapData = csvread(['process\mocap\', d(trial).name], 7, 0);
    else
        mocapData = csvread(['process/mocap/', d(trial).name], 7, 0);
    end
    
    switch trial
        case 1
            indexVec = (756:786)';
            titleString = 'No Tail Acceleration = ';
        case 2
            indexVec = (207:237)';
            titleString = 'No Tail Acceleration = ';
        case 3
            indexVec = (135:166)';
            titleString = 'No Tail Acceleration = ';
        case 4
            indexVec = (135:166)';
            titleString = 'No Tail Acceleration = ';
        case 5
            indexVec = (133:163)';
            titleString = 'No Tail Acceleration = ';
        case 6
            indexVec = (153:183)';
            titleString = 'No Tail Acceleration = ';
        case 7
            indexVec = (698:724)';
            titleString = 'With Tail Acceleration = ';
        case 8
            indexVec = (195:221)';
            titleString = 'With Tail Acceleration = ';
        case 9
            indexVec = (144:170)';
            titleString = 'With Tail Acceleration = ';
        case 10
            indexVec = (171:198)';
            titleString = 'With Tail Acceleration = ';
        case 11
            indexVec = (227:253)';
            titleString = 'With Tail Acceleration = ';
        case 12
            indexVec = (169:195)';
            titleString = 'With Tail Acceleration = ';
    end
    
    tAll = mocapData(:, 2);
    t = tAll(indexVec);
    t = t - t(1);
    
    xAll = mocapData(:, 8);
    xAll = xAll - xAll(1);
    tticks = xAll(indexVec);
    tticks = tticks - tticks(1);
    
    dxAll = diff(xAll)./diff(tAll);
    smoothDxAll = smooth(dxAll);
    dx = smoothDxAll(indexVec);
    
    dxFinal = dx(end);
    tFinal = t(end);
    accel(trial) = dxFinal/tFinal;
    
    tLog{trial} = t;
    dxLog{trial} = dx;
    
    % Grab velocities for each trial
    for i = 1:length(t)
        tMat(trial) = t(end);
        dxMat(i,trial) = dx(i);
    end
    
    % Pad the end of the velocity vectors with the final velocity
    if length(t) < length(dxMat)
        dxMat(length(t):end,trial) = dx(end);
    end
    
end

% Calculate final times and construct associated time vectors
noTailTf = tMat(:,1:numTrial);
tailTf = tMat(numTrial+1:end);
N = 50;
noTailTVec = linspace(0,mean(noTailTf), N);
tailTVec = linspace(0,mean(tailTf), N);

% For each trial, interpolate along constructed time vector
for trial = 1:numTrial
    noTailDxMatInterp(:,trial) = interp1(tLog{trial}, dxLog{trial}, noTailTVec, 'linear', max(dxLog{trial}));
    tailDxMatInterp(:,trial) = interp1(tLog{numTrial+trial}, dxLog{numTrial+trial}, tailTVec, 'linear', max(dxLog{numTrial+trial}));
end

% Grab average final velocities
noTailAvgDxFinal = mean(noTailDxMatInterp(end,:));
tailAvgDxFinal = mean(tailDxMatInterp(end,:));

noTailAccel = accel(1:numTrial);
tailAccel = accel(numTrial+1:end);

avgNoTailAccel = mean(noTailAccel)
avgTailAccel = mean(tailAccel)

stdNoTailAccel = std(noTailAccel)
stdTailAccel = std(tailAccel)

improvement = (avgTailAccel/avgNoTailAccel - 1)*100


mu = avgNoTailAccel;     % Population mean
sigma = stdNoTailAccel;  % Population standard deviation
n = numTrial;    % Sample size

xbar = avgTailAccel;  % Sample mean
s = stdTailAccel;      % Sample standard deviation
t = (xbar - mu)/(s/sqrt(n));
p = 1-tcdf(t,n-1) % Probability of larger t-statistic

tmin = 0;tmax = 0.3; vmin = 0; vmax = 2;
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

% Plot collective average with std shading
[no_tail_avg_handle, ~] = stdshade(noTailDxMatInterp', 0.5, cmuColor('dark-gray'), noTailTVec); hold on;
[tail_avg_handle, ~] = stdshade(tailDxMatInterp', 0.5, cmuColor('red-web'), tailTVec);

xlabel('Time (s)')
ylabel('Forward Velocity (m/s)')
axis([tmin tmax vmin vmax])
[~,accelContours] = contour(tticks, vticks, accelContourData,4:1:7, 'k--', 'ShowText', 'on');
hold on

plot(noTailTVec(end), noTailAvgDxFinal, 'o', 'MarkerFaceColor', cmuColor('dark-gray'), 'MarkerSize', 10,'MarkerEdgeColor','k'); hold on;
plot(tailTVec(end), tailAvgDxFinal, 'o', 'MarkerFaceColor', cmuColor('red-web'), 'MarkerSize', 10,'MarkerEdgeColor','k');
legend([no_tail_avg_handle, tail_avg_handle, accelContours],'No Tail', 'With Tail', 'Acceleration $(\frac{m}{s^2})$', 'Location', 'Northwest')

cropWhiteSpace;

cloud_path = 'C:\Users\Joe Desktop\Box\Robomechanics Lab Shared Files\Minitaur Opt\';

fig_path = [cloud_path,'Hardware Data Figures\'];
reply = input(['Save figure to Box? y/n: '],'s');
if strcmp(reply, 'y') && exist(cloud_path, 'dir')
    saveas(accel_fig, [fig_path,'AccelerationComparisonAero.png']);
    saveas(accel_fig, [fig_path,'AccelerationComparisonAero.eps']);
    disp('Saved')
end

