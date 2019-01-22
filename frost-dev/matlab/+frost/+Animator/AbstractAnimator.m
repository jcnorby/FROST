classdef AbstractAnimator < handle
    % An abstract animator class
    % 
    % @author omar @date 2017-06-01
    % 
    % Copyright (c) 2017, UMICH Biped Lab
    % All right reserved.
    %
    % Redistribution and use in source and binary forms, with or without
    % modification, are permitted only in compliance with the BSD 3-Clause 
    % license, see
    % http://www.opensource.org/licenses/BSD-3-Clause

    properties(Access = private)
        tmr timer
    end
    
    properties (GetAccess = protected, SetAccess = immutable)
        fig
        axs
    end
    
    properties (Access = public)
        currentTime double
        curIndex double
        speed double
        updateWorldPosition logical
        
        M
    end
    
    properties (Access = public)
        isLooping logical
        pov frost.Animator.AnimatorPointOfView
        
        startTime double
        endTime double
    end
    
    properties (GetAccess = public, SetAccess = immutable)
        TimerDelta double
    end
    
    properties (Dependent, Access = public)
        isPlaying logical
    end
    
    properties (Access = private)
        x_all;
        t_all;

        grf;
%         feetPos;
        
        text;
        ground;
        h;
        quiverGRF;
    end
    
    properties (Access = public)
        display
    end
    
    methods
        function obj = AbstractAnimator(display, t, x, varargin)
            %             if exist('f', 'var')
            %                 obj.fig = f;
            %                 obj.axs = axes(obj.fig);
            %             else
            %                 obj.fig = figure();
            %                 obj.axs = axes(obj.fig);
            %             end
            obj.display = display;
            obj.fig = display.fig;
            obj.axs = display.axs;
            
            
            obj.t_all = t;
            obj.x_all = x;
            
            obj.startTime = t(1);
            obj.currentTime = obj.startTime;
            obj.endTime = t(end);
            obj.curIndex = -1;
            obj.M = getframe(gcf);
            
            
            % setup timer
            obj.speed = 1;
            
            obj.TimerDelta = round(1/30,3);
            obj.pov = frost.Animator.AnimatorPointOfView.Free;
            
            obj.tmr = timer;
            obj.tmr.Period = obj.TimerDelta;
            obj.tmr.ExecutionMode = 'fixedRate';
            obj.tmr.TimerFcn = @(~, ~) obj.Animate();
            
            % Define Terrain
            if isempty(varargin)
                [terrain.Tx, terrain.Ty] = meshgrid(-10:1:10, -10:1:10);
                terrain.Tz = 0.*terrain.Tx;
            else
                terrain = varargin{1};
            end
            
            obj.ground = surf(terrain.Tx,terrain.Ty,terrain.Tz,'FaceColor',[0.5 0.8 0.5]); hold on;
            
            
            
        end
        
        function playing = get.isPlaying(obj)
            playing = strcmp(obj.tmr.Running, 'on');
        end
        
        function set.isPlaying(obj, play)
            if ~obj.isPlaying && play
                start(obj.tmr);
                notify(obj, 'playStateChanged');
            elseif obj.isPlaying && ~play
                stop(obj.tmr);
                notify(obj, 'playStateChanged');
            end
        end
        
        function set.currentTime(obj, time)
            obj.currentTime = time;
            
            if obj.currentTime > obj.endTime %#ok<*MCSUP>
                obj.currentTime = obj.endTime;
            elseif obj.currentTime < obj.startTime
                obj.currentTime = obj.startTime;
            end
        end
    end
    
    methods (Sealed)
        function Animate(obj, Freeze)
            if ~exist('Freeze', 'var')
                Freeze = false;
            end
            
            if obj.currentTime >= obj.endTime
                obj.currentTime = obj.endTime;
                [x,i] = GetData(obj, obj.currentTime);
                
                notify(obj, 'newTimeStep', frost.Animator.TimeStepData(obj.currentTime, x));
                
                obj.Draw(obj.currentTime, x);
                obj.HandleAxis(obj.currentTime, x);
                
                notify(obj, 'reachedEnd', frost.Animator.TimeStepData(obj.currentTime, x));
                
                if obj.isLooping
                    if ~Freeze
                        obj.currentTime = obj.startTime;
                    end
                else
                    obj.isPlaying = false;
                end
            else
                [x,i] = GetData(obj, obj.currentTime);
                
                notify(obj, 'newTimeStep', frost.Animator.TimeStepData(obj.currentTime, x));
                
                obj.Draw(obj.currentTime, x);
                obj.HandleAxis(obj.currentTime, x);
                
                obj.curIndex = obj.curIndex+1;
                
                if obj.curIndex>0
                    obj.M(obj.curIndex) = getframe(gcf);
                    
                end
                
                if ~Freeze
                    obj.currentTime = obj.currentTime + obj.TimerDelta*obj.speed;
                end
            end
        end
    end
    
    methods
        function HandleAxis(obj, t, x)
            [center, radius, yaw] = GetCenter(obj, t, x);
            if length(radius) == 1
                axis(obj.axs, [center(1)-radius, center(1)+radius, center(2)-radius, center(2)+radius,center(3)-radius/3, center(3)+radius]);
            else
                axis(obj.axs, radius);
            end
            
            hAngle = 0;
            vAngle = 0;
            
            switch(obj.pov)
                case frost.Animator.AnimatorPointOfView.North
                    hAngle = hAngle + 0;
                case frost.Animator.AnimatorPointOfView.South
                    hAngle = hAngle + 180;
                case frost.Animator.AnimatorPointOfView.East
                    hAngle = hAngle - 90;
                case frost.Animator.AnimatorPointOfView.West
                    hAngle = hAngle + 90;
                case frost.Animator.AnimatorPointOfView.Front
                    hAngle = hAngle + yaw;
                case frost.Animator.AnimatorPointOfView.Back
                    hAngle = hAngle + 180 + yaw;
                case frost.Animator.AnimatorPointOfView.Left
                    hAngle = hAngle - 90 + yaw;
                case frost.Animator.AnimatorPointOfView.Right
                    hAngle = hAngle + 90 + yaw;
                case frost.Animator.AnimatorPointOfView.TopSouthEast
                    hAngle = hAngle + 225;
                    vAngle = vAngle + 45;
                case frost.Animator.AnimatorPointOfView.TopFrontLeft
                    hAngle = hAngle + 225 + yaw;
                    vAngle = vAngle + 45;
            end
            
            if obj.pov ~= frost.Animator.AnimatorPointOfView.Free
                view(obj.axs, hAngle, vAngle);
            end
        end
        
        function Draw(obj, t, x)
            
            
            
            obj.display.update(x);
            
            [center, radius, ~] = GetCenter(obj, t, x);
            delete(obj.text);
