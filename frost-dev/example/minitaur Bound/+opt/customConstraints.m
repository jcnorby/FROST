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

% % Add intermediate state to transition into deceleration
opt.constraint.intermediate_state(nlp.Phase(3), bounds);

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
dfinal = nlp.Phase(end-1).Plant.Params.dfinal;
tfinal = nlp.Phase(end-1).Plant.Params.tfinal;
gaitVel = SymFunction('averageGaitVelocity', dfinal/(tfinal + 1e-9), {dfinal, tfinal});
addNodeConstraint(nlp.Phase(end-1), gaitVel, {'dfinal','tfinal'}, 'last',  ...
    1.25,1.25,'Linear');


% periodicity
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
addConstraint(nlp.Phase(end), 'periodicity', 'last', p_cstr);

% the relabeling/periodicity of joint coordinate is no longer valid
% (this only affects position peridicity, velocity still applies)
% removeConstraint(nlp.Phase(end),'xDiscreteMapFrontImpact');
removeConstraint(nlp.Phase(end),'xPlusCont');



% plant = nlp.Phase(end).Plant;
% 
% xf = nlp.Phase(end).Plant.States.xn;
% dxf = nlp.Phase(end).Plant.States.dxn;
% 
% % Readding Periodicity (ignoring first coordinate)
% R = plant.R;
% x = plant.States.x;
% xn = plant.States.xn;
% x_diff = R*x-xn;
% x_map = SymFunction(['xPartialDiscreteMap' plant.Name],x_diff(2:end),{x,xn});
% 
% addNodeConstraint(nlp.Phase(end), x_map, {'x','xn'}, 'first', 0, 0, 'Linear');



opt.constraint.param_cont_T(nlp, bounds);
opt.constraint.param_cont_R(nlp, bounds);

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