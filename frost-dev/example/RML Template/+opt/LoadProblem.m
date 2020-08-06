function nlp = LoadProblem(system, bounds, load_path)


if nargin < 3
    load_path = [];
end

% Define grid resolution
num_grid = 20;

options = {'EqualityConstraintBoundary', 1e-4,...
    'DistributeParameters',true,...
    'DistributeTimeVariable', false,...
    'CollocationScheme', 'HermiteSimpson'};

% Create the optimization object
nlp = HybridTrajectoryOptimization('spirit40hybrid', system, num_grid, [], options{:});

if isempty(load_path)
    nlp.configure(bounds);
else
    nlp.configure(bounds, 'LoadPath',load_path);
end

% stance = sys.domains.DoubleStance(system, load_path);
% stance.UserNlpConstraint = @opt.callback.StanceConstraints;
% nlp = TrajectoryOptimization('spirit40continuous', stance, num_grid, [], options{:});
% if isempty(load_path)
%     nlp.configure(bounds);
% else
%     nlp.configure(bounds, 'LoadPath',load_path);
% end

% % Select a cost function
opt.cost.Height(nlp);
% opt.cost.verticalVelocity(nlp);
% opt.cost.zero(nlp);
% opt.cost.zeros(nlp, system);

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

