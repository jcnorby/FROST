close all; clc; clear;
set(0, 'DefaultAxesFontSize', 24);
% set(0,'DefaultAxesXGrid','on','DefaultAxesYGrid','on')
set(0, 'DefaultLineMarkerSize', 10)
set(gcf,'color','w');
% set(0, 'defaultAxesTickLabelInterpreter','latex'); set(0, 'defaultLegendInterpreter','latex');
set(groot,'defaulttextinterpreter','latex');  
set(groot, 'defaultAxesTickLabelInterpreter','latex');  
set(groot, 'defaultLegendInterpreter','latex');  

tail = importdata('optData05Tail.txt')
tail = tail.data;

mass = importdata('optData05TailConstantMass.txt')
mass = mass.data;

noTail1 = [0 20.5;0.5 20.5];
noTail2 = [0 20.5;6 20.5];

noTail3 = [0 18.33;0.5 18.33];
noTail4 = [0 18.33;6 18.33];


subplot(1,2,1)
plot(noTail1(:,1),9.81*noTail1(:,2),'k:',noTail3(:,1),9.81*noTail3(:,2),'k--',tail(:,1), 9.81*tail(:,2), 'o','MarkerEdgeColor', 'black','MarkerFaceColor', [187/256 0 0])
xlabel('Tail Mass (kg)')
ylabel('Energy Expenditure (J/m)')
title('Added to System')
axis([0 0.5 150 225])
grid off
box off

subplot(1,2,2)
plot(noTail2(:,1),9.81*noTail2(:,2),'k:',noTail4(:,1),9.81*noTail4(:,2),'k--',mass(:,1), 9.81*mass(:,2), 'o','MarkerEdgeColor', 'black','MarkerFaceColor', [187/256 0 0])
xlabel('Tail Mass (kg)')
% ylabel('Energy Expenditure (J/m)')
title('Transferred From Body')
axis([0 6 150 225])
grid off
box off
legend('No tail', 'No tail or mount', 'location', 'northeast')

% subplot(2,1,1)
% plot(noTail1(:,1),9.81*noTail1(:,2),'k:',noTail3(:,1),9.81*noTail3(:,2),'k--',tail(:,1), 9.81*tail(:,2), 'o','MarkerEdgeColor', 'black','MarkerFaceColor', [187/256 0 0])
% xlabel('Tail Mass (kg)')
% ylabel('Energy Expenditure (J/m)')
% title('Tail Mass Added to System')
% axis([0 0.5 150 225])
% grid off
% box off
% 
% subplot(2,1,2)
% plot(noTail2(:,1),9.81*noTail2(:,2),'k:',noTail4(:,1),9.81*noTail4(:,2),'k--',mass(:,1), 9.81*mass(:,2), 'o','MarkerEdgeColor', 'black','MarkerFaceColor', [187/256 0 0])
% xlabel('Tail Mass (kg)')
% % ylabel('Energy Expenditure (J/m)')
% title('Tail Mass Transferred From Body')
% axis([0 6 150 225])
% grid off
% box off
% legend('Zero tail mass', 'Zero tail and motor mass', 'location', 'northeast')
% ylabel('Energy Expenditure (J/m)')