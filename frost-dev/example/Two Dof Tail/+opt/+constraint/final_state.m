function final_state(nlp, bounds)
% constraints for the initial state

domain = nlp.Plant;

x = domain.States.x;
dx = domain.States.dx;

finalPos = [x('BaseRotX')
    x('BaseRotY')
    x('BaseRotZ')];

finalVel = [dx('BaseRotX')
    dx('BaseRotY')
    dx('BaseRotZ')
    dx('tail_joint_1')
    dx('tail_joint_2')];


finalState = SymFunction('finalState', [finalPos; finalVel], {x,dx});
addNodeConstraint(nlp, finalState, {'x','dx'}, 'last',  ...
    0,0,'Linear');
end

