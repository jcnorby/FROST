function is_valid = isValidStateActionPair(state, action)

KINEMATICS_RES = 0.05;

t_s = action(7);
t_f = action(8);

for t = 0:KINEMATICS_RES:t_s
    check_state = applyStance3D(state, action, t);
    
    if ~isValidState(check_state, 'STANCE')
        is_valid = false;
        return;
    end
end

s_takeoff = applyStance3D(state, action);

for t = 0:KINEMATICS_RES:t_f
    check_state = applyFlight3D(s_takeoff, t);
    
    if ~isValidState(check_state, 'FLIGHT')
        is_valid = false;
        return;
    end
end

s_land = applyFlight3D(s_takeoff, t_f);
if ~isValidState(s_land, 'STANCE')
    is_valid = false;
    return;
end

is_valid = true;