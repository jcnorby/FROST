function robot = LoadModel(urdf, load_path, delay_set)
    % construct RobotLinks object for Minitaur
    
    if nargin < 2
        load_path = [];
    end
    
    if nargin < 1
        cur = utils.get_root_path();
        urdf = fullfile(cur,'urdf','minitaur.urdf');
    end
    
    if nargin < 3
        delay_set = false;
    end
    
    base = get_base_dofs('floating');
    
    limits = [base.Limit];
    
%     [limits.lower] = deal(0, -10, 0.1, -.5, -1, -0.5);
%     [limits.upper] = deal(5, 10, 1.5, .5, 1, 0.5);
%     [limits.lower] = deal(-10, 0, 0.1, 0, -pi, 0);
%     [limits.upper] = deal(10, 0, 3, 0, pi, 0);
    [limits.lower] = deal(-10, -10, -10, -10, -10, -10);
    [limits.upper] = deal(10, 10, 10, 10, 10, 10);
%     [limits.velocity] = deal(10, 10, 10, 10, 10, 10);
    [limits.effort] = deal(0);
    for i=1:6
        base(i).Limit = limits(i);
    end
    robot = RobotLinks(urdf, base);
    
    
    % Add fixed base holonomic constraint
    q = robot.States.x;
    
    fb = [q('BasePosX'); q('BasePosY'); q('BasePosZ')];
    
    fixedbase_constr = HolonomicConstraint(robot, fb, 'Fixedbase',...
        'ConstrLabel',{{'fbx','fby','fbz'}},...
        'DerivativeOrder',2, 'LoadPath', load_path);
    
    robot = addHolonomicConstraint(robot, fixedbase_constr, load_path);
    
    if isempty(load_path)
        configureDynamics(robot, 'DelayCoriolisSet', delay_set);
    else
        loadDynamics(robot, load_path, delay_set);
    end
end

