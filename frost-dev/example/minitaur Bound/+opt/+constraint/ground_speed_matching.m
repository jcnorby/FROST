function ground_speed_matching(nlp, bounds)
% constraints for impact velocities

% return;
domain = nlp.Plant;
x = domain.States.x;
dx = domain.States.dx;

Foot0 = sys.frames.Foot0(domain);
Foot1 = sys.frames.Foot1(domain);
Foot2 = sys.frames.Foot2(domain);
Foot3 = sys.frames.Foot3(domain);

pos0 = getCartesianPosition(domain, Foot0);
pos1 = getCartesianPosition(domain, Foot1);
pos2 = getCartesianPosition(domain, Foot2);
pos3 = getCartesianPosition(domain, Foot3);
J_pos = jacobian([pos0'; pos1'; pos2'; pos3'], x);

footVel = J_pos * dx;

epsilon = 1e-4;
cutoffHeight = 0.01; % foot height in m below which foot speed must approach 0 (allowed to be 1 m/s at this height)

gsm_func_pos = [footVel(1) - ((pos0(3)/cutoffHeight).^3 + epsilon); footVel(4) - ((pos1(3)/cutoffHeight).^3 + epsilon)];
gsm_func_neg = [-footVel(1) - ((pos0(3)/cutoffHeight).^3 + epsilon); -footVel(4) - ((pos1(3)/cutoffHeight).^3 + epsilon)];
gsm = [gsm_func_pos; gsm_func_neg];
gsm_func = SymFunction('gsm', gsm, {x, dx});
addNodeConstraint(nlp, gsm_func, {'x','dx'}, 'all', -Inf, 0, 'NonLinear');


%     foot0Contact = domain.Inputs.External.foot0Contact;
%     foot1Contact = domain.Inputs.External.foot1Contact;
%     foot2Contact = domain.Inputs.External.foot2Contact;
%     foot3Contact = domain.Inputs.External.foot3Contact;
%     foot0normalforce = foot0Contact(3);
%     foot1normalforce = foot1Contact(3);
%     foot2normalforce = foot2Contact(3);
%     foot3normalforce = foot3Contact(3);
%
%     footForces = [foot0normalforce;foot0normalforce;foot0normalforce;...
%         foot1normalforce;foot1normalforce;foot1normalforce;...
%         foot2normalforce;foot2normalforce;foot2normalforce;...
%         foot3normalforce;foot3normalforce;foot3normalforce];
%
%     pos0 = getCartesianPosition(domain, Foot0);
%     pos1 = getCartesianPosition(domain, Foot1);
%     pos2 = getCartesianPosition(domain, Foot2);
%     pos3 = getCartesianPosition(domain, Foot3);
%     J_pos = jacobian([pos0'; pos1'; pos2'; pos3'], x);
%
%     footVel = J_pos * dx;
%
%     no_slip = footVel.*footForces;
%     no_slip_func = SymFunction('noSlip', no_slip, {x, dx, foot0Contact, foot1Contact, foot2Contact, foot3Contact});
%
%     lb = bounds.constrBounds.noSlip.lb;
%     ub = bounds.constrBounds.noSlip.ub;
%     addNodeConstraint(nlp, no_slip_func, {'x','dx','foot0Contact','foot1Contact','foot2Contact','foot3Contact'}, 'all', lb, ub, 'NonLinear');

end
