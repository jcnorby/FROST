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

global bAerodynamic
global bTail

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



% Add 4-bar holonomic constraint
q = robot.States.x;

% fb = [q('BasePosX'); q('BasePosY'); q('BasePosZ') - 0.2; q('BaseRotX'); q('BaseRotY'); q('BaseRotZ')];

% fixedbase_constr = HolonomicConstraint(robot, fb, 'Fixedbase',...
%     'ConstrLabel',{{'fbx','fby','fbz','fbr','fbp','fby'}},...
%     'DerivativeOrder',2, 'LoadPath', load_path);

% robot = addHolonomicConstraint(robot, fixedbase_constr, load_path);

    l1 = 0.1;
    l2 = 0.2;

    h0c = l1*cos(q('motor_front_leftL_joint')) - l2*cos(q('motor_front_leftL_joint') - q('knee_front_leftL_link')) ...
        - (l1*cos(q('motor_front_leftR_joint')) - l2*cos(q('motor_front_leftR_joint') - q('knee_front_leftR_link')));

    h1c = l1*cos(q('motor_back_leftL_joint')) - l2*cos(q('motor_back_leftL_joint') - q('knee_back_leftL_link')) ...
        - (l1*cos(q('motor_back_leftR_joint')) - l2*cos(q('motor_back_leftR_joint') - q('knee_back_leftR_link')));

    h2c = l1*cos(q('motor_front_rightL_joint')) - l2*cos(q('motor_front_rightL_joint') - q('knee_front_rightL_link')) ...
        - (l1*cos(q('motor_front_rightR_joint')) - l2*cos(q('motor_front_rightR_joint') - q('knee_front_rightR_link')));

    h3c = l1*cos(q('motor_back_rightL_joint')) - l2*cos(q('motor_back_rightL_joint') - q('knee_back_rightL_link')) ...
        - (l1*cos(q('motor_back_rightR_joint')) - l2*cos(q('motor_back_rightR_joint') - q('knee_back_rightR_link')));

    h0s = l1*sin(q('motor_front_leftL_joint')) - l2*sin(q('motor_front_leftL_joint') - q('knee_front_leftL_link')) ...
        + (l1*sin(q('motor_front_leftR_joint')) - l2*sin(q('motor_front_leftR_joint') - q('knee_front_leftR_link')));

    h1s = l1*sin(q('motor_back_leftL_joint')) - l2*sin(q('motor_back_leftL_joint') - q('knee_back_leftL_link')) ...
        + (l1*sin(q('motor_back_leftR_joint')) - l2*sin(q('motor_back_leftR_joint') - q('knee_back_leftR_link')));

    h2s = l1*sin(q('motor_front_rightL_joint')) - l2*sin(q('motor_front_rightL_joint') - q('knee_front_rightL_link')) ...
        + (l1*sin(q('motor_front_rightR_joint')) - l2*sin(q('motor_front_rightR_joint') - q('knee_front_rightR_link')));

    h3s = l1*sin(q('motor_back_rightL_joint')) - l2*sin(q('motor_back_rightL_joint') - q('knee_back_rightL_link')) ...
        + (l1*sin(q('motor_back_rightR_joint')) - l2*sin(q('motor_back_rightR_joint') - q('knee_back_rightR_link')));

    h = [h0c; h1c; h2c; h3c; h0s; h1s; h2s; h3s];


    four_bar_constr = HolonomicConstraint(robot, h, 'fourBar',...
        'ConstrLabel',{{'Leg0cos','Leg1cos','Leg2cos','Leg3cos','Leg0sin','Leg1sin','Leg2sin','Leg3sin'}},...
        'DerivativeOrder',2, 'LoadPath', load_path);

    robot = addHolonomicConstraint(robot, four_bar_constr, load_path);
%
%     d = SymVariable('d');
%     robot = addParam(robot, 'd', d);

    tfinal = SymVariable('tfinal');
    robot = addParam(robot, 'tfinal', tfinal);

    
