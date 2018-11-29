
function domain = Flight(model, load_path)
    % construct the back stance domain of Minitaur
    
    %% first make a copy of the robot model
    %| @note Do not directly assign with the model variable, since it is a
    %handle object.
    domain = copy(model);
    % set the name of the new copy
    domain.setName('Flight');
    
    % Extract state variables
    q = domain.States.x;
    
    if nargin < 2
        load_path = [];
    end
       
    %% Add events
    % height of non-stance foot (left front toe)
    [foot0_frame] = sys.frames.Foot0(model);
    p0_swingFoot = getCartesianPosition(domain, foot0_frame);
    h_nsf0 = UnilateralConstraint(domain,p0_swingFoot(3),'Foot0Height','x');
    domain = addEvent(domain, h_nsf0);
    
    % height of non-stance foot (left back toe)
    [foot1_frame] = sys.frames.Foot1(model);
    p1_swingFoot = getCartesianPosition(domain, foot1_frame);
    h_nsf1 = UnilateralConstraint(domain,p1_swingFoot(3),'Foot1Height','x');
    domain = addEvent(domain, h_nsf1);
   
   
end
    

