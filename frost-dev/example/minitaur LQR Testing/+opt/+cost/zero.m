function zero(nlp, sys)

x =  sys.States.x;

power_fun = SymFunction('Zero',0,{x});
addRunningCost(nlp,power_fun,{'x'});

nlp.update;
end