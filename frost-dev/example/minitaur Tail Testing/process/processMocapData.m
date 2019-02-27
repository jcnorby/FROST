close all; clc; clear;
if strcmp(pwd,'C:\Users\Joe\Documents\FROST\frost-dev\example\minitaur Tail Testing\process')
    cd ..
end
set(groot,'defaultfigureposition',[200 250 1200 600])

d = dir([pwd, '\process\mocap', '\*.csv']); % Determine the number of .csv files in the mocap folder
numTrial = length(d);

for trial = 1:numTrial
    %     if bTail
    %         mocapData = csvread('mocap/WithTailAccel2_001.csv', 7, 0);
    %         indexVec = (65:95)';
    %         titleString = 'With Tail Acceleration = ';
    %     else
    %         mocapData = csvread('mocap/NoTailAccel_001.csv', 7, 0);
    %         indexVec = (74:106)';
    %         titleString = 'No Tail Acceleration = ';
    %     end
    
    mocapData = csvread(['process\mocap\', d(trial).name], 7, 0);
    
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
            titleString = 'With Tail Acceleration = ';
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
    end
    
    tAll = mocapData(:, 2);
    t = tAll(indexVec);
    t = t - t(1);
    
    xAll = -mocapData(:, 9);
    xAll = xAll - xAll(1);
    x = xAll(indexVec);
    x = x - x(1);
    
    %     figure(1)
    %     plot(t, x)
    
    dxAll = diff(xAll)./diff(tAll);
    dx = dxAll(indexVec);
    
    smoothDxAll = smooth(dxAll);
    dxFinal = smoothDxAll(indexVec(end));
    tFinal = tAll(indexVec(end)) - tAll(indexVec(1));
    accel(trial) = dxFinal/tFinal;
        
    
    figure(floor((trial-1)/5)+1)
    subplot(3,2,mod(trial-1,5)+1)
    plot(tAll(1:end-1), dxAll, 'k:', tAll(1:end-1), smooth(dxAll),'r')
    legend('Data', 'Filtered')
    xlabel('Time (s)')
    ylabel('Forward Velocity (m/s)')
    title([titleString, sprintf('%.2f', accel(trial)), ' $\frac{m}{s^2}$.'])
    axis([0 2 0 2])
    vline(tAll(indexVec(1)), 'k--', 'Start')
    vline(tAll(indexVec(end)), 'k--', 'End')
    grid on
    
    figure(floor((trial-1)/5)+3)
    subplot(3,2,mod(trial-1,5)+1)
    plot(t, dx, 'k:', t, smooth(dx),'r')
    legend('Data', 'Filtered',  'location', 'northwest')
    xlabel('Time (s)')
    ylabel('Forward Velocity (m/s)')
    title([titleString, sprintf('%.2f', accel(trial)), ' $\frac{m}{s^2}$.'])
    axis([0 0.3 0 2])
    vline(t(1), 'k--', 'Start')
    vline(t(end), 'k--', 'End')
    grid on
    
%     figure(1)
%     subplot(1,2,bTail+1)
%     plot(tAll(1:end-1), dxAll, 'k:', tAll(1:end-1), smooth(dxAll),'r')
%     legend('Data', 'Filtered')
%     xlabel('Time (s)')
%     ylabel('Forward Velocity (m/s)')
%     title([titleString, sprintf('%.2f', accel), ' $\frac{m}{s^2}$.'])
%     axis([0 2 0 2])
%     vline(tAll(indexVec(1)), 'k--', 'Start')
%     vline(tAll(indexVec(end)), 'k--', 'End')
%     grid on
%     
%     figure(2)
%     subplot(1,2,bTail+1)
%     plot(t, dx, 'k:', t, smooth(dx),'r')
%     legend('Data', 'Filtered', 'Location', 'Northwest')
%     xlabel('Time (s)')
%     ylabel('Forward Velocity (m/s)')
%     title([titleString, sprintf('%.2f', accel), ' $\frac{m}{s^2}$.'])
%     axis([0 0.3 0 2])
%     grid on
end
    
noTailAccel = accel(1:5);
tailAccel = accel(6:end);

avgNoTailAccel = mean(noTailAccel)
avgTailAccel = mean(tailAccel)

stdNoTailAccel = std(noTailAccel)
stdTailAccel = std(tailAccel)

improvement = (avgTailAccel/avgNoTailAccel - 1)*100


mu = avgNoTailAccel;     % Population mean
sigma = stdNoTailAccel;  % Population standard deviation
n = 5;    % Sample size

xbar = avgTailAccel;  % Sample mean
s = stdTailAccel;      % Sample standard deviation
t = (xbar - mu)/(s/sqrt(n));
p = 1-tcdf(t,n-1) % Probability of larger t-statistic

