close all
startup;

addpath('process\')
noTail = load('local\maxAccelerationMu05Vel13MinGRF08MaxV7');
withTail = load('local\maxAccelerationWithAeroTailMu05Vel13MinGRF08MaxV7');

fDrag = [withTail.gait(1).inputs.fDrag; withTail.gait(3).inputs.fDrag];

noTail = mergeGait(noTail.gait);
withTail = mergeGait(withTail.gait);

fDragx = fDrag.*sin(withTail.states.x(5,:)' + withTail.states.x(23,:)');

set(0,'defaultfigureposition',[200 250 1050 500])

figure(1)
subplot(1,2,1)
plot(noTail.tspan, noTail.inputs.fFoot0([1],:), 'color', cmuColor('dark-gray'), 'LineWidth', 2);hold on;
plot(withTail.tspan, withTail.inputs.fFoot0([1],:), 'color', cmuColor('red-web'), 'LineWidth', 2)
legend('No Tail',' With Tail', 'Location', 'Northwest')
xlabel('Time (s)')
ylabel('Horizontal GRF (N)')
title('Front Leg')
axis([0 0.3 0 30])

noTailFrontLegImpulse = trapz(noTail.tspan, noTail.inputs.fFoot0([1],:))
withTailFrontLegImpulse = trapz(withTail.tspan, withTail.inputs.fFoot0([1],:))
tailImpulse = trapz(withTail.tspan, fDragx)
improvement = (withTailFrontLegImpulse/noTailFrontLegImpulse - 1)*100

noTailBackLegImpulse = trapz(noTail.tspan, noTail.inputs.fFoot1([1],:))
withTailBackLegImpulse = trapz(withTail.tspan, withTail.inputs.fFoot1([1],:))
improvement = (withTailBackLegImpulse/noTailBackLegImpulse - 1)*100

subplot(1,2,2)
plot(noTail.tspan, noTail.inputs.fFoot1([1],:), 'color', cmuColor('dark-gray'), 'LineWidth', 2);hold on;
plot(withTail.tspan, withTail.inputs.fFoot1([1],:), 'color', cmuColor('red-web'), 'LineWidth', 2)
legend('No Tail',' With Tail', 'Location', 'Northwest')
xlabel('Time (s)')
ylabel('Horizontal GRF (N)')
title('Back Leg')
axis([0 0.3 0 30])

figure
plot(withTail.tspan, fDragx, 'color', cmuColor('red-web'), 'LineWidth', 2)
xlabel('Time (s)')
ylabel('Horizontal GRF (N)')
title('Tail Force')
axis([0 0.3 0 30])



% subplot(1,2,2)
% plot(noTail.tspan, noTail.inputs.fFoot0([3],:), 'color', cmuColor('gray'), 'LineWidth', 2);hold on;
% plot(withTail.tspan, withTail.inputs.fFoot0([3],:), 'color', cmuColor('print'), 'LineWidth', 2)
% legend('No Tail',' With Tail', 'Location', 'Northwest')
% xlabel('Time (s)')
% ylabel('Vertical GRF (N)')