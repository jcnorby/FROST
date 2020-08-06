function acc = getAccStance3D(a, varargin)


a_x0 = a(1);
a_y0 = a(2);
a_z0 = a(3);
a_x1 = a(4);
a_y1 = a(5);
a_z1 = a(6);
t_s = a(7);

if (nargin <= 1)
    t = t_s;
else
    t = varargin{1};
end

acc = [a_x0 + (a_x1 - a_x0).*t/(t_s);
    a_y0 + (a_y1 - a_y0).*t/(t_s);
    a_z0 + (a_z1 - a_z0).*t/(t_s);];