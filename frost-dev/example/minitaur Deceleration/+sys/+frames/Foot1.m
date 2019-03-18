function [foot, fric_coef] = Foot1(robot)
  
    knee_1_frame = robot.Joints(getJointIndices(robot, 'knee_back_leftL_link'));
    foot = ContactFrame(...
        'Name','Foot1',...
        'Reference',knee_1_frame,...
        'Offset',[0, 0, 0.24],...
        'R',[0,0,0],... % z-axis is the normal axis, so no rotation required
        'Type','PointContactWithFriction'...
        );
    
    fric_coef.mu = 0.5;
    fric_coef.gamma = 100;
end