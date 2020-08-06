function is_valid = isValidState(state, phase)

H_MIN = 0.05;
H_MAX = 0.6;
V_MAX = 4.0;
P_MAX = 0.5;

ROBOT_L = 0.6;
ROBOT_W = 0.256;
ROBOT_H = 0.2;

if (sqrt(state(4)*state(4) + state(5)*state(5) + state(6)*state(6)) > V_MAX)
    is_valid = false;
    return;
end

if (abs(state(7)) >= P_MAX)
    is_valid = false;
    return;
end

yaw = atan2(state(5),state(4)); cy = cos(yaw); sy = sin(yaw);
pitch = state(7); cp = cos(pitch); sp = sin(pitch);

% Compute each element of the rotation matrix
R_11 = cy*cp; R_12 = -sy; R_13 = cy*sp;
R_21 = sy*cp; R_22 = cy;  R_23 = sy*sp;
R_31 = -sp;   R_32 = 0;   R_33 = cp;

test_x = [-0.5*ROBOT_L, 0.5*ROBOT_L];
test_y = [-0.5*ROBOT_W, 0.5*ROBOT_W];
z_body = -0.5*ROBOT_H;

% Check each of the four corners of the robot
for i = 1:length(test_x)
    x_body = test_x(i);
    for  j = 1:length(test_y)
        y_body = test_y(j);
        
%         x_leg = state(1) + R_11*x_body + R_12*y_body;
%         y_leg = state(2) + R_21*x_body + R_22*y_body;
        z_leg = state(3) + R_31*x_body + R_32*y_body;
        
%         x_corner = x_leg + R_13*z_body;
%         y_corner = y_leg + R_23*z_body;
        z_corner = z_leg + R_33*z_body;
                
        % Always check for collision, only check reachability in stance
        if ((z_corner < H_MIN) || (strcmp(phase, 'STANCE') && (z_leg > H_MAX)))
            is_valid = false;
            return;
        end
    end
end

height = (state(3) + R_33*z_body);
if (height < H_MIN)
    is_valid = false;
    return;
end


is_valid = true;


% if strcmp(phase, 'STANCE')
%     if (state(3) >= H_MIN) && (state(3) <= H_MAX)
%         is_valid = true;
%     else
%         is_valid = false;
%     end
% elseif strcmp(phase, 'FLIGHT')
%     if (state(3) >= H_MIN)
%         is_valid = true;
%     else
%         is_valid = false;
%     end
% else
%     error('Invalid phase specified');
% end