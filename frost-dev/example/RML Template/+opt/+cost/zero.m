function zero(nlp)

domain = nlp.Plant;

u = domain.Inputs.Control.u;
u2r = tovector(0*norm(u).^2);
u2r_fun = SymFunction('zero',u2r,{u});
addRunningCost(nlp,u2r_fun,{'u'});

nlp.update;
end
