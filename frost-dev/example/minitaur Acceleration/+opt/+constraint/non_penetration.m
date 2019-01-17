function non_penetration(nlp, bounds, feet)
% constraints for foot clearance

domain = nlp.Plant;
x = domain.States.x;

%     p_foot0 = getCartesianPosition(domain, Foot0);
%     p_foot1 = getCartesianPosition(domain, Foot1);
%     p_foot2 = getCartesianPosition(domain, Foot2);
%     p_foot3 = getCartesianPosition(domain, Foot3);
%     feet_height = [p_foot0(3);p_foot1(3);p_foot2(3);p_foot3(3)];

p_feet = getCartesianPosition(domain, feet);
feet_height = p_feet(:,3);
feet_height_fun = SymFunction(['nonPenetration_', nlp.Name], feet_height, {x});

if strcmp(nlp.Name, 'FrontStance') || strcmp(nlp.Name, 'BackStance') || strcmp(nlp.Name, 'Stance')
    addNodeConstraint(nlp, feet_height_fun, {'x'}, 'all', ...
        0,0,'Nonlinear');

else
    addNodeConstraint(nlp, feet_height_fun, {'x'}, 3:nlp.NumNode-2, ...
        bounds.constrBounds.footHeight.lb, ...
        bounds.constrBounds.footHeight.ub,'Nonlinear');
    
    addNodeConstraint(nlp, feet_height_fun, {'x'}, 1:2, ...
        [bounds.constrBounds.footHeight.lb;bounds.constrBounds.footHeight.lb;0;0], ...
        [bounds.constrBounds.footHeight.ub;bounds.constrBounds.footHeight.ub;0;0],'Nonlinear');
    
    addNodeConstraint(nlp, feet_height_fun, {'x'}, nlp.NumNode-1:nlp.NumNode, ...
        [0;0;bounds.constrBounds.footHeight.lb;bounds.constrBounds.footHeight.lb], ...
        [0;0;bounds.constrBounds.footHeight.ub;bounds.constrBounds.footHeight.ub],'Nonlinear');
    
end

end

