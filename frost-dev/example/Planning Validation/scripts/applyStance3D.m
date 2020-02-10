function s_new = applyStance3D(s, a, t_s, varargin)


a_x0 = a(1);
a_y0 = a(2);
a_z0 = a(3);
a_x1 = a(4);
a_y1 = a(5);
a_z1 = a(6);

if (nargin <= 3)
    t = t_s;
else
    t = varargin{1};
end

x_l = s(1);
y_l = s(2);
z_l = s(3);
dx_l = s(4);
dy_l = s(5);
dz_l = s(6);

s_new = [x_l + dx_l.*t + 0.5*a_x0.*t.^2 + (a_x1 - a_x0).*(t.^3)/(6*t_s);
    y_l + dy_l.*t + 0.5*a_y0.*t.^2 + (a_y1 - a_y0).*(t.^3)/(6*t_s);
    z_l + dz_l.*t + 0.5*a_z0.*t.^2 + (a_z1 - a_z0).*(t.^3)/(6*t_s);
    dx_l + a_x0.*t + (a_x1 - a_x0).*t.^2/(2*t_s);
    dy_l + a_y0.*t + (a_y1 - a_y0).*t.^2/(2*t_s);
    dz_l + a_z0.*t + (a_z1 - a_z0).*t.^2/(2*t_s);];

% if (nargin == 2)
%     t = t_s;
% else
%     t = varargin{1};
% end
% 
% x_l = s(1);
% y_l = s(2);
% z_l = s(3);
% dx_l = s(4);
% dy_l = s(5);
% dz_l = s(6);
% 
% s_new = [x_l + dx_l.*t + 0.5*a_x0.*t.^2 + (a_x1 - a_x0).*(t.^3)/(6*t_s);
%     y_l + dy_l.*t + 0.5*a_y0.*t.^2 + (a_y1 - a_y0).*(t.^3)/(6*t_s);
%     z_l + dz_l.*t + 0.5*ddz.*t.^2/t_s;
%     dx_l + a_x0.*t + (a_x1 - a_x0).*t.^2/(2*t_s);
%     dy_l + a_y0.*t + (a_y1 - a_y0).*t.^2/(2*t_s);
%     dz_l + ddz*t/t_s];

% s_new = [x_l + dx_l.*t_s + 0.5*a_x0.*t_s.^2 + (a_x1 - a_x0).*(t_s.^2)/6;
%     y_l + dy_l.*t_s + 0.5*a_y0.*t_s.^2 + (a_y1 - a_y0).*(t_s.^2)/6;
%     z_l + dz_l.*t_s + 0.5*ddz.*t_s;
%     dx_l + a_x0.*t_s + (a_x1 - a_x0).*t_s/2;
%     dy_l + a_y0.*t_s + (a_y1 - a_y0).*t_s/2;
%     dz_l + ddz];