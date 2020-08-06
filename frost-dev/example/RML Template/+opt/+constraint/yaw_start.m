function init_state(nlp, bounds)
    % constraints for step length and step width
    
    domain = nlp.Plant;

    x = domain.States.x;
    dx = domain.States.dx;
    
    initPos = [x('BasePosX')
        x('BasePosY')
        x('BasePosZ') - 1.5
        x('BaseRotX')
        x('BaseRotY')
        x('BaseRotZ')];
        
    initVel = dx;
    initState = SymFunction('initState', [initPos; initVel], {x,dx});
    addNodeConstraint(nlp, initState, {'x','dx'}, 'first',  ...
        0,0,'Linear');
    
end

