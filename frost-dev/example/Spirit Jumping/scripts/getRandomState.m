function state = getRandomState()

H_MIN = 0.05;
H_MAX = 0.50;
DX_MAX = 4.0;
P_MAX = 0.5;

state(1) = 0;
state(2) = 0;
state(3) = (H_MAX - H_MIN)*rand + H_MIN;

phi = (2*pi)*rand;
cos_theta = 2*rand - 1;
theta = acos(cos_theta);
v = rand*DX_MAX;
state(4) = v*sin(theta)*cos(phi);
state(5) = v*sin(theta)*sin(phi);
state(6) = v*cos(theta);

state(7) = 2*P_MAX*rand - P_MAX;
state(8) = 0;

% DX_MAX = 2.5;
% 
% N = 1000;
% for i = 1:N
%     phi = (2*pi)*rand;
%     cos_theta = 2*rand - 1;
%     theta = acos(cos_theta);
% %     theta = pi*rand;
%     v = rand*DX_MAX;
%     v = 1;
%     x(i,1) = v*sin(theta)*cos(phi);
%     y(i,1) = v*sin(theta)*sin(phi);
%     z(i,1) = v*cos(theta);
% end
% 
% 
% figure
% quiver3(zeros(N,1), zeros(N,1), zeros(N,1), x, y, z)
% axis equal
% axis([-DX_MAX DX_MAX -DX_MAX DX_MAX -DX_MAX DX_MAX])
% % view(0,0)