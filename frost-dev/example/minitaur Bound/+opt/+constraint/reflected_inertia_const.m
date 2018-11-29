function reflected_inertia_const(nlp, bounds)
%     constraints for motor torque

return;
domain = nlp.Plant;
uRIL = domain.Inputs.External.uReflectedInertiaLoad;
uRIB = domain.Inputs.External.uReflectedInertiaBody;
ddx = domain.States.ddx;
Jm = domain.Links(domain.getLinkIndices('tail_rotor')).Inertia(2,2);
R = domain.Params.r;

load = uRIL - (-Jm*(R.*R - 1).*ddx('tail_joint') - Jm*(R - 1).*ddx('BaseRotY'));
body = uRIB - (-Jm*(R - 1)*ddx('tail_joint'));

load_func = SymFunction('uRIL',load,{uRIL,ddx,R});
body_func = SymFunction('uRIB',body,{uRIB,ddx,R});

addNodeConstraint(nlp, load_func, {'uReflectedInertiaLoad', 'ddx', 'r'}, 'all', ...
    0, 0,'Nonlinear');
addNodeConstraint(nlp, body_func, {'uReflectedInertiaBody', 'ddx', 'r'}, 'all', ...
    0, 0,'Nonlinear');

end


