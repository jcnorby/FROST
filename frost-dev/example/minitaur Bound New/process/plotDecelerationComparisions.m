close all;clear;clc;

noTail = load('local/maxDecelerationSlidingMu05Vel15.mat');
noTail = noTail.results;

inertialTail = load('local/maxDecelerationSlidingWithTailMu05Vel15.mat');
inertialTail = inertialTail.results;

aeroTail = load('local/maxDecelerationSlidingWithAeroTailMu05Vel15.mat');
aeroTail = aeroTail.results;

aeroTailNoSliding = load('local/maxDecelerationWithAeroTailMu05Vel15.mat');
aeroTailNoSliding = aeroTailNoSliding.results;

c = categorical({'No Tail','Inertial Tail','Aero Tail'});
c = reordercats(c,{'No Tail','Inertial Tail','Aero Tail'});
decelerations = [noTail.avgDeceleration, inertialTail.avgDeceleration, aeroTail.avgDeceleration];
bar(c,decelerations, 'facecolor', cmuColor('red-web'))
ylabel('Deceleration ($m/s^2$)')