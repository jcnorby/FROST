% close all; clc; clear;
% set(0, 'DefaultAxesFontSize', 18);
% set(0,'DefaultAxesXGrid','on','DefaultAxesYGrid','on')
% set(0, 'DefaultLineMarkerSize', 10)

close all; clc; clear;
set(0, 'DefaultAxesFontSize', 24);
set(0, 'DefaultLineMarkerSize', 10);
set(0,'defaultfigurecolor',[1 1 1]);
set(0,'DefaultAxesXGrid','off','DefaultAxesYGrid','off')
set(groot,'defaulttextinterpreter','latex');  
set(groot, 'defaultAxesTickLabelInterpreter','latex');  
set(groot, 'defaultLegendInterpreter','latex');

restoredefaultpath; matlabrc;
frost_path  = '../../';
addpath(frost_path);
frost_addpath;
addpath(genpath('process'));

temp = load('local/energyOptimalBoundWithTailRAccurate.mat');
minitaurData = open_log('LOG00390.txt');
% temp = load('local/current_gait.mat');

nlp = temp.nlp;
sol = temp.sol;
gait = temp.gait;

fullgait = mergeGait(gait, nlp);
t = fullgait.tspan;
tailMass = 0.5;

motorIndex = [7,8,11,12,15,16,19,20];
tailIndex = 23;
stallTorque = 3.5;
noLoadSpeed =  167.55;

GRF = fullgait.inputs.fFoot0 + fullgait.inputs.fFoot1 + fullgait.inputs.fFoot2 + fullgait.inputs.fFoot3;

