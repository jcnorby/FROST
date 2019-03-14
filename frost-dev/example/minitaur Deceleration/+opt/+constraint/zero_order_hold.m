function zero_order_hold(nlp,bounds)
domain = nlp.Plant;
u = domain.Inputs.Control.u;

u_card = SymVariable('ucard', length(u));
u_int = SymVariable('uint', length(u));
u_diff = u_int - u_card;
u_zoh_fun = SymFunction('zeroOrderHoldTorques',u_diff,{u_card, u_int});

for i = 1:(nlp.NumNode-1)/2
    u_card_var = nlp.OptVarTable.u(2*i-1);
    u_int_var = nlp.OptVarTable.u(2*i);
    
    u_zoh_cstr(i) = NlpFunction('Name',u_zoh_fun.Name,...
    'Dimension',length(u_zoh_fun),'lb',0, 'ub',0,'Type','Linear',...
    'SymFun',u_zoh_fun,'DepVariables',[u_card_var;u_int_var]);
end

addConstraint(nlp, 'zeroOrderHoldTorques', 'interior', u_zoh_cstr);

end