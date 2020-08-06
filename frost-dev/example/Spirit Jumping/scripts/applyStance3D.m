function s_new = applyStance3D(s, a, varargin)


a_x_td = a(1);
a_y_td = a(2);
a_z_td = a(3);
a_x_to = a(4);
a_y_to = a(5);
a_z_to = a(6);
t_s = a(7);

a_p_td = a(9);
a_p_to = a(10);

if (nargin <= 2)
    t = t_s;
else
    t = varargin{1};
end

x_td = s(1);
y_td = s(2);
z_td = s(3);
dx_td = s(4);
dy_td = s(5);
dz_td = s(6);

p_td = s(7);
dp_td = s(8);

s_new = [x_td + dx_td.*t + 0.5*a_x_td.*t.^2 + (a_x_to - a_x_td).*(t.^3)/(6*t_s);
    y_td + dy_td.*t + 0.5*a_y_td.*t.^2 + (a_y_to - a_y_td).*(t.^3)/(6*t_s);
    z_td + dz_td.*t + 0.5*a_z_td.*t.^2 + (a_z_to - a_z_td).*(t.^3)/(6*t_s);
    dx_td + a_x_td.*t + (a_x_to - a_x_td).*t.^2/(2*t_s);
    dy_td + a_y_td.*t + (a_y_to - a_y_td).*t.^2/(2*t_s);
    dz_td + a_z_td.*t + (a_z_to - a_z_td).*t.^2/(2*t_s);
    p_td + dp_td.*t + 0.5*a_p_td.*t.*t + (a_p_to - a_p_td).*(t.^3)/(6*t_s);
    dp_td + a_p_td.*t + (a_p_to - a_p_td).*t.^2/(2*t_s)];