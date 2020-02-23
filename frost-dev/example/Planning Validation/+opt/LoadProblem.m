function nlp = LoadProblem(system, bounds, traj, load_path)


if nargin < 3
    load_path = [];
end

% Define grid resolution
num_grid.Stance = 30;
num_grid.Flight = 30;

options = {'EqualityConstraintBoundary', 1e-4,...
    'DistributeParameters',true,...
    'DistributeTimeVariable', false,...
    'ConstantTimeHorizon',[0;traj.action(7)],...
    'CollocationScheme', 'Trapezoidal'};

% Create the optimization object
nlp = HybridTrajectoryOptimization('planning_validation_opt', system, num_grid, [], options{:});
nlp.Phase(3).setOption('ConstantTimeHorizon', [0;traj.action(8)]);

% Load the trajectory to be tracked
for i = 1:length(nlp.Phase)
    if nlp.Phase(i).NumNode > 1
        nlp.Phase(i).UserParams.traj = traj;
    end
end

if isempty(load_path)
    nlp.configure(bounds);
else
    nlp.configure(bounds, 'LoadPath',load_path);
end

% % Select a cost function
opt.cost.zero(nlp, system);
% opt.cost.track_state_cost(nlp, system);

% % Remove constraint that requires gaits to start at t=0
% for i = 1:length(nlp.Phase)
%     if nlp.Phase(i).NumNode == 1
%         removeConstraint(nlp.Phase(i),'tContDomain');
%     end
% end

% Add any other inter-domain constraints
% opt.constraint.init_state(nlp.Phase(1), bounds);
% opt.constraint.final_state(nlp.Phase(end), bounds);

% the relabeling/periodicity of joint coordinate is no longer valid
% (this only affects position peridicity, velocity still applies)
% % removeConstraint(nlp.Phase(end),'xDiscreteMapFrontImpact');
% removeConstraint(nlp.Phase(end),'xPlusCont');
% removeConstraint(nlp.Phase(end),'dxPlusCont');

% Load cost and constraints into nlp arrays
nlp.update;
end

