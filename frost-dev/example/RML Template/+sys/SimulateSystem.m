function logger = SimulateSystem(system, robot)
% Simulate the hybrid system. Change this code to select the desired
% initial conditions, and change the code in frost-dev/matlab/control to
% run your desired controller
% JN 2020 - jnorby@andrew.cmu.edu

joint_control = JointPD('simplePD');

q0 = zeros(22,1);
q0([8,12,16,20]) = 0.25;
q0([9,13,17,21]) = 0.5;
feet_pos = computeFeetPos(q0);
q0(3) = -feet_pos(1,3);
dq0 = zeros(22,1);
x0 = [q0; dq0];
% x0(3) = 0.5;

t0 = 0;
tf = 0.4;
eventnames = [];
sim_opts = [];

logger = SimLogger(robot);
disp('Simulating');
tic
logger = system.simulate(t0, x0, tf, []);
toc

% plot(logger.flow.t, logger.flow.states.x(23,:))
% hold on
% plot(logger.flow.t,A*sin(2*pi/T*logger.flow.t), '--r')
anim = plot.LoadSimAnimator(robot, logger, 'SkipExporting',true);