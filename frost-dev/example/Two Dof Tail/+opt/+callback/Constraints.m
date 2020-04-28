function Constraints(nlp, bounds, varargin)
    
    ip = inputParser;
    ip.addParameter('LoadPath',[],@ischar);
    ip.parse(varargin{:});
    
    opt.constraint.init_state(nlp, bounds);
    opt.constraint.final_state(nlp, bounds);
    opt.constraint.motor_model(nlp, bounds);
end
