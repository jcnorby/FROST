function final_state(nlp, bounds)
% constraints for the initial state

domain = nlp.Plant;

x = domain.States.x;
dx = domain.States.dx;

finalPos = [x('BasePosX')
    x('BasePosY')
    x('BaseRotZ')];

finalVel = [dx('BasePosX')
    dx('BasePosY')
    dx('BaseRotZ')];


finalState = SymFunction('finalState', [finalPos; finalVel], {x,dx});
addNodeConstraint(nlp, finalState, {'x','dx'}, 'last',  ...
    0,0,'Linear');
end

