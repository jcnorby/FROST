function init_state(nlp, bounds)

domain = nlp.Plant;

x = domain.States.x;
dx = domain.States.dx;

q0 = zeros(22,1);
q0([8,12,16,20]) = 0.5;
q0([9,13,17,21]) = 1.0;
feet_pos = computeFeetPos(q0);
q0(3) = -feet_pos(1,3);
dq0 = zeros(22,1);
x0 = [q0; dq0];

initPos = x-q0;
initVel = dx-dq0;

initState = SymFunction('initState', [initPos; initVel], {x,dx});
addNodeConstraint(nlp, initState, {'x','dx'}, 'first',  ...
    0,0,'Linear');



end

