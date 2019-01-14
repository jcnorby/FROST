function exportTrajectory(fullgait)
R = 45.39;
Rineff = 0.8;
kt = 0.0954;
Ra = 0.22;
V = 15;

if length(fullgait.states.x(:,1)) == 22
    motorIndex = [7,8,11,12,15,16,19,20];
    
    fullgait.tspan;
    fullgait.states.x(motorIndex, :)';
    fullgait.states.dx(motorIndex, :)';
    
    times = fopen('traj/trajTimes.txt','w');
    pos = fopen('traj/trajPos.txt','w');
    vel = fopen('traj/trajVel.txt','w');
    u = fopen('traj/trajU.txt','w');
    
    fprintf(times, '{%f,', fullgait.tspan(1));
    fprintf(times, '%f,', fullgait.tspan(2:end-1));
    fprintf(times, '%f};', fullgait.tspan(end));
    
    fprintf(pos, '{{%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.states.x(motorIndex, 1));
    fprintf(pos, '{%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.states.x(motorIndex, 2:end-1));
    fprintf(pos, '{%f,%f,%f,%f,%f,%f,%f,%f}};', fullgait.states.x(motorIndex, end));
    
    fprintf(vel, '{{%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.states.dx(motorIndex, 1));
    fprintf(vel, '{%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.states.dx(motorIndex, 2:end-1));
    fprintf(vel, '{%f,%f,%f,%f,%f,%f,%f,%f}};', fullgait.states.dx(motorIndex, end));
    
    fprintf(u, '{{%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.inputs.u(:, 1));
    fprintf(u, '{%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.inputs.u(:, 2:end-1));
    fprintf(u, '{%f,%f,%f,%f,%f,%f,%f,%f}};', fullgait.inputs.u(:, end));
    
    fclose(times);
    fclose(pos);
    fclose(vel);
    fclose(u);
    type traj/trajPos.txt;
    
elseif length(fullgait.states.x(:,1)) == 9
    motorIndex = [7];
    
    fullgait.tspan;
    fullgait.states.x(motorIndex, :)';
    fullgait.states.dx(motorIndex, :)';
    fullgait.states.ddx(motorIndex, :)';
    
    df = 1/(0.95*V)*(fullgait.inputs.u*Ra/(kt*R*Rineff) + kt*R*fullgait.states.dx(motorIndex, :)');
    
    fullgait.states.x = [fullgait.states.x(motorIndex, :);zeros(7,length(fullgait.states.x))];
    fullgait.states.dx = [fullgait.states.dx(motorIndex, :);zeros(7,length(fullgait.states.dx))];
    fullgait.states.ddx = [fullgait.states.ddx(motorIndex, :);zeros(7,length(fullgait.states.ddx))];
    fullgait.inputs.u = [fullgait.inputs.u';zeros(7,length(fullgait.inputs.u))]./(R*Rineff);
    df = [ df';zeros(7,length(fullgait.states.x))];
    
    times = fopen('traj/trajTimes.txt','w');
    pos = fopen('traj/trajPos.txt','w');
    vel = fopen('traj/trajVel.txt','w');
    acc = fopen('traj/trajAcc.txt','w');
    u = fopen('traj/trajU.txt','w');
    dfFile = fopen('traj/trajDF.txt','w');
    
    fprintf(times, '{%f,', fullgait.tspan(1));
    fprintf(times, '%f,', fullgait.tspan(2:end-1));
    fprintf(times, '%f};', fullgait.tspan(end));
    
    fprintf(pos, '{{%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.states.x(:, 1));
    fprintf(pos, '{%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.states.x(:, 2:end-1));
    fprintf(pos, '{%f,%f,%f,%f,%f,%f,%f,%f}};', fullgait.states.x(:, end));
    
    fprintf(vel, '{{%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.states.dx(:, 1));
    fprintf(vel, '{%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.states.dx(:, 2:end-1));
    fprintf(vel, '{%f,%f,%f,%f,%f,%f,%f,%f}};', fullgait.states.dx(:, end));
    
    fprintf(acc, '{{%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.states.ddx(:, 1));
    fprintf(acc, '{%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.states.ddx(:, 2:end-1));
    fprintf(acc, '{%f,%f,%f,%f,%f,%f,%f,%f}};', fullgait.states.ddx(:, end));
    
    fprintf(u, '{{%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.inputs.u(:, 1));
    fprintf(u, '{%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.inputs.u(:, 2:end-1));
    fprintf(u, '{%f,%f,%f,%f,%f,%f,%f,%f}};', fullgait.inputs.u(:, end));
    
    fprintf(dfFile, '{{%f,%f,%f,%f,%f,%f,%f,%f},', df(:, 1));
    fprintf(dfFile, '{%f,%f,%f,%f,%f,%f,%f,%f},', df(:, 2:end-1));
    fprintf(dfFile, '{%f,%f,%f,%f,%f,%f,%f,%f}};', df(:, end));
    
    fclose(times);
    fclose(pos);
    fclose(vel);
    fclose(acc);
    fclose(u);
    fclose(dfFile);
else
    
    motorIndex = [7,8,11,12,15,16,19,20,23];
    
    fullgait.tspan;
    fullgait.states.x(motorIndex, :)';
    fullgait.states.dx(motorIndex, :)';
    fullgait.states.ddx(motorIndex, :)';
    
    df = 1/(0.95*V)*(fullgait.inputs.u*Ra/(kt*R*Rineff) + kt*R*fullgait.states.dx(motorIndex, :)');

    
    times = fopen('traj/trajTimes.txt','w');
    pos = fopen('traj/trajPos.txt','w');
    vel = fopen('traj/trajVel.txt','w');
    acc = fopen('traj/trajAcc.txt','w');
    u = fopen('traj/trajU.txt','w');
    
    fprintf(times, '{%f,', fullgait.tspan(1));
    fprintf(times, '%f,', fullgait.tspan(2:end-1));
    fprintf(times, '%f};', fullgait.tspan(end));
    
    fprintf(pos, '{{%f,%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.states.x(motorIndex, 1));
    fprintf(pos, '{%f,%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.states.x(motorIndex, 2:end-1));
    fprintf(pos, '{%f,%f,%f,%f,%f,%f,%f,%f,%f}};', fullgait.states.x(motorIndex, end));
    
    fprintf(vel, '{{%f,%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.states.dx(motorIndex, 1));
    fprintf(vel, '{%f,%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.states.dx(motorIndex, 2:end-1));
    fprintf(vel, '{%f,%f,%f,%f,%f,%f,%f,%f,%f}};', fullgait.states.dx(motorIndex, end));
    
    fprintf(acc, '{{%f,%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.states.ddx(motorIndex, 1));
    fprintf(acc, '{%f,%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.states.ddx(motorIndex, 2:end-1));
    fprintf(acc, '{%f,%f,%f,%f,%f,%f,%f,%f,%f}};', fullgait.states.ddx(motorIndex, end));
    
    fprintf(u, '{{%f,%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.inputs.u(:, 1)./[1;1;1;1;1;1;1;1;(R*Rineff)]);
    fprintf(u, '{%f,%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.inputs.u(:, 2:end-1)./[1;1;1;1;1;1;1;1;(R*Rineff)]);
    fprintf(u, '{%f,%f,%f,%f,%f,%f,%f,%f,%f}};', fullgait.inputs.u(:, end)./[1;1;1;1;1;1;1;1;(R*Rineff)]);
    
    fclose(times);
    fclose(pos);
    fclose(vel);
    fclose(acc);
    fclose(u);
    
end