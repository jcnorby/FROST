function minitaur_disp = LoadRobotNoLegsDisplay(robot, varargin)





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
torso_top = frost.Animator.Rectangler(minitaur_disp.axs, robot, base, [-0.25 -0.25 -0.25],[0.25 0.25 0.25], name, opts);
minitaur_disp.addItem(torso_top);

tail = CoordinateFrame(...
    'Name','tail',...
    'Reference',robot.Joints(getJointIndices(robot, 'tail_joint_2')),...
    'Offset',[0,0,0],...
    'R',[0,0,0]...
    );
name = 'tail_link';
offset = [0,0,1];
tail_link = frost.Animator.Cylinder(minitaur_disp.axs, robot, tail, offset, name, opts);
minitaur_disp.addItem(tail_link);

name = 'tail_mass_link';
tail_mass_link = frost.Animator.Sphere(minitaur_disp.axs, robot, sys.frames.TailMass(robot), name, opts);
tail_mass_link.radius = 0.05;
tail_mass_link.update(zeros(robot.numState,1))
minitaur_disp.addItem(tail_mass_link);




end