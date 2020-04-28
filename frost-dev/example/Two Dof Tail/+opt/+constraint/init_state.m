function init_state(nlp, bounds)
% constraints for the initial state

domain = nlp.Plant;

x = domain.States.x;
dx = domain.States.dx;

initPos = [x('BaseRotX')
    x('BaseRotY')
    x('BaseRotZ')
    x('tail_joint_1')
    x('tail_joint_2')];

initVel = [dx('BaseRotX')
    dx('BaseRotY')
    dx('BaseRotZ') - 0.5
    dx('tail_joint_1')
    dx('tail_joint_2')];


initState = SymFunction('initState', [initPos; initVel], {x,dx});
addNodeConstraint(nlp, initState, {'x','dx'}, 'first',  ...
    0,0,'Linear');



end

