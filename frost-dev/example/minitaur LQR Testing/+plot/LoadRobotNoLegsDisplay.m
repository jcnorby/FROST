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
    offset = [0,0,0.58];
    torso_top = frost.Animator.Rectangler(minitaur_disp.axs, robot, base, [-0.2 -0.075 -0.05],[0.2 0.075 0.05], name, opts);
    minitaur_disp.addItem(torso_top);



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





end