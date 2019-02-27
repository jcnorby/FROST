close all; clc; clear;
if strcmp(pwd,'C:\Users\Joe\Documents\FROST\frost-dev\example\minitaur Tail Testing\process')
    cd ..
end
set(groot,'defaultfigureposition',[200 250 1200 600])


d = dir([pwd, '\process\mocap\MinitaurDistance', '\*.csv']); % Determine the number of .csv files in the mocap folder
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
    
    mocapData = csvread(['process\mocap\MinitaurDistance\', d(trial).name], 7, 0);
    d(trial).name
    x = -mocapData(:, 9);
    dist(trial) = x(end) - x(1);
    
end
    
noTailDist = dist(1:8);
tailDist = dist(9:end);

avgNoTailDist = mean(noTailDist)
avgTailDist = mean(tailDist)

stdNoTailDist = std(noTailDist)
stdTailDist = std(tailDist)

improvement = (avgTailDist/avgNoTailDist - 1)*100


mu = avgNoTailDist;     % Population mean
sigma = stdNoTailDist;  % Population standard deviation
n = length(tailDist);    % Sample size

xbar = avgTailDist;  % Sample mean
s = stdTailDist;      % Sample standard deviation
t = (xbar - mu)/(s/sqrt(n));
p = 1-tcdf(t,n-1) % Probability of larger t-statistic

