function [nlp] = updateInitCondition(nlp, init_params)
    for i = 1:min([length(nlp.Phase), length(init_params)])
        fields = fieldnames(init_params(i).states);
        for j = 1:numel(fields)
            if ~any(ismember(nlp.Phase(i).OptVarTable.Properties.VariableNames, fields{j}))
                continue;
            end

            for k = 1:nlp.Phase(i).NumNode
                if any(size(init_params(i).states.(fields{j})(:,k)) ~= size(nlp.Phase(i).OptVarTable.(fields{j})(k).InitialValue))
                    continue;
                end
                
                nlp.Phase(i).updateVariableProp(fields{j}, k, 'x0', init_params(i).states.(fields{j})(:,k));
            end
        end

        fields = fieldnames(init_params(i).inputs);
        for j = 1:numel(fields)
            if ~any(ismember(nlp.Phase(i).OptVarTable.Properties.VariableNames, fields{j}))
                continue;
            end

            for k = 1:nlp.Phase(i).NumNode
                if any(size(init_params(i).inputs.(fields{j})(:,k)) ~= size(nlp.Phase(i).OptVarTable.(fields{j})(k).InitialValue))
                    continue;
                end
                
                nlp.Phase(i).updateVariableProp(fields{j}, k, 'x0', init_params(i).inputs.(fields{j})(:,k));
            end
        end

        fields = fieldnames(init_params(i).params);
        for j = 1:numel(fields)
            if ~any(ismember(nlp.Phase(i).OptVarTable.Properties.VariableNames, fields{j}))
                continue;
            end
            
            if any(size(init_params(i).params.(fields{j})(:,1)) ~= size(nlp.Phase(i).OptVarTable.(fields{j})(1).InitialValue))
                continue;
            end
            if nlp.Phase(i).Options.DistributeParameters
                nlp.Phase(i).updateVariableProp(fields{j}, 'all', 'x0', init_params(i).params.(fields{j}));
            else
                nlp.Phase(i).updateVariableProp(fields{j}, 'first', 'x0', init_params(i).params.(fields{j}));
            end
        end

        if any(ismember(nlp.Phase(i).OptVarTable.Properties.VariableNames, 'T'))
            T = [0; init_params(i).tspan(end) - init_params(i).tspan(1)];
            if nlp.Phase(i).Options.DistributeTimeVariable
                nlp.Phase(i).updateVariableProp('T', 'all', 'x0', T);
            else
                nlp.Phase(i).updateVariableProp('T', 'first', 'x0', T);
            end
        end
    end
    
    nlp.update;
end


% function [nlp] = updateInitCondition(nlp, init_params)
% 
%         fields = fieldnames(init_params.states);
%         for j = 1:numel(fields)
%             if ~any(ismember(nlp.OptVarTable.Properties.VariableNames, fields{j}))
%                 continue;
%             end
% 
%             for k = 1:nlp.NumNode
%                 if any(size(init_params.states.(fields{j})(:,k)) ~= size(nlp.OptVarTable.(fields{j})(k).InitialValue))
%                     continue;
%                 end
%                 
%                 nlp.updateVariableProp(fields{j}, k, 'x0', init_params.states.(fields{j})(:,k));
%             end
%         end
% 
%         fields = fieldnames(init_params.inputs);
%         for j = 1:numel(fields)
%             if ~any(ismember(nlp.OptVarTable.Properties.VariableNames, fields{j}))
%                 continue;
%             end
% 
%             for k = 1:nlp.NumNode
%                 if any(size(init_params.inputs.(fields{j})(:,k)) ~= size(nlp.OptVarTable.(fields{j})(k).InitialValue))
%                     continue;
%                 end
%                 
%                 nlp.updateVariableProp(fields{j}, k, 'x0', init_params.inputs.(fields{j})(:,k));
%             end
%         end
% 
% %         fields = fieldnames(init_params.params); % UNCOMMENT THIS
% %         for j = 1:numel(fields)
% %             if ~any(ismember(nlp.OptVarTable.Properties.VariableNames, fields{j}))
% %                 continue;
% %             end
% %             
% %             if any(size(init_params.params.(fields{j})(:,1)) ~= size(nlp.OptVarTable.(fields{j})(1).InitialValue))
% %                 continue;
% %             end
% %             if nlp.Options.DistributeParameters
% %                 nlp.updateVariableProp(fields{j}, 'all', 'x0', init_params.params.(fields{j}));
% %             else
% %                 nlp.updateVariableProp(fields{j}, 'first', 'x0', init_params.params.(fields{j}));
% %             end
% %         end
% 
%         if any(ismember(nlp.OptVarTable.Properties.VariableNames, 'T'))
%             T = [init_params.tspan(1); init_params.tspan(end)];
%             if nlp.Options.DistributeTimeVariable
%                 nlp.updateVariableProp('T', 'all', 'x0', T);
%             else
%                 nlp.updateVariableProp('T', 'first', 'x0', T);
%             end
%         end
%     
%     nlp.update;
% end
