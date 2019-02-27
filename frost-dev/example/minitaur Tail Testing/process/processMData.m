function mData = processMData(path)

mData = open_log(path);

% Reformat user params
N = size(mData.UP,1);
for i = 1:N
    mData.params(i,1) = typecast(uint8(mData.UP(i,1:4)), 'single');
    mData.params(i,2) = typecast(uint8(mData.UP(i,5:8)), 'single');
    mData.params(i,3) = typecast(uint8(mData.UP(i,9:12)), 'single');
    mData.params(i,4) = typecast(uint8(mData.UP(i,13:16)), 'single');
    mData.params(i,5) = typecast(uint8(mData.UP(i,17:20)), 'single');
    mData.params(i,6) = typecast(uint8(mData.UP(i,21:24)), 'single');
    mData.params(i,7) = typecast(uint8(mData.UP(i,25:28)), 'single');
    mData.params(i,8) = typecast(uint8(mData.UP(i,29:32)), 'single');
end

% Rescale time
mData.t = (mData.t - mData.t(1))*0.001;

% Identify wrong data to omit
c = struct2cell(mData);
tClear = [];
truncateRest = 0;

for t = 2:N
    
    if (c{1}(t) - c{1}(t-1))>=0.1
        tClear = [(1:t)'];
        continue;
        %         truncateRest = 1;
    end
    
    if c{1}(t)<0
        tClear = [tClear; t];
        continue;
        %         truncateRest = 1;
    end
    
    for val = 1:length(c)
        if (max(abs(c{val}(t,:))) > 9e6) || (truncateRest)
            tClear = [tClear; t];
        end
        continue
    end
    

    
    
end
if ~isempty(tClear)
    disp(['Times cleared: ', num2str(tClear')]);
end
% Trim wrong data
for i = 1:length(c)
    while length(c{i})>N
        c{i}(end,:) = [];
    end
    
    for t = flipud(tClear)
        c{i}(t,:) = [];
    end
end

N = length(c{1});
mDataOld = mData;
mData = cell2struct(c, fieldnames(mData), 1);

mData.pos(:,9) = mData.params(:,6);

d = 3;

% mData.voltage = mData.params(:,2);
% mData.current = mData.params(:,3);
% mData.power_int = mData.params(:,4);

mData.voltage = mData.params(:,3);
mData.current = mData.params(:,4);
mData.power_int = mData.params(:,5);
% mData.powerinst = mData.current.*mData.voltage;
% mData.energyinst = trapz(mData.powerinst);
mData.cost = mData.power_int(end)/d; % 20 yards
mData.CoTnotail = mData.cost/(9.81*7.1);
mData.CoTtail = mData.cost/(9.81*8.39);
% plot(mData.t, mData.vel)

mData.logging = mData.power_int(end)*mData.params(:,1);