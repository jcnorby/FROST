function s_new = applyFlight3D(s, t_f)

x_to = s(1);
y_to = s(2);
z_to = s(3);
dx_to = s(4);
dy_to = s(5);
dz_to = s(6);

p_to = s(7);
dp_to = s(8);

g = 9.81;
% syms g real;

s_new = [x_to + dx_to.*t_f;
    y_to + dy_to.*t_f;
    z_to + dz_to.*t_f - 0.5*g*t_f.^2;
    dx_to*ones(size(t_f));
    dy_to*ones(size(t_f));
    dz_to - g*t_f;
    p_to + dp_to.*t_f;
    dp_to*ones(size(t_f))];