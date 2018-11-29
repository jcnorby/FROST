function customConstraints(nlp, bounds)

x0 = nlp.Phase(1).Plant.States.x;
dx0 = nlp.Phase(1).Plant.States.dx;

pitch0 = 0.0;
motorin = pi/2 - pitch0;
motorout = pi/2 + pitch0;
knee0 = acos(0.5);
x0init = [0;0;0.2*sin(knee0);0;pitch0;0;motorout;motorin;knee0;knee0;motorout;motorin;knee0;knee0;motorin;motorout;knee0;knee0;motorin;motorout;knee0;knee0;0];
initPos = x0 - x0init;

initVel = dx0;

initState = SymFunction('initState', [initPos; initVel], {x0,dx0});
addNodeConstraint(nlp.Phase(1), initState, {'x','dx'}, 'first',  ...
    0,0,'Linear');

%~~~~~~~~

xf = nlp.Phase(end).Plant.States.xn;
dxf = nlp.Phase(end).Plant.States.dxn;

temp = load('local/slowBound.mat', 'gait');
gait = temp.gait;
gait(1).states.dx(1,1) = gait(1).states.dx(1,1);
finalStateDes = [gait(1).states.x(:,1);gait(1).states.dx(:,1)];


finalState = [xf(2:end);dxf] - finalStateDes(2:end);

finalStateFunc = SymFunction('finalState', finalState, {xf,dxf});
addNodeConstraint(nlp.Phase(end), finalStateFunc, {'x', 'dx'}, 'last',  ...
    0,0,'Linear');

%~~~~~~~~

removeConstraint(nlp.Phase(2),'tContDomain');
removeConstraint(nlp.Phase(4),'tContDomain');
removeConstraint(nlp.Phase(8),'tContDomain');
removeConstraint(nlp.Phase(12),'tContDomain');

%~~~~~~~~

% average step velocity
p_lb = bounds.FrontStance.constrBounds.periodicity.lb;
p_ub = bounds.FrontStance.constrBounds.periodicity.ub;

xf = SymVariable('xf',size(xf));
dxf = SymVariable('dxf',size(dxf));
p_error = tomatrix([xf(2:end)-x0(2:end);dxf-dx0]);
%     p_error = tomatrix([xf(2:end)-x0(2:end);dxf([1:2,4:end])-dx0([1:2,4:end])]);
p_fun = SymFunction('periodicity',p_error,{x0, xf, dx0, dxf});
x0_var = nlp.Phase(1).OptVarTable.x(1);
dx0_var = nlp.Phase(1).OptVarTable.dx(1);
xf_var = nlp.Phase(end).OptVarTable.xn(end);
dxf_var = nlp.Phase(end).OptVarTable.dxn(end);
p_cstr = NlpFunction('Name',p_fun.Name,...
    'Dimension',length(p_error),'lb',p_lb, 'ub',p_ub,'Type','Nonlinear',...
    'SymFun',p_fun,'DepVariables',[x0_var;xf_var;dx0_var;dxf_var]);
% addConstraint(nlp.Phase(end), 'periodicity', 'last', p_cstr);

% the relabeling/periodicity of joint coordinate is no longer valid
% (this only affects position peridicity, velocity still applies)
%  removeConstraint(nlp.Phase(end),['xDiscreteMap',nlp.Phase(end).Name]);



plant = nlp.Phase(end).Plant;

xf = nlp.Phase(end).Plant.States.xn;
dxf = nlp.Phase(end).Plant.States.dxn;

% Readding Periodicity (ignoring first 6 coordinates)
    R = plant.R;
    x = plant.States.x;
    xn = plant.States.xn;
    x_diff = R*x-xn;
    x_map = SymFunction(['xPartialDiscreteMap' plant.Name],x_diff(2:end),{x,xn});
    
%     addNodeConstraint(nlp.Phase(end), x_map, {'x','xn'}, 'first', 0, 0, 'Linear');
    
    
if any(strcmp(fieldnames(nlp.Phase(1).OptVarTable), 'qDes'))
    
    kp = SymVariable('kp');
    kd = SymVariable('kd');
    qDes = SymVariable('qDes');
    
    kpNext = SymVariable('kpNext');
    kdNext = SymVariable('kdNext');
    qDesNext = SymVariable('qDesNext');
    
    paramCont = tomatrix([kp - kpNext
        kd - kdNext
        qDes - qDesNext]);
    paramCont_fun = SymFunction('paramCont',paramCont,{kp,kd,qDes,kpNext,kdNext,qDesNext});

    for i = 1:2:length(nlp.Phase)-2
        kp_var = nlp.Phase(i).OptVarTable.kp(1);
        kd_var = nlp.Phase(i).OptVarTable.kd(1);
        qDes_var = nlp.Phase(i).OptVarTable.qDes(1);
        
        kpNext_var = nlp.Phase(i+2).OptVarTable.kp(1);
        kdNext_var = nlp.Phase(i+2).OptVarTable.kd(1);
        qDesNext_var = nlp.Phase(i+2).OptVarTable.qDes(1);
        
        
        
        paramCont_cstr = NlpFunction('Name',paramCont_fun.Name,...
        'Dimension',length(paramCont),'lb',0, 'ub',0,'Type','Linear',...
        'SymFun',paramCont_fun,'DepVariables',[kp_var,kd_var,qDes_var,kpNext_var,kdNext_var,qDesNext_var]);
    
        addConstraint(nlp.Phase(i), paramCont_cstr.Name, 'first', paramCont_cstr);
    end

end


if any(strcmp(fieldnames(nlp.Phase(1).OptVarTable), 'r'))
    
    R = SymVariable('r');
    RNext = SymVariable('rNext');
    
    paramCont = tomatrix(R - RNext);
    paramCont_fun = SymFunction('paramCont',paramCont,{R, RNext});

    for i = 1:2:length(nlp.Phase)-2
        R_var = nlp.Phase(i).OptVarTable.r(1);

        RNext_var = nlp.Phase(i+2).OptVarTable.r(1);
        
        paramCont_cstr = NlpFunction('Name',paramCont_fun.Name,...
        'Dimension',length(paramCont),'lb',0, 'ub',0,'Type','Linear',...
        'SymFun',paramCont_fun,'DepVariables',[R_var,RNext_var]);
    
        addConstraint(nlp.Phase(i), paramCont_cstr.Name, 'first', paramCont_cstr);
    end

end
end