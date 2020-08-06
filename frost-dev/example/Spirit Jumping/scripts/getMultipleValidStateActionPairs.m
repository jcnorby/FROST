close all
figure
ax = gca;
axis equal
xlabel('x (m)');
ylabel('y (m)');
zlabel('z (m)');
view(3)


for i = 1:100
    [state, action] = getStateActionPair();
    plotStateActionPair3D(state, action, ax);
end
