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

% % USE THIS FOR FLIGHT FRONT FLIGHT BACK
% if strcmp(nlp.Name, 'FrontStance') || strcmp(nlp.Name, 'BackStance')
% %     addNodeConstraint(nlp, feet_height_fun, {'x'}, 'all', ...
% %         0.01, ...
% %         bounds.constrBounds.footHeight.ub,'Nonlinear');
%
%     N = 17; % Has to be odd
%
%     N1 = (nlp.NumNode - N)/2;
%
%     addNodeConstraint(nlp, feet_height_fun, {'x'}, N1+1:nlp.NumNode-N1, ...
%         0.00, ...
%         bounds.constrBounds.footHeight.ub,'Nonlinear');
%
%     if N1 ~= 0
%         addNodeConstraint(nlp, feet_height_fun, {'x'}, 1:N1, ...
%             0, ...
%             bounds.constrBounds.footHeight.ub,'Nonlinear');
%
%         addNodeConstraint(nlp, feet_height_fun, {'x'}, nlp.NumNode-N1+1:nlp.NumNode, ...
%             0, ...
%             bounds.constrBounds.footHeight.ub,'Nonlinear');
%     end
% elseif ~strcmp(nlp.Name, 'DoubleToBack')
%     addNodeConstraint(nlp, feet_height_fun, {'x'}, 2:nlp.NumNode-1, ...
%         bounds.constrBounds.footHeight.lb, ...
%         bounds.constrBounds.footHeight.ub,'Nonlinear');
%
%     addNodeConstraint(nlp, feet_height_fun, {'x'}, 1, ...
%         [bounds.constrBounds.footHeight.lb;bounds.constrBounds.footHeight.lb;0;0], ...
%         [bounds.constrBounds.footHeight.ub;bounds.constrBounds.footHeight.ub;0;0],'Nonlinear');
%
%     addNodeConstraint(nlp, feet_height_fun, {'x'}, nlp.NumNode, ...
%         [0;0;bounds.constrBounds.footHeight.lb;bounds.constrBounds.footHeight.lb], ...
%         [0;0;bounds.constrBounds.footHeight.ub;bounds.constrBounds.footHeight.ub],'Nonlinear');
%
% end

% % USE THIS FOR INSTANTANEOUS SWITCH

N = 13; % Has to be odd

N1 = (nlp.NumNode - N)/2;

addNodeConstraint(nlp, feet_height_fun, {'x'}, N1+1:nlp.NumNode-N1, ...
    0.02, ... % 0.02
    bounds.constrBounds.footHeight.ub,'Nonlinear');


addNodeConstraint(nlp, feet_height_fun, {'x'}, 2:N1, ...
    0, ...
    bounds.constrBounds.footHeight.ub,'Nonlinear');

addNodeConstraint(nlp, feet_height_fun, {'x'}, nlp.NumNode-N1+1:nlp.NumNode-1, ...
    0, ...
    bounds.constrBounds.footHeight.ub,'Nonlinear');


% addNodeConstraint(nlp, feet_height_fun, {'x'}, 2:nlp.NumNode-1, ...
%     bounds.constrBounds.footHeight.lb, ...
%     bounds.constrBounds.footHeight.ub,'Nonlinear');

addNodeConstraint(nlp, feet_height_fun, {'x'}, 1, ...
    [0;0], ...
    [0;0],'Nonlinear');

addNodeConstraint(nlp, feet_height_fun, {'x'},  nlp.NumNode, ...
    [0;0], ...
    [0;0],'Nonlinear');

end

