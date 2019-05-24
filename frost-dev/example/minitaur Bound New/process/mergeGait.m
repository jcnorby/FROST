function new_gait = mergeGait(gait)

tspan = [];

statenames = {'x','dx','ddx'};
statesize = [3,3,3];
for j = 1:length(statenames)
    states.(statenames{j}) = [];
end

inputnames = {'u','fFoot0','fFoot1','fFoot2','fFoot3'};
inputsize = [9,3,3,3,3];
% slidingPhases = [];
% for i = 1:length(gait)
%     if isfield(gait(i).inputs, 'fFoot0X')
%         slidingPhases = [slidingPhases, i];
%         inputnames = {inputnames{:},'fFoot0X','fFoot1X','fFoot2X','fFoot3X'};
%         inputsize = [9,3,3,3,3,1,1,1,1];
%     end
% end

for j = 1:length(inputnames)
    inputs.(inputnames{j}) = [];
end

for i = 1:length(gait)
    if ~isempty(gait(i).tspan)
        
        N = length(gait(i).tspan);
        tspan = [tspan gait(i).tspan];

        for j = 1:length(statenames)
            if any(strcmp(fieldnames(gait(i).states), statenames{j}))
                states.(statenames{j}) = [states.(statenames{j}), gait(i).states.(statenames{j})];
            else
                states.(statenames{j}) = [states.(statenames{j}), zeros(statesize(j),N)];
            end
        end
        
        for j = 1:length(inputnames)
            if any(strcmp(fieldnames(gait(i).inputs), inputnames{j}))
                inputs.(inputnames{j}) = [inputs.(inputnames{j}), gait(i).inputs.(inputnames{j})];
            else
                inputs.(inputnames{j}) = [inputs.(inputnames{j}), zeros(inputsize(j),N)];
            end
        end
        
    end
end
new_gait = struct(...
        'tspan', tspan,...
        'states', states,...
        'inputs', inputs);
end