function action = getRandomAction()

F_MAX = 665;
MU = 0.9;
T_S_MAX = 0.3; % 0.5
T_S_MIN = 0.1;
G_CONST = 9.81;
M_CONST = 45;
T_F_MAX = 0.5; % 0.5

phi = (2*pi)*rand;
lb = 1.0/sqrt(1 + MU*MU);
cos_theta = (1.0 - lb)*rand + lb;
theta = acos(cos_theta);
f = rand*F_MAX;
f_x0 = f*sin(theta)*cos(phi);
f_y0 = f*sin(theta)*sin(phi);
f_z0 = f*cos(theta);

phi = (2*pi)*rand;
lb = 1.0/sqrt(1 + MU*MU);
cos_theta = (1.0 - lb)*rand + lb;
theta = acos(cos_theta);
f = rand*F_MAX;
f_x1 = f*sin(theta)*cos(phi);
f_y1 = f*sin(theta)*sin(phi);
f_z1 = f*cos(theta);

% Random stance and flight times between 0 and T_MAX
t_s = (T_S_MAX - T_S_MIN)*rand + T_S_MIN;
t_f = T_F_MAX*rand;

action = [f_x0/M_CONST;
	f_y0/M_CONST;
	f_z0/M_CONST - G_CONST;
	f_x1/M_CONST;
	f_y1/M_CONST;
	f_z1/M_CONST - G_CONST;
	t_s;
	t_f]';

% N = 1000;
% for i = 1:N
%     phi = (2*pi)*rand;
%     lb = 1/sqrt(1 + MU*MU);
%     ub = 1;
%     cos_theta = (ub - lb)*rand + lb;
%     theta = acos(cos_theta);
%     f = rand*F_MAX;
%     %     f = 1;
%     x(i,1) = f*sin(theta)*cos(phi);
%     y(i,1) = f*sin(theta)*sin(phi);
%     z(i,1) = f*cos(theta);
% end
% 
% 
% close all
% figure
% quiver3(zeros(N,1), zeros(N,1), zeros(N,1), x, y, z, 'color', cmuColor('red-web'))
% axis equal
% axis([-F_MAX F_MAX -F_MAX F_MAX 0 F_MAX])
% xlabel('$F_x$ (N)');
% ylabel('$F_y$ (N)');
% zlabel('$F_z$ (N)');
% view(3)
% % axis([-1 1 -1 1 -1 1])