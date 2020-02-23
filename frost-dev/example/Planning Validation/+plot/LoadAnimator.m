function [conGUI] = LoadAnimator(robot, gait, varargin)
    
    gait = opt.interpGait(gait, 200);

    cont_domain_idx = find(arrayfun(@(x)~isempty(x.tspan),gait));
    
    mergedGait = mergeGait(gait);
    
%     plotGait = mergeGait(smoothGait);


    t = [];
    q = [];     
    
    for j=reshape(cont_domain_idx, 1, numel(cont_domain_idx))
        t = [t,gait(j).tspan];         %#ok<*AGROW>
        q = [q,gait(j).states.x];
    end
    
    exo_disp = plot.LoadRobotDisplay(robot, varargin{:});
    
    anim = frost.Animator.AbstractAnimator(exo_disp, t, q);

    anim.createGRFQuiver();
    anim.loadGRFs(mergedGait.inputs);

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