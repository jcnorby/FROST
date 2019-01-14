function customConstraints(nlp, bounds)

x0 = nlp.Phase(1).Plant.States.x;
dx0 = nlp.Phase(1).Plant.States.dx;

initPos = [x0('BasePosX')
    x0('BasePosY')
    x0('BaseRotX')
    x0('BaseRotZ')];

% initPos = [x0('BasePosY')
%     x0('BaseRotX')
%     x0('BaseRotZ')];

initVel = [dx0('BasePosY');dx0('BaseRotX')];

initState = SymFunction('initState', [initPos; initVel], {x0,dx0});
addNodeConstraint(nlp.Phase(1), initState, {'x','dx'}, 'first',  ...
    0,0,'Linear');

xf = nlp.Phase(end).Plant.States.xn;
dxf = nlp.Phase(end).Plant.States.dxn;

% finalPos = [xf('BasePosY')
%     xf('BaseRotX')
%     xf('BaseRotZ')];
%
% finalState = SymFunction('finalState', finalPos, xf);
% addNodeConstraint(nlp.Phase(end), finalState, {'x'}, 'last',  ...
%     0,0,'Linear');

for i = 1:length(nlp.Phase)
    if nlp.Phase(i).NumNode == 1
        removeConstraint(nlp.Phase(i),'tContDomain');
    end
end

% average step velocity
p_lb = bounds.Stance03.constrBounds.periodicity.lb;
p_ub = bounds.Stance03.constrBounds.periodicity.ub;

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
addConstraint(nlp.Phase(end), 'periodicity', 'last', p_cstr);

% the relabeling/periodicity of joint coordinate is no longer valid
% (this only affects position peridicity, velocity still applies)
removeConstraint(nlp.Phase(end),'xDiscreteMapImpact03');



plant = nlp.Phase(end).Plant;

xf = nlp.Phase(end).Plant.States.xn;
dxf = nlp.Phase(end).Plant.States.dxn;

% Readding Periodicity (ignoring first coordinate)
    R = plant.R;
    x = plant.States.x;
    xn = plant.States.xn;
    x_diff = R*x-xn;
    x_map = SymFunction(['xPartialDiscreteMap' plant.Name],x_diff(2:end),{x,xn});
    
    addNodeConstraint(nlp.Phase(end), x_map, {'x','xn'}, 'first', 0, 0, 'Linear');
    
    
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
    
    paramContR = tomatrix(R - RNext);
    paramContR_fun = SymFunction('paramContR',paramContR,{R, RNext});

    for i = 1:2:length(nlp.Phase)-2
        R_var = nlp.Phase(i).OptVarTable.r(1);

        RNext_var = nlp.Phase(i+2).OptVarTable.r(1);
        
        paramContR_cstr = NlpFunction('Name',paramContR_fun.Name,...
        'Dimension',length(paramContR),'lb',0, 'ub',0,'Type','Linear',...
        'SymFun',paramContR_fun,'DepVariables',[R_var,RNext_var]);
    
        addConstraint(nlp.Phase(i), paramContR_cstr.Name, 'first', paramContR_cstr);
    end

end

if any(strcmp(fieldnames(nlp.Phase(1).OptVarTable), 'tfinal'))
    tfinal = SymVariable('tfinal');
    tfinalActual1 = SymVariable('tfinalActuall', 2);
    tfinalActual2 = SymVariable('tfinalActual2', 2);
    tfinalActual3 = SymVariable('tfinalActual3', 2);
    tfinalActual4 = SymVariable('tfinalActual4', 2);
    
    paramContT = tomatrix(tfinal - (tfinalActual1(2) + tfinalActual2(2) + tfinalActual3(2) + tfinalActual4(2)));
    paramContT_fun = SymFunction('paramContT',paramContT,{tfinal, tfinalActual1,tfinalActual2,tfinalActual3,tfinalActual4});

    tfinalActual1_var = nlp.Phase(1).OptVarTable.T(1);
    tfinalActual2_var = nlp.Phase(3).OptVarTable.T(1);
    tfinalActual3_var = nlp.Phase(5).OptVarTable.T(1);
    tfinalActual4_var = nlp.Phase(7).OptVarTable.T(1);

    for i = 1:length(nlp.Phase)
        if any(strcmp(fieldnames(nlp.Phase(i).OptVarTable), 'tfinal'))
            tfinal_var = nlp.Phase(i).OptVarTable.tfinal(1);
            
            paramCont_cstrT = NlpFunction('Name',paramContT_fun.Name,...
                'Dimension',length(paramContT),'lb',0, 'ub',0,'Type','Linear',...
                'SymFun',paramContT_fun,'DepVariables',[tfinal_var, tfinalActual1_var,tfinalActual2_var,tfinalActual3_var,tfinalActual4_var]);
            
            addConstraint(nlp.Phase(i), paramCont_cstrT.Name, 'first', paramCont_cstrT);
        end
    end
    
end

if any(strcmp(fieldnames(nlp.Phase(1).OptVarTable), 'dfinal'))
    dfinal = SymVariable('dfinal');
    dfinalActual = SymVariable('dfinalActual', nlp.Phase(1).Plant.numState);
    
    paramContD = tomatrix(dfinal - dfinalActual(1));
    paramContD_fun = SymFunction('paramContD',paramContD,{dfinal, dfinalActual});

    dfinalActual_var = nlp.Phase(end-1).OptVarTable.x(end);

    for i = 1:length(nlp.Phase)
        if any(strcmp(fieldnames(nlp.Phase(i).OptVarTable), 'dfinal'))
            dfinal_var = nlp.Phase(i).OptVarTable.dfinal(1);
            
            paramCont_cstrD = NlpFunction('Name',paramContD_fun.Name,...
                'Dimension',length(paramContD),'lb',0, 'ub',0,'Type','Linear',...
                'SymFun',paramContD_fun,'DepVariables',[dfinal_var, dfinalActual_var]);
            
            addConstraint(nlp.Phase(i), paramCont_cstrD.Name, 'first', paramCont_cstrD);
        end
    end
    
end

end