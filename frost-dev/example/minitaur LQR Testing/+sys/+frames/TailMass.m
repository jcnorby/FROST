function [tailMass, fric_coef] = TailMass(robot)

tail_joint_frame = robot.Joints(getJointIndices(robot, 'tail_joint'));
tail_mass_frame = robot.Links(getLinkIndices(robot, 'tail_link'));

tailMass = CoordinateFrame(...
    'Name','TailMass',...
    'Reference',tail_joint_frame,...
    'Offset',tail_mass_frame.Offset,...
    'R',[0,0,0]... % z-axis is the normal axis, so no rotation required
    );

fric_coef.mu = 0.6;
fric_coef.gamma = 100;
end