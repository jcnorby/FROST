function is_valid = isValidState(state, phase)

H_MIN = 0.25;
H_MAX = 0.6;
V_MAX = 2.5;

if (sqrt(state(4)*state(4) + state(5)*state(5) + state(6)*state(6)) > V_MAX)
    is_valid = false;
    return;
end

if strcmp(phase, 'STANCE')
    if (state(3) >= H_MIN) && (state(3) <= H_MAX)
        is_valid = true;
    else
        is_valid = false;
    end
elseif strcmp(phase, 'FLIGHT')
    if (state(3) >= H_MIN)
        is_valid = true;
    else
        is_valid = false;
    end
else
    error('Invalid phase specified');
end