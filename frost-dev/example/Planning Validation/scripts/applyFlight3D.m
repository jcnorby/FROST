function s_new = applyFlight3D(s, t_f)

x0 = s(1);
y0 = s(2);
z0 = s(3);
dx0 = s(4);
dy0 = s(5);
dz0 = s(6);

g = 9.81;
% syms g real;

s_new = [x0 + dx0.*t_f;
    y0 + dy0.*t_f;
    z0 + dz0.*t_f - 0.5*g*t_f.^2;
    dx0*ones(size(t_f));
    dy0*ones(size(t_f));
    dz0 - g*t_f];