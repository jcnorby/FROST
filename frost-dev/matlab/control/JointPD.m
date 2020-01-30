classdef JointPD < Controller
    % This class defines a PD feedback control on the joint space
    %
    % @author ayonga @date 2016-10-14
    % 
    % Copyright (c) 2016, AMBER Lab
    % All right reserved.
    %
    % Redistribution and use in source and binary forms, with or without
    % modification, are permitted only in compliance with the BSD 3-Clause 
    % license, see
    % http://www.opensource.org/licenses/bsd-license.php
    
    
    methods
        
        function obj = JointPD(name)
            % The controller class constructor function
            %
            % Parameters:
            % name: the controller name @type char
            
            % call superclass constructor
            obj = obj@Controller(name);
             
            % initialize default control parameters
            ep = 10;
            obj.Param.kp = 400;
            obj.Param.kd = 1;
            obj.Param.T = 1;
            obj.Param.A = 0.2;
        end
        
        
        
        function u = calcControl(obj, t, x, vfc, gfc, plant, params, logger)
            % Computes the PD feedback control law on joint space
            %
            % Parameters:
            % t: the time instant @type double
            % x: the states @type colvec
            % vfc: the vector field f(x) @type colvec
            % gfc: the vector field g(x) @type colvec
            % plant: the continuous domain @type DynamicalSystem
            % params: the control parameters @type struct
            % logger: the data logger object @type SimLogger
            %
            % Return values:
            % u: the computed torque @type colvec
            
            
            [qd, dqd] = calcDesiredStates(plant, t, x, obj, params);
%             indexes = [7 8 11 12 15 16 19 20 23]; % minitaur with tail
            indexes = [7 8 9 11 12 13 15 16 17 19 20 21];   % Vision60
            qa = x(indexes);
%             dqa = x(indexes+25); % minitaur with tail
            dqa = x(indexes+22);   % Vision60
            % compute error terms
            qerr = qa - qd;
            dqerr = dqa - dqd;
            
            % feedback controller
            u = - obj.Param.kp*qerr - obj.Param.kd*dqerr;
%             A = obj.Param.A;
%             T = obj.Param.T;
%             m = 0.4;
%             l = 0.5;
%             u = zeros(9,1);
%             u(9) = m*l^2*(-A*(2*pi/T)^2*sin(2*pi*t/T)) + 9.81*0.4*0.5*sin(x(23)) - obj.Param.kp*qerr(9) - obj.Param.kd*dqerr(9);
            
            if ~isempty(logger)
                calc = logger.calc;

                calc.qerr = qerr;
                calc.dqerr = dqerr;
                calc.qd = qd;
                calc.dqd = dqd;
                calc.u = u;
                
                logger.calc = calc;
            end
            
        end
    end
    
end