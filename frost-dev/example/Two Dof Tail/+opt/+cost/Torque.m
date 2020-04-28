function Torque(nlp, domain)

u = domain.Inputs.Control.u;
u2r = sum(tovector(u.^2));
u2r_fun = SymFunction('torque',u2r,{u});
addRunningCost(nlp,u2r_fun,{'u'});

nlp.update;
end
