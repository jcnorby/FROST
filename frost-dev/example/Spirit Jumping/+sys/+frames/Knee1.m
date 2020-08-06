function [knee, fric_coef] = Knee1(robot)
  
    knee_0_frame = robot.Joints(getJointIndices(robot, 'j3'));
    knee = ContactFrame(...
        'Name','Knee0',...
        'Reference',knee_0_frame,...
        'Offset',[0, 0, 0],...
        'R',[0,0,0],... % z-axis is the normal axis, so no rotation required
        'Type','PointContactWithFriction'...
        );
    
    fric_coef.mu = 0.5;
    fric_coef.gamma = 100;
end