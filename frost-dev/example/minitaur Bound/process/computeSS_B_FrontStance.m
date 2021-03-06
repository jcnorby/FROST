function B = computeSS_B_FrontStance(in1)
%COMPUTESS_B_FRONTSTANCE
%    B = COMPUTESS_B_FRONTSTANCE(IN1)

%    This function was generated by the Symbolic Math Toolbox version 8.1.
%    28-Nov-2018 12:46:53

q0 = in1(4,:);
q1 = in1(5,:);
q2 = in1(6,:);
q3 = in1(7,:);
q4 = in1(8,:);
q5 = in1(9,:);
q6 = in1(10,:);
q7 = in1(11,:);
t2 = q0+q1;
t3 = cos(t2);
t4 = q0.*(1.0./2.0);
t5 = q1.*(1.0./2.0);
t6 = t4+t5;
t7 = cos(t6);
t8 = t7.^2;
t9 = sqrt(2.0);
t10 = t3+7.0;
t11 = sqrt(t10);
t12 = t8.^2;
t13 = t3-1.0;
t14 = 1.0./t13;
t15 = t7.*3.0;
t24 = t9.*t11;
t25 = t3.*t9.*t11.*(1.0./4.0);
t16 = t15-t24-t25+t7.*t8;
t17 = t7.*7.2e1;
t18 = t7.*t8.*7.2e1;
t19 = t7.*t12.*1.6e1;
t26 = t9.*t11.*2.1e1;
t27 = t3.*t9.*t11.*1.2e1;
t28 = t9.*t11.*t12.*8.0;
t20 = t17+t18+t19-t26-t27-t28;
t21 = 1.0./t20;
t22 = t3.*(1.0./2.0);
t23 = t22+3.0./2.0;
t29 = q2+q3;
t30 = cos(t29);
t31 = q2.*(1.0./2.0);
t32 = q3.*(1.0./2.0);
t33 = t31+t32;
t34 = cos(t33);
t35 = t34.^2;
t36 = t30+7.0;
t37 = sqrt(t36);
t38 = t35.^2;
t39 = t30-1.0;
t40 = 1.0./t39;
t41 = t34.*3.0;
t50 = t9.*t37;
t51 = t9.*t30.*t37.*(1.0./4.0);
t42 = t41-t50-t51+t34.*t35;
t43 = t34.*7.2e1;
t44 = t34.*t35.*7.2e1;
t45 = t34.*t38.*1.6e1;
t52 = t9.*t37.*2.1e1;
t53 = t9.*t30.*t37.*1.2e1;
t54 = t9.*t37.*t38.*8.0;
t46 = t43+t44+t45-t52-t53-t54;
t47 = 1.0./t46;
t48 = t30.*(1.0./2.0);
t49 = t48+3.0./2.0;
t55 = q4+q5;
t56 = cos(t55);
t57 = q4.*(1.0./2.0);
t58 = q5.*(1.0./2.0);
t59 = t57+t58;
t60 = cos(t59);
t61 = t60.^2;
t62 = t56+7.0;
t63 = sqrt(t62);
t64 = t61.^2;
t65 = t56-1.0;
t66 = 1.0./t65;
t67 = t60.*3.0;
t76 = t9.*t63;
t77 = t9.*t56.*t63.*(1.0./4.0);
t68 = t67-t76-t77+t60.*t61;
t69 = t60.*7.2e1;
t70 = t60.*t61.*7.2e1;
t71 = t60.*t64.*1.6e1;
t78 = t9.*t63.*2.1e1;
t79 = t9.*t56.*t63.*1.2e1;
t80 = t9.*t63.*t64.*8.0;
t72 = t69+t70+t71-t78-t79-t80;
t73 = 1.0./t72;
t74 = t56.*(1.0./2.0);
t75 = t74+3.0./2.0;
t81 = q6+q7;
t82 = cos(t81);
t83 = q6.*(1.0./2.0);
t84 = q7.*(1.0./2.0);
t85 = t83+t84;
t86 = cos(t85);
t87 = t86.^2;
t88 = t82+7.0;
t89 = sqrt(t88);
t90 = t87.^2;
t91 = t82-1.0;
t92 = 1.0./t91;
t93 = t86.*3.0;
t102 = t9.*t89;
t103 = t9.*t82.*t89.*(1.0./4.0);
t94 = t93-t102-t103+t86.*t87;
t95 = t86.*7.2e1;
t96 = t86.*t87.*7.2e1;
t97 = t86.*t90.*1.6e1;
t104 = t9.*t89.*2.1e1;
t105 = t9.*t82.*t89.*1.2e1;
t106 = t9.*t89.*t90.*8.0;
t98 = t95+t96+t97-t104-t105-t106;
t99 = 1.0./t98;
t100 = t82.*(1.0./2.0);
t101 = t100+3.0./2.0;
B = reshape([0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,t14.*t16.*t21.*-6.4e4,t14.*t16.*t21.*t23.*-3.2e4,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,t14.*t16.*t21.*t23.*-3.2e4,t14.*t16.*t21.*-6.4e4,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,t40.*t42.*t47.*-6.4e4,t40.*t42.*t47.*t49.*-3.2e4,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,t40.*t42.*t47.*t49.*-3.2e4,t40.*t42.*t47.*-6.4e4,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,t66.*t68.*t73.*-6.4e4,t66.*t68.*t73.*t75.*-3.2e4,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,t66.*t68.*t73.*t75.*-3.2e4,t66.*t68.*t73.*-6.4e4,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,t92.*t94.*t99.*-6.4e4,t92.*t94.*t99.*t101.*-3.2e4,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,t92.*t94.*t99.*t101.*-3.2e4,t92.*t94.*t99.*-6.4e4,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0e1],[24,9]);
