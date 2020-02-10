function [qd, dqd] = calcDesiredStates(plant, t, x, obj, params);

qd = zeros(12,1);
dqd = zeros(12,1);
qd([2,5,8,11]) = 1;   % 0.5
qd([3,6,9,12]) = 2;     % 1
% motorinfront = pi/2;
% motoroutfront = pi/2;
% motorinback = pi/2;
% motoroutback = pi/2;
% 
% qd = [motoroutfront;motorinfront;motoroutback;motorinback;motorinfront;motoroutfront;motorinback;motoroutback];
% dqd = zeros(9,1);
% T = obj.Param.T;
% A = obj.Param.A;
% 
% qd(9) = A*sin(2*pi*t/T);
% dqd(9) = A*2*pi/T*cos(2*pi*t/T);
% 
% ddq = -A*(2*pi/T)^2*sin(2*pi*t/T);


% pitch0 = x(5);
% if t<0.08
%     motorinfront = pi/3 + 0.5 - pitch0;
%     motoroutfront = pi/3 -0.5 + pitch0;
%     motorinback = 1.2*pi/2 + 0.5 - pitch0;
%     motoroutback = 1.2*pi/2 -0.5 + pitch0;
% elseif t >=0.08 && t<0.2
%     motorinfront = pi/3 -0.2 - pitch0;
%     motoroutfront = pi/3 +0.2 + pitch0;
%     motorinback = pi/2 - pitch0;
%     motoroutback = pi/2 + pitch0;
% elseif t>=0.2 && t<0.35
%     motorinfront = 1.2*pi/2 -0.2 - pitch0;
%     motoroutfront = 1.2*pi/2 +0.2 + pitch0;
%     motorinback = pi/2 - pitch0;
%     motoroutback = pi/2 + pitch0;
% elseif t>=0.285
%     motorinfront = pi/2 - pitch0;
%     motoroutfront = pi/2 + pitch0;
%     motorinback = 1.2*pi/2 - pitch0;
%     motoroutback = 1.2*pi/2 + pitch0;
% end

% pitch0 = x(5);
% if t<0.01
%     motorinfront = pi/2 - pitch0;
%     motoroutfront = pi/2 + pitch0;
%     motorinback = 1.5*pi/2  + 2 - pitch0;
%     motoroutback = 1.5*pi/2 - 2 + pitch0;
% elseif t>=0.01 && t<0.04
%     motorinfront = pi/3 - pitch0;
%     motoroutfront = pi/3 + pitch0;
%     motorinback = pi/2 - pitch0;
%     motoroutback = pi/2 + pitch0;
% elseif t>=0.04 && t<0.25
%     motorinfront = 1.5*pi/2 - pitch0;
%     motoroutfront = 1.5*pi/2 + pitch0;
%     motorinback = pi/2 - pitch0;
%     motoroutback = pi/2 + pitch0;
% elseif t>0.2
%     motorinfront = pi/3 - pitch0;
%     motoroutfront = pi/3 + pitch0;
%     motorinback = pi/2 - 0.2 - pitch0;
%     motoroutback = pi/2 + 0.2 + pitch0;
% % elseif t>0.3
% %     motorinfront = .5*pi/2 - pitch0;
% %     motoroutfront = .5*pi/2 + pitch0;
% %     motorinback = pi/2 - pitch0;
% %     motoroutback = pi/2 + pitch0;
% end
