function body_height(nlp)
% constraints for foot clearance

% Grab the symbolic variables for the states
domain = nlp.Plant;
x = domain.States.x;

body_corner_0 = sys.frames.BodyCorner0(domain);
body_corner_1 = sys.frames.BodyCorner1(domain);
body_corner_2 = sys.frames.BodyCorner2(domain);
body_corner_3 = sys.frames.BodyCorner3(domain);

body_clearance = [body_corner_0; body_corner_1; body_corner_2; body_corner_3];

% Compute the function for the knee height
p_body_clearance = getCartesianPosition(domain, body_clearance);
body_height = p_body_clearance(:,3);
body_height_fun = SymFunction('bodyHeight', body_height, {x});
addNodeConstraint(nlp, body_height_fun, {'x'}, 'all', ...
        0.05,10,'Nonlinear');

end

