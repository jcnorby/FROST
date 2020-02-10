function plotStateActionPair3D(s,a)

x0 = s(1);
y0 = s(2);
z0 = s(3);
dx0 = s(4);
dy0 = s(5);
dz0 = s(6);

t_f = a(8);
a(8) = [];
t_s = a(7);
a(7) = [];

N = 21;
for i = 1:N
%     s_stance(:,i) = applyStance3D(s_flight(:,end), a, t_s*(i-1)/(N-1));
    s_stance(:,i) = applyStance3D(s, a, t_s, t_s*(i-1)/(N-1));
end

for i = 1:N
%     s_flight(:,i) = applyFlight3D(s, t_f*(i-1)/(N-1));
    s_flight(:,i) = applyFlight3D(s_stance(:,end), t_f*(i-1)/(N-1));
end

d = 3;
ms = 20;
line(x0,y0,z0,'Marker', '.' , 'Color', cmuColor('red-web'), 'MarkerSize', ms);
% text(x0,y0,z0+0.02, ['$(', num2str(x0,d),',', num2str(y0,d),',', num2str(z0,d),')$'], 'FontSize',14)

lw = 3;
line(s_stance(1,:), s_stance(2,:), s_stance(3,:),'LineStyle', '-' , 'Color', cmuColor('red-web'), 'LineWidth', lw);
line(s_flight(1,:), s_flight(2,:), s_flight(3,:),'LineStyle', ':', 'Color', cmuColor('red-web'), 'LineWidth', lw);

line(s_flight(1,end), s_flight(2,end),s_flight(3,end),'Marker', '.' , 'Color', cmuColor('red-web'), 'MarkerSize', ms);
% text(s_flight(1,end), s_flight(2,end),s_flight(3,end)+0.02, ['$(', num2str(s_flight(1,end),d),',', num2str(s_flight(2,end),d),',', num2str(s_flight(3,end),d),')$'], 'FontSize',14)