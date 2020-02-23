function robot = LoadModel(urdf, load_path, delay_set)
% construct RobotLinks object for Minitaur

if nargin < 2
    load_path = [];
end

if nargin < 1
    cur = utils.get_root_path();
    urdf = fullfile(cur,'urdf','vision60.urdf');
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
% [limits.lower] = deal(-10, -10, 0, -pi/2, -pi/2, -pi);
% [limits.upper] = deal(10, 10, 10, pi/2, pi/2, pi);
[limits.lower] = deal(-10, -10, 0, 0, 0, 0);
[limits.upper] = deal(10, 10, 10, 0, 0, 0);
%     [limits.velocity] = deal(10, 10, 10, 10, 10, 10);
[limits.effort] = deal(0);
for i=1:6
    base(i).Limit = limits(i);
end
% robot = RobotLinks(urdf, base,[],'removeFixedJoints', true);
robot = RobotLinks(urdf, base);

% Generate leg Jacobian
posFoot0 = getCartesianPosition(robot, sys.frames.Foot0(robot));
posFoot1 = getCartesianPosition(robot, sys.frames.Foot1(robot));
posFoot2 = getCartesianPosition(robot, sys.frames.Foot2(robot));
posFoot3 = getCartesianPosition(robot, sys.frames.Foot3(robot));

posFeet = [posFoot0;posFoot1;posFoot2;posFoot3];
dofs = SymVariable('x', [22,1]);
posFeetfun = SymFunction('computeFeetPos', posFeet, dofs);
export(posFeetfun, 'process');


% J_posFoot0 = jacobian(posFoot0, robot.States.x);
% J_posFoot1 = jacobian(posFoot1, robot.States.x);
% J_posFoot2 = jacobian(posFoot2, robot.States.x);
% J_posFoot3 = jacobian(posFoot3, robot.States.x);
% J = [J_posFoot0;J_posFoot1;J_posFoot2;J_posFoot3];
% 
% Jfun = SymFunction('computeJacobian', J, robot.States.x);
% footVels = Jfun*robot.States.dx;
% footVelsFun = SymFunction('computeFeetVelocity', footVels, {robot.States.x,robot.States.dx});
% export(footVelsFun, 'process');

if isempty(load_path)
    configureDynamics(robot, 'DelayCoriolisSet', delay_set);
else
    loadDynamics(robot, load_path, delay_set);
end
end

