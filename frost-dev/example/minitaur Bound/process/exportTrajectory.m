function exportTrajectory(fullgait)
R = 1;
Rurdf = 50;
Rineff = 0.8;
kt = 0.0954;
Ra = 0.23;
V = 13;

if length(fullgait.states.x(:,1)) == 22
    motorIndex = [7,8,11,12,15,16,19,20];
    
    fullgait.tspan;
    fullgait.states.x(motorIndex, :)';
    fullgait.states.dx(motorIndex, :)';
    
    df = 1/(0.95*V)*(fullgait.inputs.u*Ra./kt + kt.*fullgait.states.dx(motorIndex, :));
    
    times = fopen('traj/trajTimes.txt','w');
    pos = fopen('traj/trajPos.txt','w');
    vel = fopen('traj/trajVel.txt','w');
    u = fopen('traj/trajU.txt','w');
    dfFile = fopen('traj/trajDF.txt','w');
    
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
    
    fprintf(dfFile, '{{%f,%f,%f,%f,%f,%f,%f,%f},', df(:, 1));
    fprintf(dfFile, '{%f,%f,%f,%f,%f,%f,%f,%f},', df(:, 2:end-1));
    fprintf(dfFile, '{%f,%f,%f,%f,%f,%f,%f,%f}};', df(:, end));
    
    fclose(times);
    fclose(pos);
    fclose(vel);
    fclose(u);
    fclose(dfFile);
%     type traj/trajPos.txt;
    
else
    motorIndex = [7,8,11,12,15,16,19,20,23];
    
    fullgait.tspan;
    fullgait.states.x(motorIndex, :)';
    fullgait.states.dx(motorIndex, :)';
    
    df = 1/(0.95*V)*(fullgait.inputs.u*Ra./(kt*[1;1;1;1;1;1;1;1;R*Rineff]) + kt*[1;1;1;1;1;1;1;1;Rurdf].*fullgait.states.dx(motorIndex, :));
    
    times = fopen('traj/trajTimes.txt','w');
    pos = fopen('traj/trajPos.txt','w');
    vel = fopen('traj/trajVel.txt','w');
    u = fopen('traj/trajU.txt','w');
    dfFile = fopen('traj/trajDF.txt','w');
    pitch = fopen('traj/trajPitch.txt','w');
    dpitch = fopen('traj/trajDPitch.txt','w');
    
    fprintf(times, '{%f,', fullgait.tspan(1));
    fprintf(times, '%f,', fullgait.tspan(2:end-1));
    fprintf(times, '%f};', fullgait.tspan(end));
    
    fprintf(pos, '{{%f,%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.states.x(motorIndex, 1));
    fprintf(pos, '{%f,%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.states.x(motorIndex, 2:end-1));
    fprintf(pos, '{%f,%f,%f,%f,%f,%f,%f,%f,%f}};', fullgait.states.x(motorIndex, end));
    
    fprintf(vel, '{{%f,%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.states.dx(motorIndex, 1));
    fprintf(vel, '{%f,%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.states.dx(motorIndex, 2:end-1));
    fprintf(vel, '{%f,%f,%f,%f,%f,%f,%f,%f,%f}};', fullgait.states.dx(motorIndex, end));
    
    fprintf(u, '{{%f,%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.inputs.u(:, 1)./[1;1;1;1;1;1;1;1;(R*Rineff)]);
    fprintf(u, '{%f,%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.inputs.u(:, 2:end-1)./[1;1;1;1;1;1;1;1;(R*Rineff)]);
    fprintf(u, '{%f,%f,%f,%f,%f,%f,%f,%f,%f}};', fullgait.inputs.u(:, end)./[1;1;1;1;1;1;1;1;(R*Rineff)]);
    
    fprintf(dfFile, '{{%f,%f,%f,%f,%f,%f,%f,%f,%f},', df(:, 1));
    fprintf(dfFile, '{%f,%f,%f,%f,%f,%f,%f,%f,%f},', df(:, 2:end-1));
    fprintf(dfFile, '{%f,%f,%f,%f,%f,%f,%f,%f,%f}};', df(:, end));
    
    fprintf(pitch, '{%f,', fullgait.states.x(5, 1));
    fprintf(pitch, '%f,', fullgait.states.x(5, 2:end-1));
    fprintf(pitch, '%f};', fullgait.states.x(5, end));
    
    fprintf(dpitch, '{%f,', fullgait.states.dx(5, 1));
    fprintf(dpitch, '%f,', fullgait.states.dx(5, 2:end-1));
    fprintf(dpitch, '%f};', fullgait.states.dx(5, end));
    
    fclose(times);
    fclose(pos);
    fclose(vel);
    fclose(u);
    fclose(dfFile);
    fclose(pitch);
    fclose(dpitch);
    % type traj/trajPos.txt;
    
end