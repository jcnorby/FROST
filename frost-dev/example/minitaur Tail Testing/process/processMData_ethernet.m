function data_out = processMData_ethernet(data_path);

data = csvread(data_path);
t = data(:,1);
t = 0.001*t;
voltage = data(:,3);
pos = data(:,4:12);
vel = data(:,14:22);
cmd = data(:,24:32);

if size(data,2) > 40
    ff = data(:,34:42);
    p_term = data(:,44:52);
    d_term = data(:,54:62);
    imu_pos = data(:,64:66);
    imu_vel = data(:,67:69);
    beh_mode = data(:,70);
    disp('Including ff + p + d')
else
    imu_pos = data(:,32:34);
    imu_vel = data(:,35:37);
    beh_mode = data(:,38);
    disp('No ff + p + d')
end


idx = find(beh_mode ~= 0);
[C,IA,IC] = unique(t, 'last');

idx = intersect(idx,IA);

% win = 20;
% pos = smoothdata(pos,1,'movmean',win);
% vel = smoothdata(vel,1,'movmean',win);
% cmd = smoothdata(cmd, 1,'movmean',win);
% imu_pos = smoothdata(imu_pos,1,'movmean',win);
% imu_vel = smoothdata(imu_vel,1,'movmean',win);
t = t(idx,:);
t = t - t(1);
voltage = voltage(idx,:);
pos = pos(idx,:);
vel = vel(idx,:);
cmd = cmd(idx,:);
imu_pos = imu_pos(idx,:);
imu_vel = imu_vel(idx,:);
beh_mode = beh_mode(idx,:);

data_out.t = t;
data_out.voltage = voltage;
data_out.pos = pos;
data_out.vel = vel;
data_out.cmd = cmd;
data_out.imu_pos = imu_pos;
data_out.imu_vel = imu_vel;
data_out.mode = beh_mode;

if size(data,2) > 40
    ff = ff(idx,:);
    p_term = p_term(idx,:);
    d_term = d_term(idx,:);
    
    for i = 2:length(ff)
        if any(ff(i,1:end-1) == 0)
            ff(i,:) = ff(i-1,:);
        end
    end
    
    data_out.ff = ff;
    data_out.p_term = p_term;
    data_out.d_term = d_term;
end
