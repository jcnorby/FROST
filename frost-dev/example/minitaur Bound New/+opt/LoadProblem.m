function nlp = LoadProblem(system, bounds, load_path)

% NO FLIGHT

if nargin < 3
    load_path = [];
end

% Define grid resolution
res = 15;
num_grid.FrontStance = res;
num_grid.BackStance = res;
num_grid.SlidingStance = res;
num_grid.Flight = res;

options = {'EqualityConstraintBoundary', 1e-4,...
    'DistributeTimeVariable', false,...
    'DistributeParameters',true};

% Create the optimization object
nlp = HybridTrajectoryOptimization('minitaur_opt', system, num_grid, [], options{:});

if isempty(load_path)
    nlp.configure(bounds);
else
    nlp.configure(bounds, 'LoadPath',load_path);
end

% % Select a cost function
% opt.cost.Torques(nlp, system);
opt.cost.CoT(nlp, system);
% opt.cost.zero(nlp, system);
% opt.cost.avgDeceleration(nlp, system);

% % Remove constraint that requires gaits to start at t=0
% for i = 1:length(nlp.Phase)
%     if nlp.Phase(i).NumNode == 1
%         removeConstraint(nlp.Phase(i),'tContDomain');
%     end
% end

% Add any other inter-domain constraints
opt.customConstraints(nlp, bounds);

% Load cost and constraints into nlp arrays
nlp.update;
end


