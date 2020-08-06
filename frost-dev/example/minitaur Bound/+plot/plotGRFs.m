close all

noTail = load('local\avgAccelerationBrakeLegsMinVelMinGRFMu05');
withTail = load('local\avgAccelerationBrakeLegsWithTailMinVelG4MinGRFMu05');

noTail = mergeGait(noTail.gait);
withTail = mergeGait(withTail.gait);

set(0,'defaultfigureposition',[200 250 1050 500])

figure(1)
subplot(1,2,1)
plot(noTail.tspan, noTail.inputs.fFoot0([1],:), 'color', cmuColor('gray'), 'LineWidth', 2);hold on;
plot(withTail.tspan, withTail.inputs.fFoot0([1],:), 'color', cmuColor('web'), 'LineWidth', 2)
legend('No Tail',' With Tail', 'Location', 'Northwest')
xlabel('Time (s)')
ylabel('Horizontal GRF (N)')
title('Front Leg')
axis([0 0.3 0 45])

noTailFrontLegImpulse = trapz(noTail.tspan, noTail.inputs.fFoot0([1],:))
withTailFrontLegImpulse = trapz(withTail.tspan, withTail.inputs.fFoot0([1],:))
improvement = (withTailFrontLegImpulse/noTailFrontLegImpulse - 1)*100

subplot(1,2,2)
plot(noTail.tspan, noTail.inputs.fFoot1([1],:), 'color', cmuColor('gray'), 'LineWidth', 2);hold on;
plot(withTail.tspan, withTail.inputs.fFoot1([1],:), 'color', cmuColor('web'), 'LineWidth', 2)
legend('No Tail',' With Tail', 'Location', 'Northwest')
xlabel('Time (s)')
ylabel('Horizontal GRF (N)')
title('Back Leg')
axis([0 0.3 0 45])



% subplot(1,2,2)
% plot(noTail.tspan, noTail.inputs.fFoot0([3],:), 'color', cmuColor('gray'), 'LineWidth', 2);hold on;
% plot(withTail.tspan, withTail.inputs.fFoot0([3],:), 'color', cmuColor('print'), 'LineWidth', 2)
% legend('No Tail',' With Tail', 'Location', 'Northwest')
% xlabel('Time (s)')
% ylabel('Vertical GRF (N)')