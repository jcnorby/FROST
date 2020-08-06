function knee_height(nlp)
% constraints for foot clearance

% Grab the symbolic variables for the states
domain = nlp.Plant;
x = domain.States.x;

knee0 = sys.frames.Knee0(domain);
knee1 = sys.frames.Knee1(domain);
knee2 = sys.frames.Knee2(domain);
knee3 = sys.frames.Knee3(domain);

knees = [knee0; knee1; knee2; knee3];

% Compute the function for the knee height
p_knees = getCartesianPosition(domain, knees);
knee_height = p_knees(:,3);
knee_height_fun = SymFunction('kneeHeight', knee_height, {x});
addNodeConstraint(nlp, knee_height_fun, {'x'}, 'all', ...
        0,10,'Nonlinear');

end

