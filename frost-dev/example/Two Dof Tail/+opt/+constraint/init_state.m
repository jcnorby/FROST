function init_state(nlp, bounds)
% constraints for the initial state

domain = nlp.Plant;

x = domain.States.x;
dx = domain.States.dx;

initPos = [x('BasePosX')
    x('BasePosY')
    x('BaseRotZ')];

initVel = [dx('BasePosX') - 0.5
    dx('BasePosY')
    dx('BaseRotZ')];


initState = SymFunction('initState', [initPos; initVel], {x,dx});
addNodeConstraint(nlp, initState, {'x','dx'}, 'first',  ...
    0,0,'Linear');



end

