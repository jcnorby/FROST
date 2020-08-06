function plotStateActionPair3D(s,a, varargin)

if size(varargin,2) == 0
    fig = figure;
    parent_axes = gca;
    line_color = cmuColor('red-web');
elseif size(varargin,2) == 1
    parent_axes = varargin{1};
    line_color = cmuColor('red-web');
elseif size(varargin,2) == 2
    parent_axes = varargin{1};
    line_color = varargin{2};
end

x0 = s(1);
y0 = s(2);
z0 = s(3);
dx0 = s(4);
dy0 = s(5);
dz0 = s(6);

t_f = a(8);
t_s = a(7);

N = 21;
for i = 1:N
    s_stance(:,i) = applyStance3D(s, a, t_s*(i-1)/(N-1));
end

if t_f > 0
    for i = 1:N
        s_flight(:,i) = applyFlight3D(s_stance(:,end), t_f*(i-1)/(N-1));
    end
else
    s_flight = NaN*ones(3,1);
end

marker_size = 20;
line_width = 3;

% s_flight(:,[3:4:length(s_flight)]) = NaN;
% s_flight(:,[4:4:length(s_flight)]) = NaN;

line(parent_axes, s_stance(1,:), s_stance(2,:), s_stance(3,:),'LineStyle', '-' , 'Color', line_color, 'LineWidth', line_width);
line(parent_axes, s_flight(1,:), s_flight(2,:), s_flight(3,:),'LineStyle', '-', 'Color', 'c', 'LineWidth', line_width);

line(parent_axes, x0,y0,z0,'Marker', '.' , 'Color', line_color, 'MarkerSize', marker_size);
line(parent_axes, s_flight(1,end), s_flight(2,end),s_flight(3,end),'Marker', '.' , 'Color', line_color, 'MarkerSize', marker_size);
