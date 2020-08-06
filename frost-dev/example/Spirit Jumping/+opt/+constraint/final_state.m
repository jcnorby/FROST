function final_state(nlp, bounds)

domain = nlp.Plant;

x = domain.States.x;
dx = domain.States.dx;

% q0 = zeros(22,1);
% q0([8,12,16,20]) = 0.5;
% q0([9,13,17,21]) = 1.0;
% feet_pos = computeFeetPos(q0);
% q0(3) = -feet_pos(1,3);
% dq0 = zeros(22,1);
% x0 = [q0; dq0];
% 
% finalPos = x-q0;
% finalVel = dx-dq0;

% finalPos = [x('BasePosZ')-0.45;
%     x('BaseRotX');
%     x('BaseRotY');
%     x('BaseRotZ')];
% finalVel = [dx('BasePosZ');
%     dx('BaseRotX');
%     dx('BaseRotY');
%     dx('BaseRotZ')];

finalPos = [x('BasePosZ')-0.5];

% initState = SymFunction('finalState', [finalPos; finalVel], {x,dx});
finalState = SymFunction('finalState', [finalPos], {x});
addNodeConstraint(nlp, finalState, {'x'}, 'last',  ...
    0,inf,'Linear');

end