if length(fullgait.states.x(:,1)) == 23
    for i = 1:length(fullgait.tspan)
        J = ComputeJacobian(fullgait.states.x(:,i));
        Q(:,i) = transpose(J)*[fullgait.inputs.fFoot0(:,i);fullgait.inputs.fFoot1(:,i);fullgait.inputs.fFoot2(:,i);fullgait.inputs.fFoot3(:,i)];
        netLegEffect(i) = Q(5,i);
    end
    for i = 1:length(fullgait.tspan)
        massVel(:,i) = tailMassVelFun(fullgait.states.x(:,i),fullgait.states.dx(:,i));
        massAccel2(:,i) = tailMassAccelFun(fullgait.states.x(:,i),fullgait.states.dx(:,i),fullgait.states.ddx(:,i));
    end
    massAccel = diff(massVel')'./[diff(fullgait.tspan);diff(fullgait.tspan);diff(fullgait.tspan)];
    massAccel(:,end+1) = massAccel(:,end);
    
    
    
    % Compute tail torque/reaction forces
    for i = 1:length(fullgait.tspan)
        rBase = rBaseRelFun(fullgait.states.x(:,i));
        tailReactionForce(:,i) = tailMass*(massAccel(:,i) + [0; 0; 9.81]);
        
        temprxn = cross(rBase,-tailReactionForce(:,i));
        reactionForceEffect(i) = temprxn(2);
        reactionTorqueEffect(i) = -fullgait.inputs.u(9,i);
        netTailEffect(i) = reactionForceEffect(i) + reactionTorqueEffect(i);
        
    end
    
    %     figure(3)
    %     stairs(t, netTailEffect, 'k-',t, reactionTorqueEffect, 'b--',t, reactionForceEffect, 'r--', t,netLegEffect, 'm--', t, netTailEffect+netLegEffect, 'm-')
    %     legend('Tail','Tail Torque', 'Tail Force', 'Leg', 'Total')
    figure(3)
    stairs(t, netTailEffect, 'r--')
    hold on
    stairs(t,netLegEffect, 'b--')
    hold on
    stairs(t, netTailEffect+netLegEffect, 'k-')
    legend('Tail', 'Leg', 'Total')
    
    figure(4)
    stairs(t,massAccel(3,:))
    hold on
    stairs(t, massAccel2(3,:))
    title('Tail Mass Acceleration Comparison, z')
    ylabel('Acceleration (m/s^2)')
    legend('diff', 'EOM');
end

figure(1)
stairs(t,GRF(3,:))
hold on
stairs(t,GRF(1,:))
title('GRFs')
legend('Vertical','Horizontal')
hold on

figure(2)
% Motor Power
% subplot(2,4,1);stairs(t,fullgait.inputs.u(1,:).*fullgait.states.dx(7,:),'Color', [187/256 0 0]);title('M0');ylabel('Motor Torques');hold on;
% subplot(2,4,2);stairs(t,fullgait.inputs.u(2,:).*fullgait.states.dx(8,:),'Color', [187/256 0 0]);title('M1');hold on;
% subplot(2,4,5);stairs(t,fullgait.inputs.u(3,:).*fullgait.states.dx(11,:),'Color', [187/256 0 0]);title('M2');ylabel('Motor Torques');hold on;
% subplot(2,4,6);stairs(t,fullgait.inputs.u(4,:).*fullgait.states.dx(12,:),'Color', [187/256 0 0]);title('M3');hold on;
% subplot(2,4,3);stairs(t,fullgait.inputs.u(5,:).*fullgait.states.dx(15,:),'Color', [187/256 0 0]);title('M4');hold on;
% subplot(2,4,4);stairs(t,fullgait.inputs.u(6,:).*fullgait.states.dx(16,:),'Color', [187/256 0 0]);title('M5');hold on;
% subplot(2,4,7);stairs(t,fullgait.inputs.u(7,:).*fullgait.states.dx(19,:),'Color', [187/256 0 0]);title('M6');hold on;
% subplot(2,4,8);stairs(t,fullgait.inputs.u(8,:).*fullgait.states.dx(20,:),'Color', [187/256 0 0]);title('M7');hold on;

% % Motor torques
subplot(2,4,1);stairs(t,fullgait.inputs.u(1,:));title('M0');ylabel('Motor Torques');hold on;
subplot(2,4,2);stairs(t,fullgait.inputs.u(2,:));title('M1');hold on;
subplot(2,4,5);stairs(t,fullgait.inputs.u(3,:));title('M2');ylabel('Motor Torques');hold on;
subplot(2,4,6);stairs(t,fullgait.inputs.u(4,:));title('M3');hold on;
subplot(2,4,3);stairs(t,fullgait.inputs.u(5,:));title('M4');hold on;
subplot(2,4,4);stairs(t,fullgait.inputs.u(6,:));title('M5');hold on;
subplot(2,4,7);stairs(t,fullgait.inputs.u(7,:));title('M6');hold on;
subplot(2,4,8);stairs(t,fullgait.inputs.u(8,:));title('M7');hold on;


if any(strcmp(fieldnames(gait(1).params), 'r'))
    R = gait(1).params.r
else
    R = 1;
end

figure(5)
% subplot(1,2,1);
plot(fullgait.states.dx(motorIndex,:), fullgait.inputs.u(1:8,:), 'o','MarkerEdgeColor', 'black','MarkerFaceColor', [187/256 0 0]); ylabel('Torque (Nm)'); xlabel('Speed (rad/s)'); title('Leg Motors'); hold on;
plot([0 2*noLoadSpeed], [stallTorque, -stallTorque], 'k--', [-2*noLoadSpeed 0], [stallTorque, -stallTorque], 'k--', [-2*noLoadSpeed 0], [stallTorque, stallTorque], 'k--',[0 2*noLoadSpeed], [-stallTorque, -stallTorque], 'k--')

if length(fullgait.states.x(:,1)) > 22
    subplot(1,2,2);plot(fullgait.states.dx(tailIndex,:), fullgait.inputs.u(9,:), 'o','MarkerEdgeColor', 'black','MarkerFaceColor', [187/256 0 0]); xlabel('Speed (rad/s)'); title('Tail Motor'); hold on;
    plot([0 2*noLoadSpeed/R], [R*stallTorque, -R*stallTorque], 'k--', [-2*noLoadSpeed/R 0], [R*stallTorque, -R*stallTorque], 'k--', [-2*noLoadSpeed/R 0], [R*stallTorque, R*stallTorque], 'k--',[0 2*noLoadSpeed/R], [-R*stallTorque, -R*stallTorque], 'k--')
end

figure(6)
bar([19.5, 21.99, 13.59], 'FaceColor', [187/256 0 0])
ylabel('Energy Cost (J/m)');
set(gca, 'XTick', 1:3, 'XTickLabel', {'No Tail','Ungeared Tail','Geared Tail'})

% figure(7)
% optData = csvread('local/optData.txt',1,0);
% plot(optData(:,1),optData(:,2), 'o','MarkerEdgeColor', 'black','MarkerFaceColor', [187/256 0 0]);
% hold on
% plot([0,10],[0 0], '--k')
% xlabel('Minitaur Body Mass (kg)')
% ylabel('Energy Penalty from Tail (J/m)')


%%

temp = load('local/energyOptimalBoundWithTailRZOH.mat');
temp = load('local/energyOptimalBoundZOH.mat');
% temp = load('local/current_gait.mat');

nlp = temp.nlp;
sol = temp.sol;
gait = temp.gait;
f = 1;

fullgait = mergeGait(gait, nlp);
t = fullgait.tspan;
tailMass = 0.5;

GRF = fullgait.inputs.fFoot0 + fullgait.inputs.fFoot1 + fullgait.inputs.fFoot2 + fullgait.inputs.fFoot3;

if length(fullgait.states.x(:,1)) == 23
    for i = 1:length(fullgait.tspan)
        massVel(:,i) = tailMassVelFun(fullgait.states.x(:,i),fullgait.states.dx(:,i));
    end
    massAccel = diff(massVel')'./[diff(fullgait.tspan);diff(fullgait.tspan);diff(fullgait.tspan)];
    massAccel(:,end+1) = massAccel(:,end);
    
    
    % Compute tail torque/reaction forces
    for i = 1:length(fullgait.tspan)
        rBase = rBaseRelFun(fullgait.states.x(:,i));
        tailReactionForce(:,i) = tailMass*(massAccel(:,i) + [0; 0; 9.81]);
        
        temprxn = cross(rBase,-tailReactionForce(:,i));
        reactionForceEffect(i) = temprxn(2);
        reactionTorqueEffect(i) = -fullgait.inputs.u(9,i);
        netTailEffect(i) = reactionForceEffect(i) + reactionTorqueEffect(i);
        
    end
    
    %     figure(3)
    %     plot(t, netTailEffect, 'k-',t, reactionTorqueEffect, 'b--',t, reactionForceEffect, 'r--')
    %     legend('Net','Torque', 'Force')
end

% for i = 1:length(fullgait.tspan)
%     feetVel(:,i) = computeFeetVelocity([fullgait.states.x(:,i);0], [fullgait.states.dx(:,i);0]);
% end
% plotFootVel = figure;
% plot(t,feetVel(1:3,:))

figure(2)
% Motor Power
subplot(2,4,1);stairs(t,fullgait.inputs.u(1,:).*fullgait.states.dx(7,:),'k');title('M0');ylabel('Motor Torques');hold on;
subplot(2,4,2);stairs(t,fullgait.inputs.u(2,:).*fullgait.states.dx(8,:),'k');title('M1');hold on;
subplot(2,4,5);stairs(t,fullgait.inputs.u(3,:).*fullgait.states.dx(11,:),'k');title('M2');ylabel('Motor Torques');hold on;
subplot(2,4,6);stairs(t,fullgait.inputs.u(4,:).*fullgait.states.dx(12,:),'k');title('M3');hold on;
subplot(2,4,3);stairs(t,fullgait.inputs.u(5,:).*fullgait.states.dx(15,:),'k');title('M4');hold on;
subplot(2,4,4);stairs(t,fullgait.inputs.u(6,:).*fullgait.states.dx(16,:),'k');title('M5');hold on;
legend('Tail', 'No Tail', 'location', 'southeast')
subplot(2,4,7);stairs(t,fullgait.inputs.u(7,:).*fullgait.states.dx(19,:),'k');title('M6');hold on;
subplot(2,4,8);stairs(t,fullgait.inputs.u(8,:).*fullgait.states.dx(20,:),'k');title('M7');hold on;

figure(1)
stairs(t,GRF(3,:))
hold on
stairs(t,GRF(1,:))
title('GRFs')
legend('Back V','Back H','Middle V','Middle H')


% % Motor torques
% subplot(2,4,1);stairs(t,fullgait.inputs.u(1,:));title('M0');ylabel('Motor Torques');hold on;
% subplot(2,4,2);stairs(t,fullgait.inputs.u(2,:));title('M1');hold on;
% subplot(2,4,5);stairs(t,fullgait.inputs.u(3,:));title('M2');ylabel('Motor Torques');hold on;
% subplot(2,4,6);stairs(t,fullgait.inputs.u(4,:));title('M3');hold on;
% subplot(2,4,3);stairs(t,fullgait.inputs.u(5,:));title('M4');hold on;
% subplot(2,4,4);stairs(t,fullgait.inputs.u(6,:));title('M5');hold on;
% subplot(2,4,7);stairs(t,fullgait.inputs.u(7,:));title('M6');hold on;
% subplot(2,4,8);stairs(t,fullgait.inputs.u(8,:));title('M7');hold on;


%%

tol = 1e-3;
% checkConstraints(nlp,sol,tol,'../local/constr_check.txt'); %
% checkVariables(nlp,sol,tol,'../local/var_check.txt'); %
%
% costs = checkCosts(nlp,sol,'local/cost_check.txt'); %
% cost = sum(cell2mat(costs(1:2:7)))


%% you can also plot the states and torques w.r.t upper/lower bounds.
% plot.plotOptStates(robot,nlp,gait);
% plot.plotOptTorques(robot,nlp,gait);

%% Use to record after animation has finished
% myVideo = VideoWriter('energyOptimalBoundWithTailLatexBody', 'MPEG-4');
% myVideo.Quality = 100;
% open(myVideo);
% writeVideo(myVideo,anim.anim.M);
% close(myVideo);