%             obj.text = text(center(1)-radius/2,center(2),center(3)+radius-0.2,['t = ',sprintf('%.2f',t)]); %#ok<CPROPLC>
%             obj.text.FontSize = 14;
%             obj.text.FontWeight = 'Bold';
%             obj.text.Color = [0,0,0];
            %             set(obj.text);

%             if length(x) >=22 && ~isempty(obj.h)
%                 [x,i] = GetData(obj, t);
%                 feetPos = computeFeetPos(x(1:22));
%                 obj.h.XData = [feetPos(1,1),feetPos(2,1), feetPos(3,1), feetPos(4,1)];
%                 obj.h.YData = [feetPos(1,2),feetPos(2,2), feetPos(3,2), feetPos(4,2)];
%                 obj.h.ZData = [feetPos(1,3),feetPos(2,3), feetPos(3,3), feetPos(4,3)];
%                 
%                 scaling = 0.01;
%                 obj.h.UData = scaling*[obj.grf.fFoot0(1,i), obj.grf.fFoot1(1,i), obj.grf.fFoot2(1,i), obj.grf.fFoot3(1,i)];
%                 obj.h.VData = scaling*[obj.grf.fFoot0(2,i), obj.grf.fFoot1(2,i), obj.grf.fFoot2(2,i), obj.grf.fFoot3(2,i)];
%                 obj.h.WData = scaling*[obj.grf.fFoot0(3,i), obj.grf.fFoot1(3,i), obj.grf.fFoot2(3,i), obj.grf.fFoot3(3,i)];
%             end

            drawGRFs(obj, t, x);
            
            ax = gca;
            
            if obj.pov == frost.Animator.AnimatorPointOfView.North
                ax.SortMethod = 'childorder';
            else
                ax.SortMethod = 'depth';
            end
            
            drawnow;
            
        end
        
        function [center, radius, yaw] = GetCenter(obj, t, x)            
            center = [x(1),0,0];
%             center = [0.25,0,0];
            radius = 0.75;
            yaw = 0;
        end
        
        function [x,i] = GetData(obj, t)
            t_start = obj.t_all(1);
            t_end = obj.t_all(end);
            delta_t = t_end - t_start;
            
            
            
            if t < t_start || t > t_end
                val = floor((t - t_start) / delta_t);
                t = t - val * delta_t;
            end
            
            if t < t_start
                t = t_start;
            elseif t > t_end
                t = t_end;
            end
            
            n = length(obj.t_all);
            x = obj.x_all(:, 1); % Default
            
            a = 1;
            b = n;
            
            while (a <= b)
                c = floor((a + b) / 2);
                i = c;
                if t < obj.t_all(c)
                    x = obj.x_all(:, c);
                    b = c - 1;
                elseif t > obj.t_all(c)
                    a = c + 1;
                else
                    x = obj.x_all(:, c);
                    break;
                end
            end
            
            
        end
        
        

        function loadGRFs(obj, grfInputs)
            obj.grf = struct2cell(grfInputs);
%             obj.feetPos = feetPosInputs;
        end
        
        function createGRFQuiver(obj)
            for i = 1:4
%                 view(obj.axs, 0, 0);
                obj.quiverGRF{i} = quiver3([0],[0],[0],[0],[1],[1], 0, 'r', 'lineWidth', 2); hold on;
            end
            
        end
        
        function drawGRFs(obj, t, x)
            if length(x) >=22 && ~isempty(obj.quiverGRF)
                [x,i] = GetData(obj, t);
                feetPos = computeFeetPos(x(1:22));
                
                scaling = 0.01;
                for leg = 1:4
                    obj.quiverGRF{leg}.XData = feetPos(leg,1);
                    obj.quiverGRF{leg}.YData = feetPos(leg,2);
                    obj.quiverGRF{leg}.ZData = feetPos(leg,3);
                    
                    obj.quiverGRF{leg}.UData = scaling*obj.grf{leg+1}(1,i);
                    obj.quiverGRF{leg}.VData = scaling*obj.grf{leg+1}(2,i);
                    obj.quiverGRF{leg}.WData = scaling*obj.grf{leg+1}(3,i);
                end
            end
        end
        
    end
    
    events
        newTimeStep
        playStateChanged
        reachedEnd
    end
    
end
