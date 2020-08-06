function [bodycorner3, fric_coef] = BodyCorner3(robot)
  
    body_length = 0.6;
    body_width = 0.256;
    body_height = 0.20;

    body_frame = robot.Links(getLinkIndices(robot, 'body'));
    bodycorner3 = ContactFrame(...
        'Name','BodyCorner3',...
        'Reference',body_frame,...
        'Offset',[-body_length/2, -body_width/2, -body_height/2],...
        'R',[0,0,0],... % z-axis is the normal axis, so no rotation required
        'Type','PointContactWithFriction'...
        );
    
    fric_coef.mu = 0.5;
    fric_coef.gamma = 100;
end