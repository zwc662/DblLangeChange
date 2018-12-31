function data = DblLaneChange_run(model_params)

mdl = 'C:\Users\zwc66\MATLAB\Projects\slexamples\DblLaneChange13\main\System\ISReferenceApplication.slx';
open_system(mdl);

mdl = 'DLCReferenceApplication';
open_system(mdl);

% Enable signal logging for VehFdbk
ph=get_param('DLCReferenceApplication/Visualization/VehFdbk','PortHandles');
set_param(ph.Outport,'DataLogging','on');

% Enable signal logging for Lane
ph=get_param('DLCReferenceApplication/Visualization/Lane','PortHandles');
set_param(ph.Outport,'DataLogging','on');

% Define the set of parameters to sweep
lambdamu = model_params.lambdamu;
numExperiments = length(lambdamu);

% Create an array of simulation inputs that sets lamdamu equal to the
% Friction constant block parameter
for idx = numExperiments:-1:1
    in(idx) = Simulink.SimulationInput(mdl);
    in(idx) = in(idx).SetBlockParameter([mdl '/Environment/Friction'],...
        'Value',['ones(4,1).*',num2str(lambdamu(idx))]);
end

set_param(mdl, 'StopTime', '30')
save_system(mdl)
tic;
simout = parsim(in, 'ShowSimulationManager', 'on');
toc;
