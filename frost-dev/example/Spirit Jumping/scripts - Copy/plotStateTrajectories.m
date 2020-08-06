function plotStateTrajectories(tVec, q, varargin)
if size(varargin,1) == 0
    fig = figure;
    subplot(1,2,1);
    parent_axes_1 = gca;
    
    subplot(1,2,2);
    parent_axes_2 = gca;
else
    parent_axes_1 = varargin{1};
    parent_axes_2 = varargin{2};
end

set(gcf, 'CurrentAxes', parent_axes_1)
plot(tVec, q(:,1:3));
xlabel('Time (s)')
ylabel('Position (m)')
legend('X', 'Y', 'Z', 'Location', 'Northwest')

set(gcf, 'CurrentAxes', parent_axes_2)
plot(tVec, q(:,4:6));
xlabel('Time (s)')
ylabel('Velocity (m/s)')
legend('X', 'Y', 'Z', 'Location', 'Northwest')

% figure
% subplot(2,3,1)
% plot(tVec, q(:,1), 'color', cmuColor('red-web'));
% xlabel('Time (s)')
% ylabel('X Position (m)')
% 
% subplot(2,3,2)
% plot(tVec, q(:,2), 'color', cmuColor('red-web'));
% xlabel('Time (s)')
% ylabel('Y Position (m)')
% 
% subplot(2,3,3)
% plot(tVec, q(:,3), 'color', cmuColor('red-web'));
% xlabel('Time (s)')
% ylabel('Z Position (m)')
% 
% subplot(2,3,4)
% plot(tVec, q(:,4), 'color', cmuColor('red-web'));
% xlabel('Time (s)')
% ylabel('X Velocity (m/s)')
% 
% subplot(2,3,5)
% plot(tVec, q(:,5), 'color', cmuColor('red-web'));
% xlabel('Time (s)')
% ylabel('Y Velocity (m/s)')
% 
% subplot(2,3,6)
% plot(tVec, q(:,6), 'color', cmuColor('red-web'));
% xlabel('Time (s)')
% ylabel('Z Velocity (m/s)')