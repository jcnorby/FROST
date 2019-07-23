close all; clc; clear;
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
            indexVec = (77:109)';
            titleString = 'No Tail Acceleration = ';
        case 2
            indexVec = (77:108)';
            titleString = 'No Tail Acceleration = ';
        case 3
            indexVec = (68:100)';
            titleString = 'No Tail Acceleration = ';
        case 4
            indexVec = (77:109)';
            titleString = 'No Tail Acceleration = ';
        case 5
            indexVec = (55:87)';
            titleString = 'No Tail Acceleration = ';
        case 6
            indexVec = (81:103)';
            titleString = 'No Tail Acceleration = ';
        case 7
            indexVec = (46:69)';
            titleString = 'With Tail Acceleration = ';
        case 8
            indexVec = (70:93)';
            titleString = 'With Tail Acceleration = ';
        case 9
            indexVec = (81:104)';
            titleString = 'With Tail Acceleration = ';
        case 10
            indexVec = (48:71)';
            titleString = 'With Tail Acceleration = ';
        case 11
            indexVec = (48:71)';
            titleString = 'With Tail Acceleration = ';
        case 12
            indexVec = (48:71)';
            titleString = 'With Tail Acceleration = ';
    end
    
    tAll = mocapData(:, 2);
    t = tAll(indexVec);
    t = t - t(1);
    
    xAll = -mocapData(:, 9);
    xAll = xAll - xAll(1);
    tticks = xAll(indexVec);
    tticks = tticks - tticks(1);
    
    %     figure(1)
    %     plot(t, x)
    
    dxAll = diff(xAll)./diff(tAll);
    smoothDxAll = smooth(dxAll);
    dx = smoothDxAll(indexVec);
    
    dxFinal = dx(end);
    tFinal = t(end);
    accel(trial) = dxFinal/tFinal;
    
    tLog{trial} = t;
    dxLog{trial} = dx;
        
    
%     figure(floor((trial-1)/5)+1)
%     subplot(3,2,mod(trial-1,5)+1)
%     plot(tAll(1:end-1), dxAll, 'k:', tAll(1:end-1), smooth(dxAll),'r')
%     legend('Data', 'Filtered')
%     xlabel('Time (s)')
%     ylabel('Forward Velocity (m/s)')
%     title([titleString, sprintf('%.2f', accel(trial)), ' $\frac{m}{s^2}$.'])
%     axis([0 2 0 2])
%     vline(tAll(indexVec(1)), 'k--', 'Start')
%     vline(tAll(indexVec(end)), 'k--', 'End')
%     grid on
%     
%     figure(floor((trial-1)/5)+3)
%     subplot(3,2,mod(trial-1,5)+1)
%     plot(t, dx, 'k:', t, smooth(dx),'r')
%     legend('Data', 'Filtered',  'location', 'northwest')
%     xlabel('Time (s)')
%     ylabel('Forward Velocity (m/s)')
%     title([titleString, sprintf('%.2f', accel(trial)), ' $\frac{m}{s^2}$.'])
%     axis([0 0.3 0 2])
%     vline(t(1), 'k--', 'Start')
%     vline(t(end), 'k--', 'End')
%     grid on
    
end
    
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

figure(5)
for trial = 1:numTrial
    
    plot(tLog{trial}, dxLog{trial}, 'color', cmuColor('dark-gray'), 'linewidth', 2)
    xlabel('Time (s)')
    ylabel('Forward Velocity (m/s)')
    axis([tmin tmax vmin vmax])
    hold on
    
    plot(tLog{trial+numTrial}, dxLog{trial+numTrial}, 'color', cmuColor('red-web'), 'linewidth', 2)
    xlabel('Time (s)')
    axis([tmin tmax vmin vmax])
    [~,accelContours] = contour(tticks, vticks, accelContourData,4:1:8, 'k--', 'ShowText', 'on'); 
    hold on
end
for trial = 1:numTrial
    
    plot(tLog{trial}(end), dxLog{trial}(end), 'o', 'MarkerFaceColor', cmuColor('dark-gray'), 'MarkerSize', 10,'MarkerEdgeColor','k'); hold on;
    plot(tLog{trial+numTrial}(end), dxLog{trial+numTrial}(end), 'o', 'MarkerFaceColor', cmuColor('red-web'), 'MarkerSize', 10,'MarkerEdgeColor','k'); hold on;
    
    legend('No Tail', 'With Tail', 'Acceleration $(\frac{m}{s^2})$', 'Location', 'Northwest')
end

cropWhiteSpace;


