function CoT(nlp, sys)

Ra = 0.186;
kt = 0.0954;
Rineff = 0.8;

domains = sys.Gamma.Nodes.Domain;
T  = SymVariable('t',[2, 1]);
for i=1:numel(domains)
    
    %     h = (T(2) - T(1))/(totalNodes);
    domain = domains{i};
    
    u = tomatrix(domain.Inputs.Control.u);
%     if ~isnan(getJointIndices(domain, 'tail_joint'))
%         u = u./[1;1;1;1;1;1;1;1;Rineff];
%     end
    dx = domain.States.dx;
    B = domain.Gmap.Control.u;
    d = domain.Params.d;
    if any(strcmp(fieldnames(domain.Params), 'r'))
        R = domain.Params.r;
    else
        R = 1;
    end
    
    mechWork = transpose(u)*transpose(B)*dx;
    mechWorkAbs = mechWork./(1 + (2.7182818).^(-mechWork));
%     mechWorkAbs = mechWork;
    resistiveLossMotors = Ra/kt.^2.*u(1:8)*tomatrix(u(1:8));
    if ~isnan(getJointIndices(domain, 'tail_joint'))
        resistiveLossTail = Ra/(kt*R).^2*u(9)*u(9)/(Rineff^2);
    else
        resistiveLossTail = 0;
    end
    resistiveLoss = resistiveLossMotors + resistiveLossTail;
    
    %     u = domain.Inputs.Control.u;
    %     dx = domain.States.dx;
    %     B = domain.Gmap.Control.u;
    %     d = domain.Params.d;
    %
    %     utmp = tomatrix(u(1:end-1));
    %     Btmp = tomatrix(B(:,1:end-1));
    %     mechWork = transpose(utmp)*transpose(Btmp)*dx;
    %     mechWorkAbs = mechWork./(1 + (2.7182818).^(-mechWork));
    %     resistiveLoss = Ra/(kt*Nr)^2*transpose(utmp)*utmp;
    
    E = tovector( resistiveLoss + mechWorkAbs );
    CoTi = tovector(E/(9.81*d));
    if any(strcmp(fieldnames(domain.Params), 'r'))
        power_fun = SymFunction(['powerOverTime_' sys.Gamma.Nodes.Name{i}],CoTi,{domain.Inputs.Control.u,dx,d,R});
    else
        power_fun = SymFunction(['powerOverTime_' sys.Gamma.Nodes.Name{i}],CoTi,{domain.Inputs.Control.u,dx,d});
    end
    
    rs_phase = getPhaseIndex(nlp,sys.Gamma.Nodes.Name{i});
    if any(strcmp(fieldnames(domain.Params), 'r'))
        addRunningCost(nlp.Phase(rs_phase),power_fun,{'u','dx','d','r'});
    else
        addRunningCost(nlp.Phase(rs_phase),power_fun,{'u','dx','d'});
        
    end
    
    
end
nlp.update;
end