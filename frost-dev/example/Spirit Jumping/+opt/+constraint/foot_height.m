function foot_height(nlp, feet, phase)
% constraints for foot clearance

% Grab the symbolic variables for the states
domain = nlp.Plant;
x = domain.States.x;
dx = domain.States.dx;

% Compute the function for the foot height
p_feet = getCartesianPosition(domain, feet);
feet_height = p_feet(:,3);
feet_height_fun = SymFunction(['footHeight_', nlp.Name], feet_height, {x});

J = jacobian(p_feet(:), x);
Jfun = SymFunction('computeJacobian', J, x);
footVels = Jfun*dx;
footVelsFun = SymFunction(['footVelocity_', nlp.Name], footVels, {x,dx});


% Add foot height constraints with applied nodes and bounds based on the
% phase of those feet
ub = inf;
if strcmp(phase, 'stance')
    addNodeConstraint(nlp, feet_height_fun, {'x'}, 'all', ...
        0,0,'Nonlinear');
%     addNodeConstraint(nlp, footVelsFun, {'x', 'dx'}, 'first', ...
%         0,0,'Nonlinear');
elseif strcmp(phase, 'swing')
    addNodeConstraint(nlp, feet_height_fun, {'x'}, 'all', ...
        0,ub,'Nonlinear');
elseif strcmp(phase, 'stance_to_swing')
    addNodeConstraint(nlp, feet_height_fun, {'x'}, 'first', ...
        0,0,'Nonlinear');
    addNodeConstraint(nlp, feet_height_fun, {'x'}, 'except-first', ...
        0,ub,'Nonlinear');
elseif strcmp(phase, 'swing_to_stance')
    addNodeConstraint(nlp, feet_height_fun, {'x'}, 'except-last', ...
        0,ub,'Nonlinear');
    addNodeConstraint(nlp, feet_height_fun, {'x'}, 'last', ...
        0,0,'Nonlinear');
elseif strcmp(phase, 'stance_to_stance')
    addNodeConstraint(nlp, feet_height_fun, {'x'}, 'first', ...
        0,0,'Nonlinear');
    addNodeConstraint(nlp, feet_height_fun, {'x'}, 'except-terminal', ...
        0,ub,'Nonlinear');
    addNodeConstraint(nlp, feet_height_fun, {'x'}, 'last', ...
        0,0,'Nonlinear');
else
    error('Invalid foot phase type.');
end


end

