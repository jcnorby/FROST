function [conGUI] = LoadAnimator(robot, gait, varargin)
    
    
    cont_domain_idx = find(arrayfun(@(x)~isempty(x.tspan),gait));
    
    
    t = [];
    q = []; 
    
    for j=cont_domain_idx.'
        t = [t,gait(j).tspan];         %#ok<*AGROW>
        q = [q,gait(j).states.x];        
    end
    
    exo_disp = plot.LoadRobotNoLegsDisplay(robot, varargin{:});
    
    anim = frost.Animator.AbstractAnimator(exo_disp, t, q);
    anim.isLooping = false;
    anim.speed = 0.1;
    anim.pov = frost.Animator.AnimatorPointOfView.Free;
    anim.Animate(true);
    conGUI = frost.Animator.AnimatorControls();
    conGUI.anim = anim;
    set(gcf,'color','w')
    xlabel('x (m)');
    ylabel('y (m)');
    zlabel('z (m)');
end