function data = DblLaneChange_run(model_params)

function_name = 'DblLaneChange'
batch_size = 0;%model_params.batch_size;

mdl = 'C:\Users\zwc66\MATLAB\Projects\slexamples\DblLaneChange13\main\System\DLCReferenceApplication.slx';
open_system(mdl);

mdl = 'DLCReferenceApplication';
open_system(mdl);

% Enable signal logging for VehFdbk
ph=get_param('DLCReferenceApplication/Predictive Driver/VehFdbk','PortHandles');
set_param(ph.Outport,'DataLogging','on');

% Enable signal logging for Lane
ph=get_param('DLCReferenceApplication/Predictive Driver/VehRef','PortHandles');
set_param(ph.Outport,'DataLogging','on');

ph=get_param('DLCReferenceApplication/Predictive Driver/Linear Predictive Driver','PortHandles');
for i=1:length(ph.Outport)
    set_param(ph.Outport(i), 'DataLogging', 'on');
end;




% Define the set of parameters to sweep
lambdamu = model_params.lambdamu;
numExperiments = length(lambdamu)
%numExperiments = 2
% Define the lateral lane reference
latRef = model_params.latRef;
latRefbp = model_params.latRefbp;


% Create an array of simulation inputs that sets lamdamu equal to the
% Friction constant block parameter
for idx = numExperiments:-1:1
    in(idx) = Simulink.SimulationInput(mdl);
    in(idx) = in(idx).setBlockParameter([mdl '/Lane Change Reference Generator'],...
    'latRefbp', mat2str(latRefbp(idx, :)));
    in(idx) = in(idx).setBlockParameter([mdl '/Lane Change Reference Generator'],...
    'latRef', mat2str(latRef(idx, :)));
    in(idx) = in(idx).setBlockParameter([mdl '/Environment/Friction'],...
        'Value',['ones(4,1).*',num2str(lambdamu(2))]);
end

set_param(mdl, 'StopTime', '20')
save_system(mdl)
tic;
simout = parsim(in, 'ShowSimulationManager', 'on');
toc;

% Plot results from simout object: lateral acceleration vs steering angle
data = [];
for idx = 1:numExperiments
    % Extract Data
    log = simout(idx).get('logsout');

    LNGREF = log.get('xdotref').Values.LngRef.Data;
    LTRLREF = log.get('xdotref').Values.LtrlRef.Data;
    %THROTKILL = log.get('xdotref').Values.ThrotKill;
    
    XDOT = log{10}.Values.Body.xdot;
    XDOT_Data = zeros(size(XDOT.Data));
    for i = 1:length(XDOT.Data)
        if abs(XDOT.Data(i)) >= 1
            XDOT_Data(i) = XDOT.Data(i);
        end;
    end;
    Y = log{10}.Values.Body.Y.Data;
    YDOT = log{10}.Values.Body.ydot.Data;
    PSI = log{10}.Values.Body.psi.Data;
    R = log{10}.Values.Body.r.Data;
    
    STR_CMD = log.get('SteerCmd').Values.Data;
    ACC_CMD = log.get('AccelCmd').Values.Data;
    BRK = log.get('Brake').Values.Data;
    
    %GND = log.get('Ground:1').Values;
    data_idx = horzcat(LNGREF, LTRLREF,...
         XDOT_Data, Y, YDOT, PSI, R,...
         STR_CMD, ACC_CMD, BRK);
     
    len =  length(data_idx);
    
    if batch_size > 0
        for i=1:len-batch_size
            for j=1:batch_size
                data_idx(i, 1:7) = data_idx(i, 1:7) + data_idx(i+j, 1:7);
            end;
            data_idx(i, 8:10) = batch_size * data_idx(i + batch_size, 8:10);
        end;
    end;
    data_idx = data_idx(1: len-batch_size, :)/(batch_size + 1);
    save(strcat(strcat(function_name, num2str(idx)), '.mat'), 'data_idx');
    data = vertcat(data, data_idx);
end; 

save(strcat(function_name, '.mat'), 'data');
