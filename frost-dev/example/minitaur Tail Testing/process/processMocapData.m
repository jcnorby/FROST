close all; clc; clear;
if strcmp(pwd,'C:\Users\Joe\Documents\FROST\frost-dev\example\minitaur Tail Testing\process')
    cd ..
end
set(groot,'defaultfigureposition',[200 250 1200 600])

for bTail = 0:1
    if bTail
        mocapData = csvread('mocap/WithTailAccel2_001.csv', 7, 0);
        indexVec = (65:95)';
        titleString = 'With Tail Acceleration = ';
    else
        mocapData = csvread('mocap/NoTailAccel_001.csv', 7, 0);
        indexVec = (74:106)';
        titleString = 'No Tail Acceleration = ';
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
    
    dxFinal = dxAll(indexVec(end));
    tFinal = tAll(indexVec(end)) - tAll(indexVec(1));
    accel = dxFinal/tFinal
    
    figure(1)
    subplot(1,2,bTail+1)
    plot(tAll(1:end-1), dxAll, 'k:', tAll(1:end-1), smooth(dxAll),'r')
    legend('Data', 'Filtered')
    xlabel('Time (s)')
    ylabel('Forward Velocity (m/s)')
    title([titleString, sprintf('%.2f', accel), ' $\frac{m}{s^2}$.'])
    axis([0 2 0 2])
    vline(tAll(indexVec(1)), 'k--', 'Start')
    vline(tAll(indexVec(end)), 'k--', 'End')
    grid on
    
    figure(2)
    subplot(1,2,bTail+1)
    plot(t, dx, 'k:', t, smooth(dx),'r')
    legend('Data', 'Filtered', 'Location', 'Northwest')
    xlabel('Time (s)')
    ylabel('Forward Velocity (m/s)')
    title([titleString, sprintf('%.2f', accel), ' $\frac{m}{s^2}$.'])
    axis([0 0.3 0 2])
    grid on
   
end
