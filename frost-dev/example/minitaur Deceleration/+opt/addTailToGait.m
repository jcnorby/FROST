function gait = addTailToGait(gait)

for i = 1:2:length(gait)
    for j = 1:length(gait(i).states.x(1,:))
        gait(i).states.x(23,:) = zeros(1,length(gait(i).states.x(1,:)));
        gait(i).states.dx(23,:) = zeros(1,length(gait(i).states.x(1,:)));
        gait(i).states.ddx(23,:) = zeros(1,length(gait(i).states.x(1,:)));

        gait(i).states.x(24,:) = zeros(1,length(gait(i).states.x(1,:)));
        gait(i).states.dx(24,:) = zeros(1,length(gait(i).states.x(1,:)));
        gait(i).states.ddx(24,:) = zeros(1,length(gait(i).states.x(1,:)));
        
        gait(i).states.x(25,:) = zeros(1,length(gait(i).states.x(1,:)));
        gait(i).states.dx(25,:) = zeros(1,length(gait(i).states.x(1,:)));
        gait(i).states.ddx(25,:) = zeros(1,length(gait(i).states.x(1,:)));
        
        gait(i).states.x(26,:) = zeros(1,length(gait(i).states.x(1,:)));
        gait(i).states.dx(26,:) = zeros(1,length(gait(i).states.x(1,:)));
        gait(i).states.ddx(26,:) = zeros(1,length(gait(i).states.x(1,:)));
        
        gait(i).inputs.u(9,:) = zeros(1,length(gait(i).inputs.u(1,:)));
    end
end

for i = 2:2:length(gait)
    for j = 1:length(gait(i).states.x(1,:))
        gait(i).states.x(23,:) = zeros(1,length(gait(i).states.x(1,:)));
        gait(i).states.dx(23,:) = zeros(1,length(gait(i).states.x(1,:)));
        
        gait(i).states.xn(23,:) = zeros(1,length(gait(i).states.x(1,:)));
        gait(i).states.dxn(23,:) = zeros(1,length(gait(i).states.x(1,:)));
        
        gait(i).states.x(24,:) = zeros(1,length(gait(i).states.x(1,:)));
        gait(i).states.dx(24,:) = zeros(1,length(gait(i).states.x(1,:)));
        
        gait(i).states.xn(24,:) = zeros(1,length(gait(i).states.x(1,:)));
        gait(i).states.dxn(24,:) = zeros(1,length(gait(i).states.x(1,:)));
        
        gait(i).states.x(25,:) = zeros(1,length(gait(i).states.x(1,:)));
        gait(i).states.dx(25,:) = zeros(1,length(gait(i).states.x(1,:)));
        
        gait(i).states.xn(25,:) = zeros(1,length(gait(i).states.x(1,:)));
        gait(i).states.dxn(25,:) = zeros(1,length(gait(i).states.x(1,:)));
        
        gait(i).states.x(26,:) = zeros(1,length(gait(i).states.x(1,:)));
        gait(i).states.dx(26,:) = zeros(1,length(gait(i).states.x(1,:)));
        
        gait(i).states.xn(26,:) = zeros(1,length(gait(i).states.x(1,:)));
        gait(i).states.dxn(26,:) = zeros(1,length(gait(i).states.x(1,:)));
    end
end

end