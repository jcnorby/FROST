function init_path(export_path)
% initialize the path



if nargin > 0
    if ~exist(export_path,'dir')
        mkdir(export_path);
    end
    addpath(export_path);
end

% Add all the frost paths
frost_path  = '../../';
addpath(frost_path);
frost_addpath;

% Add whatever other paths you may want
addpath(genpath('process'));
addpath(genpath('scripts'));

end