%     if robot.numState > 22
    if bTail
        R = SymVariable('r');
        robot = addParam(robot, 'r', R);
        
        uRIL = SymVariable('uril');
        gVec = zeros(robot.numState, 1);
        gVec(robot.getJointIndices('tail_joint')) = 1;
        robot = addInput(robot, 'External','uReflectedInertiaLoad', uRIL, gVec);
        
        uRIB = SymVariable('urib');
        gVec = zeros(robot.numState, 1);
        gVec(robot.getJointIndices('BaseRotY')) = 1;
        robot = addInput(robot, 'External','uReflectedInertiaBody', uRIB, gVec);
    end
    
    if bAerodynamic
        fDrag = SymVariable('fDrag');
        
        jac = getBodyJacobian(robot, sys.frames.TailMass(robot), [0,0,0]);
        gVec = jac'*[1;0;0;0;0;0];
        
        robot = addInput(robot, 'External','fDrag', fDrag, gVec);
    end

%     kp = SymVariable('kp');
%     robot = addParam(robot, 'kp', kp);
%
%     kd = SymVariable('kd');
%     robot = addParam(robot, 'kd', kd);
%
%     qDes = SymVariable('qDes');
%     robot = addParam(robot, 'qDes', qDes);

% Generate leg Jacobian
% posFoot0 = getCartesianPosition(robot, sys.frames.Foot0(robot));
% posFoot1 = getCartesianPosition(robot, sys.frames.Foot1(robot));
% posFoot2 = getCartesianPosition(robot, sys.frames.Foot2(robot));
% posFoot3 = getCartesianPosition(robot, sys.frames.Foot3(robot));
% 
% posFeet = [posFoot0;posFoot1;posFoot2;posFoot3];
% posFeetfun = SymFunction('computeFeetPos', posFeet, robot.States.x)
% export(posFeetfun, 'process');


% J_posFoot0 = jacobian(posFoot0, robot.States.x);
% J_posFoot1 = jacobian(posFoot1, robot.States.x);
% J_posFoot2 = jacobian(posFoot2, robot.States.x);
% J_posFoot3 = jacobian(posFoot3, robot.States.x);
% J = [J_posFoot0;J_posFoot1;J_posFoot2;J_posFoot3];
% 
% Jfun = SymFunction('computeJacobian', J, robot.States.x)
% footVels = Jfun*robot.States.dx;
% footVelsFun = SymFunction('computeFeetVelocity', footVels, {robot.States.x,robot.States.dx})
% export(footVelsFun, 'process');

% % Generate tail mass velocity function
%     x = robot.States.x;
%     dx = robot.States.dx;
%     ddx = robot.States.ddx;
%     posCOM = {robot.States.x(1:3)};
%     posBase = getCartesianPosition(robot, sys.frames.TailBase(robot));
%     posTail = getCartesianPosition(robot, sys.frames.TailMass(robot));
%     velTail = jacobian(posTail,robot.States.x)*robot.States.dx;
%     rBaseRel = posBase - posCOM;
%     rTailRel = posTail - posBase;
%
%     COMAccel = ddx(1:3);
%     baseAccelRel = transpose(cross([0;ddx(5);0], rBaseRel) + cross([0;dx(5);0],cross([0;dx(5);0],rBaseRel)));
%     massAccelRel = transpose(cross([0;ddx(end);0], rTailRel) + cross([0;dx(end);0],cross([0;dx(end);0],rTailRel)));
%
%     massAccel = COMAccel + baseAccelRel + massAccelRel;
%     massfun = SymFunction('tailMassAccelFun', massAccel, {x, dx, ddx});
%     massvelfun = SymFunction('tailMassVelFun', velTail, {x, dx});
%     rBaseRelfun = SymFunction('rBaseRelFun', rBaseRel, {x});
%     export(rBaseRelfun, 'process');


if isempty(load_path)
    configureDynamics(robot, 'DelayCoriolisSet', delay_set);
else
    loadDynamics(robot, load_path, delay_set);
end
end

