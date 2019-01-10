function minitaur_disp = LoadRobotDisplay(robot, varargin)





ip = inputParser;
ip.addParameter('UseExported',true,@(x) isequal(x,true) || isequal(x,false));
ip.addParameter('ExportPath','',@(x)ischar(x));
ip.addParameter('SkipExporting',false,@(x) isequal(x,true) || isequal(x,false));

ip.parse(varargin{:});

opts = ip.Results;
if isempty(opts.ExportPath)
    root_path = utils.get_root_path();
    export_path = fullfile(root_path,'gen','animator');
    opts.ExportPath = export_path;
else
    export_path = opts.ExportPath;
end
if ~exist(export_path,'dir')
    mkdir(export_path);
end
addpath(export_path);

f = figure(1000);clf;
minitaur_disp = frost.Animator.Display(f, robot, opts);
base = CoordinateFrame(...
    'Name','Base',...
    'Reference',robot.Joints(getJointIndices(robot, 'BaseRotZ')),...
    'Offset',[0,0,0],...
    'R',[0,0,0]...
    );

    name = 'base_chassis_link';
    offset = [0,0,0.58];
    torso_top = frost.Animator.Rectangler(minitaur_disp.axs, robot, base, [-0.2 -0.075 -0.05],[0.2 0.075 0.05], name, opts);
    minitaur_disp.addItem(torso_top);


knee_back_leftL = CoordinateFrame(...
    'Name','knee_back_leftL',...
    'Reference',robot.Joints(getJointIndices(robot, 'knee_back_leftL_link')),...
    'Offset',[0,0,0],...
    'R',[0,0,0]...
    );
name = 'lower_leg_back_leftL_link';
offset = [0,0,0.24];
lower_leg_back_leftL_link = frost.Animator.Cylinder(minitaur_disp.axs, robot,knee_back_leftL, offset, name, opts);
minitaur_disp.addItem(lower_leg_back_leftL_link);


knee_back_leftR = CoordinateFrame(...
    'Name','knee_back_leftR',...
    'Reference',robot.Joints(getJointIndices(robot, 'knee_back_leftR_link')),...
    'Offset',[0,0,0],...
    'R',[0,0,0]...
    );
name = 'lower_leg_back_leftR_link';
offset = [0,0,0.2];
lower_leg_back_leftR_link = frost.Animator.Cylinder(minitaur_disp.axs, robot, knee_back_leftR, offset, name, opts);
minitaur_disp.addItem(lower_leg_back_leftR_link);


knee_back_rightL = CoordinateFrame(...
    'Name','knee_back_rightL',...
    'Reference',robot.Joints(getJointIndices(robot, 'knee_back_rightL_link')),...
    'Offset',[0,0,0],...
    'R',[0,0,0]...
    );
name = 'lower_leg_back_rightL_link';
offset = [0,0,0.2];
lower_leg_back_rightL_link = frost.Animator.Cylinder(minitaur_disp.axs, robot,knee_back_rightL, offset, name, opts);
minitaur_disp.addItem(lower_leg_back_rightL_link);

knee_back_rightR = CoordinateFrame(...
    'Name','knee_back_rightR',...
    'Reference',robot.Joints(getJointIndices(robot, 'knee_back_rightR_link')),...
    'Offset',[0,0,0],...
    'R',[0,0,0]...
    );
name = 'lower_leg_back_rightR_link';
offset = [0,0,0.24];
lower_leg_back_rightR_link = frost.Animator.Cylinder(minitaur_disp.axs, robot, knee_back_rightR, offset, name, opts);
minitaur_disp.addItem(lower_leg_back_rightR_link);



knee_front_leftL = CoordinateFrame(...
    'Name','knee_front_leftL',...
    'Reference',robot.Joints(getJointIndices(robot, 'knee_front_leftL_link')),...
    'Offset',[0,0,0],...
    'R',[0,0,0]...
    );
name = 'lower_leg_front_leftL_link';
offset = [0,0,0.24];
lower_leg_front_leftL_link = frost.Animator.Cylinder(minitaur_disp.axs, robot,knee_front_leftL, offset, name, opts);
minitaur_disp.addItem(lower_leg_front_leftL_link);

knee_front_leftR = CoordinateFrame(...
    'Name','knee_front_leftR',...
    'Reference',robot.Joints(getJointIndices(robot, 'knee_front_leftR_link')),...
    'Offset',[0,0,0],...
    'R',[0,0,0]...
    );
name = 'lower_leg_front_leftR_link';
offset = [0,0,0.2];
lower_leg_front_leftR_link = frost.Animator.Cylinder(minitaur_disp.axs, robot, knee_front_leftR, offset, name, opts);
minitaur_disp.addItem(lower_leg_front_leftR_link);


knee_front_rightL = CoordinateFrame(...
    'Name','knee_front_rightL',...
    'Reference',robot.Joints(getJointIndices(robot, 'knee_front_rightL_link')),...
    'Offset',[0,0,0],...
    'R',[0,0,0]...
    );
name = 'lower_leg_front_rightL_link';
offset = [0,0,0.2];
lower_leg_front_rightL_link = frost.Animator.Cylinder(minitaur_disp.axs, robot,knee_front_rightL, offset, name, opts);
minitaur_disp.addItem(lower_leg_front_rightL_link);

knee_front_rightR = CoordinateFrame(...
    'Name','knee_front_rightR',...
    'Reference',robot.Joints(getJointIndices(robot, 'knee_front_rightR_link')),...
    'Offset',[0,0,0],...
    'R',[0,0,0]...
    );
name = 'lower_leg_front_rightR_link';
offset = [0,0,0.24];
lower_leg_front_rightR_link = frost.Animator.Cylinder(minitaur_disp.axs, robot, knee_front_rightR, offset, name, opts);
minitaur_disp.addItem(lower_leg_front_rightR_link);


if ~isnan(getJointIndices(robot, 'tail_joint'))
    tail = CoordinateFrame(...
        'Name','tail',...
        'Reference',robot.Joints(getJointIndices(robot, 'tail_joint')),...
        'Offset',[0,0,0],...
        'R',[0,0,0]...
        );
    name = 'tail_link';
    offset = [0,0,0.5];
    tail_link = frost.Animator.Cylinder(minitaur_disp.axs, robot, tail, offset, name, opts);
    minitaur_disp.addItem(tail_link);
    
    name = 'tail_mass_link';
    tail_mass_link = frost.Animator.Sphere(minitaur_disp.axs, robot, sys.frames.TailMass(robot), name, opts);
    tail_mass_link.radius = 0.04;
    minitaur_disp.addItem(tail_mass_link);
end


name = 'toe_front_leftR_link';
toe_front_leftR_link = frost.Animator.Sphere(minitaur_disp.axs, robot, sys.frames.Foot0(robot), name, opts);
minitaur_disp.addItem(toe_front_leftR_link);

name = 'toe_back_leftR_link';
toe_back_leftR_link = frost.Animator.Sphere(minitaur_disp.axs, robot, sys.frames.Foot1(robot), name, opts);
minitaur_disp.addItem(toe_back_leftR_link);

name = 'toe_front_rightL_link';
toe_front_rightL_link = frost.Animator.Sphere(minitaur_disp.axs, robot, sys.frames.Foot2(robot), name, opts);
minitaur_disp.addItem(toe_front_rightL_link);

name = 'toe_back_rightL_link';
toe_back_rightL_link = frost.Animator.Sphere(minitaur_disp.axs, robot, sys.frames.Foot3(robot), name, opts);
minitaur_disp.addItem(toe_back_rightL_link);



end