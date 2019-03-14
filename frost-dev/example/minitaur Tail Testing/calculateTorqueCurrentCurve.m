close all;clear;clc;
currentData = [0 10 20 30 40 50];
torqueData = [0 1 1.8 2.5 3 3.3];

currentData = [-50 -40 -30 -20 -10 0 10 20 30 40 50];
torqueData = [-3.3 -3 -2.5 -1.8 -1 0 1 1.8 2.5 3 3.3];
plot(currentData, torqueData, 'o'); hold on;

currentToTorque = polyfit(currentData, torqueData, 3);
torqueToCurrent = polyfit(torqueData, currentData, 3);

currentToTorque(find(abs(currentToTorque)<1e-6)) = 0
torqueToCurrent(find(abs(torqueToCurrent)<1e-6)) = 0

syms current torque real

torqueToCurrent_func = poly2sym(torqueToCurrent, torque)
currentToTorque_func = finverse(poly2sym(torqueToCurrent, current))

matlabFunction(currentToTorque_func, 'File', 'currentToTorqueFunction');
matlabFunction(torqueToCurrent_func, 'File', 'torqueToCurrentFunction');


plot(currentData, torqueData, 'o'); hold on;

currentDataContinuous = linspace(-100, 100, 200);
torqueDataContinuous = linspace(-5,5, 200);

plot(currentDataContinuous, currentToTorqueFunction(currentDataContinuous), 'b-')
plot(torqueToCurrentFunction(torqueDataContinuous), torqueDataContinuous, 'r--')