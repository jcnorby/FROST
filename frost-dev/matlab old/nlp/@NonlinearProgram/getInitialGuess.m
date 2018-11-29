function [x0] = getInitialGuess(obj, method)
    % This function returns an initial guess for the NLP. 
    %
    % Parameters:
    %  method: specifies the method how to generate the initial guess. @type
    %  char
    %
    % Available methods:
    %  'typical': uses the typical values of NLP variables.
    %  'random': randomly generates the initial guess. This method generate
    %  uniformally distributed random values within the boundaries of NLP
    %  variables.
    %  'previous': returns the previous solution as the initial guess
    
    
    switch method
        case 'typical' %
            x0 = vertcat(obj.VariableArray.InitialValue);      
            
        case 'random'
            % get the upper/lower boundary values            
            lb_tmp = vertcat(obj.VariableArray.LowerBound); 
            ub_tmp = vertcat(obj.VariableArray.UpperBound); 
            
            % replace infinity with very high numbers
            lb_tmp(lb_tmp==-inf) = -1e1;
            ub_tmp(ub_tmp==inf)  = 1e1;
            
            lb_tmp(lb_tmp<-1e2) = -1e1;
            ub_tmp(ub_tmp>=1e2)  = 1e1;
            
            % generate uniformally distributed random values
            x0 = (ub_tmp - lb_tmp).*rand(size(ub_tmp,1),1) + lb_tmp + 0.001;
        case 'previous'
            x0 = obj.Sol;
        otherwise
            error('NonlinearProgram:getInitialGuessUndefinedMethod',...
                '%s is not defined as a method to generate the initial guess.\n',...
                method);
    end
    
end