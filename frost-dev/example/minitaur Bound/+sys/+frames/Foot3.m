function [foot, fric_coef] = Foot3(robot)
  
    knee_3_frame = robot.Joints(getJointIndices(robot, 'knee_back_rightR_link'));
    foot = ContactFrame(...
        'Name','Foot3',...
        'Reference',knee_3_frame,...
        'Offset',[0, 0, 0.24],...
        'R',[0,0,0],... % z-axis is the normal axis, so no rotation required
        'Type','PointContactWithFriction'...
        );
    
    fric_coef.mu = 0.1;
    fric_coef.gamma = 100;
end