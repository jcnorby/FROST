function [tailBase, fric_coef] = TailBase(robot)

robot_base_frame = robot.Links(getLinkIndices(robot, 'base_chassis_link'));
tail_joint_frame = robot.Joints(getJointIndices(robot, 'tail_joint'));

tailBase = CoordinateFrame(...
    'Name','TailBase',...
    'Reference',robot_base_frame,...
    'Offset',tail_joint_frame.Offset,...
    'R',[0,0,0]... % z-axis is the normal axis, so no rotation required
    );

fric_coef.mu = 0.6;
fric_coef.gamma = 100;
end