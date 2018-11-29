function f = getDriftVector(obj)
    % returns the symbolic expression of the total drift vector (summing
    % all sub-vectors together)
    %
    
numState = obj.numState;
x = obj.States.x;
dx = obj.States.dx;
ddx = obj.States.ddx;

input_names = fieldnames(obj.Inputs.Control);
    n_inputs = numel(input_names);
    
    if n_inputs > 0
        Gvec_control_fun(n_inputs,1) = NlpFunction(); % preallocation
            for j=1:n_inputs
                input = input_names{j};
                Gvec_control_fun(j) = NlpFunction('Name',obj.Gvec.Control.(input).Name,...
                    'Dimension',numState,'SymFun',obj.Gvec.Control.(input),...
                    'DepVariables',[x;u]);
            end
    else
        Gvec_control_fun = zeros(0,nNode);
    end

invM = inv(obj.Mmat);
f = tomatrix(sum([obj.Fvec{:}],2));

wrench_names = fieldnames(obj.Gvec.ConstraintWrench);

for i = 1:length(wrench_names)
    g_wrench(i) = obj.Gvec.ConstraintWrench.(wrench_names{i});
end

    f = tomatrix(sum([obj.Fvec{:}],2));
    
    
end