function K = exportLQRController(gait)

N = length(gait.tspan);

% K = zeros(9,20,N); % or K = zeros(8,18,N);
for ii = 1:N
    
    if size(gait.states.x,1) == 22
        xVec = [gait.states.x([1,3,5,7,8,11,12,15,16,19,20],ii);0; gait.states.dx([1,3,5,7,8,11,12,15,16,19,20],ii);0];
    else
        xVec = [gait.states.x([1,3,5,7,8,11,12,15,16,19,20,23],ii); gait.states.dx([1,3,5,7,8,11,12,15,16,19,20,23],ii)];
    end
    
    uVec = gait.inputs.u(:,ii);
    lambda = [gait.inputs.fFoot0([1,3],ii); gait.inputs.fFoot1([1,3],ii); gait.inputs.fFoot2([1,3],ii); gait.inputs.fFoot3([1,3],ii);];
    
    A = computeSS_A_FrontStance(xVec, uVec,lambda);
    B = computeSS_B_FrontStance(xVec);
    
    if size(gait.states.x,1) == 22
        A = A([3:11,15:23],[3:11,15:23]);
        B = B([3:11,15:23],1:8);
    else
        A = A([3:12,15:24],[3:12,15:24]);
        B = B([3:12,15:24],:);
    end
    
    Q = 1*eye(size(A,2));
    % Q(3,3) = 100;
    R = eye(size(B,2));
    K(:,:,ii) = lqr(A,B,Q,R);
    
end

Ktext = fopen('traj/trajK.txt','w');

fprintf(Ktext, '{');
if size(gait.states.x,1) == 22
    for ii = 1:N-1
        fprintf(Ktext, '{{%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f},', K(1,:,ii));
        fprintf(Ktext, '{%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f},', K(2:end-1,:,ii)');
        fprintf(Ktext, '{%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f}},',K(end,:,ii));
    end
    fprintf(Ktext, '{{%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f},', K(1,:,N));
    fprintf(Ktext, '{%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f},', K(2:end-1,:,N)');
    fprintf(Ktext, '{%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f}}', K(end,:,N));
else
    for ii = 1:N-1
        fprintf(Ktext, '{{%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f},', K(1,:,ii));
        fprintf(Ktext, '{%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f},', K(2:end-1,:,ii)');
        fprintf(Ktext, '{%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f}},',K(end,:,ii));
    end
    fprintf(Ktext, '{{%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f},', K(1,:,N));
    fprintf(Ktext, '{%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f},', K(2:end-1,:,N)');
    fprintf(Ktext, '{%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f}}', K(end,:,N));
end

fprintf(Ktext, '};');

fclose(Ktext);

% type traj/trajK.txt
%
% pause();

