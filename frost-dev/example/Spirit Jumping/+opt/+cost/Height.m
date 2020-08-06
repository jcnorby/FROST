function Height(nlp)

domain = nlp.Phase(end).Plant;

x = domain.States.x;
height = -x('BasePosZ');
height_fun = SymFunction('height',height,{x});

addNodeCost(nlp.Phase(end),height_fun,{'x'}, 'last');
nlp.update;
end
