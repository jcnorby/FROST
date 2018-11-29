function zero(nlp, sys)

Ra = 0.186;
kt = 0.0954;
Nr = 1;

domains = sys.Gamma.Nodes.Domain;
T  = SymVariable('t',[2, 1]);
for i=1:numel(domains)    
    
%     h = (T(2) - T(1))/(totalNodes);
    domain = domains{i};
    
    u = tomatrix(domain.Inputs.Control.u);
    dx = domain.States.dx;
    B = domain.Gmap.Control.u;
%     d = domain.Params.d;

    mechWork = transpose(u)*transpose(B)*dx;
    mechWorkAbs = mechWork./(1 + (2.7182818).^(-mechWork));
    resistiveLoss = Ra/(kt*Nr)^2*transpose(u)*u;
    
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
    CoTi = tovector(0*E);
    power_fun = SymFunction(['powerOverTime_' sys.Gamma.Nodes.Name{i}],CoTi,{u,dx});
    rs_phase = getPhaseIndex(nlp,sys.Gamma.Nodes.Name{i});
    addRunningCost(nlp.Phase(rs_phase),power_fun,{'u','dx'});
    
    
end
nlp.update;
end