set(0, 'DefaultAxesFontSize', 18);
% set(0,'DefaultAxesXGrid','on','DefaultAxesYGrid','on')
set(0, 'DefaultLineMarkerSize', 10)
set(gcf,'color','w');
% set(0, 'defaultAxesTickLabelInterpreter','latex'); set(0, 'defaultLegendInterpreter','latex');
set(groot,'defaulttextinterpreter','latex');  
set(groot, 'defaultAxesTickLabelInterpreter','latex');  
set(groot, 'defaultLegendInterpreter','latex');  

A = double(anim.anim.M(1).cdata);
for i = 1:4
    %     c = imfuse(c,anim.anim.M(i*10).cdata, 'blend', 'Scaling','joint');
    B = double(anim.anim.M(i*10).cdata);
    A = A+B;
end
A = A/(i+1);
[I,J,k]=size(A)
for i = 1:I
    for j = 1:J
        if any(A(i,j,:)>5) && any(A(i,j,:)<255)
            A(i,j,:) = 1*A(i,j,:);
        end
    end
end
A = cast(A,'uint8');
figure
imshow(A)
% 
% figure
% g = 1;
% plot(gait(g).tspan,sin(gait(g).states.x(5,:)+gait(g).states.x(23,:))*0.4 + sin(gait(g).states.x(5,:))*0.1)
% hold on
% 
% g = 3;
% plot(gait(g).tspan,sin(gait(g).states.x(5,:)+gait(g).states.x(23,:))*0.4 + sin(gait(g).states.x(5,:))*0.1)
% hold on
% 
% g = 5;
% plot(gait(g).tspan,sin(gait(g).states.x(5,:)+gait(g).states.x(23,:))*0.4 + sin(gait(g).states.x(5,:))*0.1)
% hold on
% 
% g = 7;
% plot(gait(g).tspan,sin(gait(g).states.x(5,:)+gait(g).states.x(23,:))*0.4 + sin(gait(g).states.x(5,:))*0.1)
% hold on
