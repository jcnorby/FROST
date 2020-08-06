close all
for i = 1:200
    [state, action] = getStateActionPair();
    plotStateActionPair3D(state, action);
end
axis equal
xlabel('x (m)');
ylabel('y (m)');
zlabel('z (m)');
view(3)

