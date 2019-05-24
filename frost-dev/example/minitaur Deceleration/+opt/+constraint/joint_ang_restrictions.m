function joint_ang_restrictions(nlp, bounds, legs)
% constraints for step length and step width

domain = nlp.Plant;

x = domain.States.x;
dx = domain.States.dx;
% joint_ang_constr = [];
% 
% lb_pos = -pi/3;
% ub_pos = 0;
% lb_vel = -10;
% ub_vel = 10;
% 
% 
% lb_vec = [];
% ub_vec = [];
% 
% if ismember(0,legs)
%     joint_ang_constr = [joint_ang_constr; x('motor_front_leftR_joint') - x('motor_front_leftL_joint')];
%     joint_ang_constr = [joint_ang_constr; dx('motor_front_leftR_joint') - dx('motor_front_leftL_joint')];
%     lb_vec = [lb_vec; lb_pos; lb_vel];
%     ub_vec = [ub_vec; ub_pos; ub_vel];
% end
% if ismember(1,legs)
%     joint_ang_constr = [joint_ang_constr; x('motor_back_leftR_joint') - x('motor_back_leftL_joint')];
%     joint_ang_constr = [joint_ang_constr; dx('motor_back_leftR_joint') - dx('motor_back_leftL_joint')];
%     lb_vec = [lb_vec; lb_pos; lb_vel];
%     ub_vec = [ub_vec; ub_pos; ub_vel];
% end
% if ismember(2,legs)
%     joint_ang_constr = [joint_ang_constr;  x('motor_front_rightL_joint') - x('motor_front_rightR_joint')];
%     joint_ang_constr = [joint_ang_constr; dx('motor_front_rightL_joint') - dx('motor_front_rightR_joint')];
%     lb_vec = [lb_vec; lb_pos; lb_vel];
%     ub_vec = [ub_vec; ub_pos; ub_vel];
% end
% if ismember(3,legs)
%     joint_ang_constr = [joint_ang_constr; x('motor_back_rightL_joint') - x('motor_back_rightR_joint')];
%     joint_ang_constr = [joint_ang_constr; dx('motor_back_rightL_joint') - dx('motor_back_rightR_joint')];
%     lb_vec = [lb_vec; lb_pos; lb_vel];
%     ub_vec = [ub_vec; ub_pos; ub_vel];
% end
% 
% ang_fun = SymFunction(['jointAngMinimum_', nlp.Name], joint_ang_constr, {x,dx});
% addNodeConstraint(nlp, ang_fun, {'x', 'dx'}, 'all', ...
%     lb_vec,ub_vec, 'Linear');

joint_ang_constr = [];
if ismember(0,legs)
    joint_ang_constr = [joint_ang_constr; dx('motor_front_leftL_joint')
        dx('motor_front_leftR_joint')
        dx('knee_front_leftL_link')
        dx('knee_front_leftR_link')];
end
if ismember(1,legs)
    joint_ang_constr = [joint_ang_constr; dx('motor_back_leftL_joint')
        dx('motor_back_leftR_joint')
        dx('knee_back_leftL_link')
        dx('knee_back_leftR_link')];
end
if ismember(2,legs)
    joint_ang_constr = [joint_ang_constr; dx('motor_front_rightL_joint')
        dx('motor_front_rightR_joint')
        dx('knee_front_rightL_link')
        dx('knee_front_rightR_link')];
end
if ismember(3,legs)
    joint_ang_constr = [joint_ang_constr; dx('motor_back_rightL_joint')
        dx('motor_back_rightR_joint')
        dx('knee_back_rightL_link')
        dx('knee_back_rightR_link')];
end

ang_fun = SymFunction(['jointAngMinimum_', nlp.Name], joint_ang_constr, {dx});
addNodeConstraint(nlp, ang_fun, {'dx'}, 'all', ...
    -45,45, 'Linear'); % -2.5,2.5, 'Linear');


end