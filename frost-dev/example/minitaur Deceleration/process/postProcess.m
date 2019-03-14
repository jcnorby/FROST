%% animation
clear;clc;

temp = load('../local/energyOptimalBoundWithTailFrontOffset.mat');
nlp = temp.nlp;
sol = temp.sol;
gait = temp.gait;
robot = temp.robot;

reactionForceEffect = zeros(2,1);
reactionTorqueEffect = zeros(2,1);
netTailEffect = zeros(2,1);
% loopedGait = plot.createLoopedGait(gait);
% anim = plot.LoadAnimator(robot, loopedGait,'SkipExporting',true);

fullgait = mergeGait(gait, nlp);
t = fullgait.tspan;
tailBaseOffset = robot.Joints(getJointIndices(robot, 'tail_joint')).Offset;

for i = 1:length(fullgait.tspan)
    baseAccel(:,i) = tailBaseAccelFun(fullgait.states.x(:,i),fullgait.states.ddx(:,i));
    massAccel(:,i) = tailMassAccelFun(fullgait.states.x(:,i),fullgait.states.ddx(:,i));
    
    tailReactionForce(:,i) = robot.Links(getLinkIndices(robot, 'tail_link')).Mass*(massAccel(:,i) + [0; 0; 9.81]);
    
    temprxn = cross(tailBaseOffset',-tailReactionForce(:,i));
    reactionForceEffect(i) = temprxn(2);
    reactionTorqueEffect(i) = -fullgait.inputs.u(9,i);
    netTailEffect(i) = reactionForceEffect(i) + reactionTorqueEffect(i);
end







%% you can check the violation of constraints/variables and the value of each cost function by calling the following functions.
tol = 1e-3;
% checkConstraints(nlp,sol,tol,'../local/constr_check.txt'); % 
% checkVariables(nlp,sol,tol,'../local/var_check.txt'); % 
% 
% costs = checkCosts(nlp,sol,'../local/cost_check.txt'); % 
% cost = sum(cell2mat(costs(1:2:7)))


%% you can also plot the states and torques w.r.t upper/lower bounds.
% plot.plotOptStates(robot,nlp,gait);
% plot.plotOptTorques(robot,nlp,gait);

%% Use to record after animation has finished
% myVideo = VideoWriter('energyOptimalBoundWithTailLatexBody', 'MPEG-4');
% myVideo.Quality = 100;
% open(myVideo);
% writeVideo(myVideo,anim.anim.M);
% close(myVideo);

