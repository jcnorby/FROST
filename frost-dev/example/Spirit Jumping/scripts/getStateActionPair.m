function [state, action] = getStateActionPair()

while true
    state = getRandomState();
    
    for i = 1:100
        action = getRandomAction();
        if isValidStateActionPair(state, action)
            return;
        end
    end
    
end