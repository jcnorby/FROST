function exportTrajectory(fullgait)
R = 1;
Rurdf = 4;
Rineff = 0.8;
kt = 0.0954;
Ra = 0.22;
V = 12;

if length(fullgait.states.x(:,1)) == 22
    motorIndex = [7,8,11,12,15,16,19,20];
    
    fullgait.tspan;
    fullgait.states.x(motorIndex, :)';
    fullgait.states.dx(motorIndex, :)';
    
    df = (1/V)*(torqueToCurrentFunction(fullgait.inputs.u)*Ra + kt.*fullgait.states.dx(motorIndex, :));
    
    traj = fopen('traj/traj.txt','w');
    fprintf(traj, 'float times[TIMESTEPS] = {%f,', fullgait.tspan(1));
    fprintf(traj, '%f,', fullgait.tspan(2:end-1));
    fprintf(traj, '%f};\n', fullgait.tspan(end));
    
    fprintf(traj, 'float pos[TIMESTEPS][MOTORS] = {{%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.states.x(motorIndex, 1));
    fprintf(traj, '{%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.states.x(motorIndex, 2:end-1));
    fprintf(traj, '{%f,%f,%f,%f,%f,%f,%f,%f}};\n', fullgait.states.x(motorIndex, end));
    
    fprintf(traj, 'float vel[TIMESTEPS][MOTORS] = {{%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.states.dx(motorIndex, 1));
    fprintf(traj, '{%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.states.dx(motorIndex, 2:end-1));
    fprintf(traj, '{%f,%f,%f,%f,%f,%f,%f,%f}};\n', fullgait.states.dx(motorIndex, end));
    
    fprintf(traj, 'float u[TIMESTEPS][MOTORS] = {{%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.inputs.u(:, 1));
    fprintf(traj, '{%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.inputs.u(:, 2:end-1));
    fprintf(traj, '{%f,%f,%f,%f,%f,%f,%f,%f}};\n', fullgait.inputs.u(:, end));
    
    fprintf(traj, 'float dfVec[TIMESTEPS][MOTORS] = {{%f,%f,%f,%f,%f,%f,%f,%f},', df(:, 1));
    fprintf(traj, '{%f,%f,%f,%f,%f,%f,%f,%f},', df(:, 2:end-1));
    fprintf(traj, '{%f,%f,%f,%f,%f,%f,%f,%f}};\n', df(:, end));   
    fclose(traj);
    
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
    
    df = (1/V)*(torqueToCurrentFunction(fullgait.inputs.u./([1;1;1;1;1;1;1;1;R*Rineff]))*Ra + kt*[1;1;1;1;1;1;1;1;Rurdf].*fullgait.states.dx(motorIndex, :));
    
    times = fopen('traj/trajTimes.txt','w');
    pos = fopen('traj/trajPos.txt','w');
    vel = fopen('traj/trajVel.txt','w');
    u = fopen('traj/trajU.txt','w');
    dfFile = fopen('traj/trajDF.txt','w');
    pitch = fopen('traj/trajPitch.txt','w');
    dpitch = fopen('traj/trajDPitch.txt','w');
    
    traj = fopen('traj/traj.txt','w');
    fprintf(traj, 'float times[TIMESTEPS] = {%f,', fullgait.tspan(1));
    fprintf(traj, '%f,', fullgait.tspan(2:end-1));
    fprintf(traj, '%f};\n', fullgait.tspan(end));
    
    fprintf(traj, 'float pos[TIMESTEPS][MOTORS] = {{%f,%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.states.x(motorIndex, 1));
    fprintf(traj, '{%f,%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.states.x(motorIndex, 2:end-1));
    fprintf(traj, '{%f,%f,%f,%f,%f,%f,%f,%f,%f}};\n', fullgait.states.x(motorIndex, end));
    
    fprintf(traj, 'float vel[TIMESTEPS][MOTORS] = {{%f,%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.states.dx(motorIndex, 1));
    fprintf(traj, '{%f,%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.states.dx(motorIndex, 2:end-1));
    fprintf(traj, '{%f,%f,%f,%f,%f,%f,%f,%f,%f}};\n', fullgait.states.dx(motorIndex, end));
    
    fprintf(traj, 'float u[TIMESTEPS][MOTORS] = {{%f,%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.inputs.u(:, 1)./[1;1;1;1;1;1;1;1;(R*Rineff)]);
    fprintf(traj, '{%f,%f,%f,%f,%f,%f,%f,%f,%f},', fullgait.inputs.u(:, 2:end-1)./[1;1;1;1;1;1;1;1;(R*Rineff)]);
    fprintf(traj, '{%f,%f,%f,%f,%f,%f,%f,%f,%f}};\n', fullgait.inputs.u(:, end)./[1;1;1;1;1;1;1;1;(R*Rineff)]);
    
    fprintf(traj, 'float dfVec[TIMESTEPS][MOTORS] = {{%f,%f,%f,%f,%f,%f,%f,%f,%f},', df(:, 1));
    fprintf(traj, '{%f,%f,%f,%f,%f,%f,%f,%f,%f},', df(:, 2:end-1));
    fprintf(traj, '{%f,%f,%f,%f,%f,%f,%f,%f,%f}};\n', df(:, end));   
    fclose(traj);   
    
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