




function_name = 'DblLaneChange';

model_params = struct(...
    'batch_size', 5,...
    'lambdamu', [0.50, 0.65, 0.70, 0.75, 0.80],...
    'latRefbp', [0, 2, 12, 25.5, 36.5, 48, 61;...
                 0, 1, 12, 25.5, 36.5, 48, 61;...
                 0, 1, 24, 40.5, 56.5, 78, 81;...
                 0, 1, 18, 35.5, 56.5, 70, 81;...
                 0, 1,  6, 25.5, 36.5, 48, 61;...
                ],...
    'latRef',  -[0, 0, 0.75, 3.5,  2.5, 0, 0;...
                 0, 0, 0.75, 3.5,  2.5, 0, 0;...
                 0, 0, 0.75, 3.5,  2.5, 0, 0;...
                 0, 0, 0.75, 3.5,  2.5, 0, 0;...
                 0, 0, 0.75, 3.5,  2.5, 0, 0;...
                 ]); 

%    'latRefbp', '[0    2 6     8   12 25.5 36.5   48  61  72 85 97   108  120  132 144 156 168]',...
%    'latRef', ' -[0,0.75,3.5,2.5,0.75, 3.5, 2.5,1.75,5.5,2.5, 0, 0, 2.75, 5.5, 3.5, 0.75, 3.5, 2.5]');

data = feval(strcat(function_name, '_run'), model_params);

%{
% Load all datasets in one time
result = load('DblLaneChange.mat');
data = result.data;
data = data.';
[wid, len] = size(data)
inputs = data(1:wid - 3, :);
targets = data(wid-2:wid, :);
size(inputs)
size(targets)
%}
%{
% Build history dataset file ignoring the resetting between experiment
history = 5;
dataset = [];
for i=history + 1:len,
    data_idx = [];
    for j=i-history:i-1,
        data_idx = vertcat(data_idx, data(1:10, j)); 
    end;
    data_idx = vertcat(data_idx, data(1:10, i));
    dataset = horzcat(dataset, data_idx);
end;
save('DblLaneChange_dataset.mat', 'dataset');
%}

%{
% Read dataset file
dataset = [];
result = load('DblLaneChange_dataset.mat')
data = result.dataset;

[wid, len] = size(data)
inputs = data(1:wid - 3, :);
targets = data(wid-2:wid, :);

size(inputs)
size(targets)
%}

%{
% Load datasets one by one for System ID
delay = 1
inputs_mpc = []
targets_mpc = []
for i=1:5
    result = load(strcat(strcat('DblLaneChange', num2str(i)), '.mat'));
    data = result.data_idx;
    data = data.';
    [wid, len] = size(data)
    inputs_mpc =  horzcat(inputs_mpc, data(1:10, 1: len - delay));
    targets_mpc = horzcat(targets_mpc, data(4, delay + 1: len));
end,
%}
%{
train_params = struct(...
    'hiddelLayerSize', [64, 20],...
    'random', true,...
    'trainRatio', 70/100,...
    'valRatio', 15/100,...
    'testRatio', 15/100);

net = feval(strcat(function_name, '_train'), train_params, inputs, targets);
%}
%net_1 = feval(strcat(function_name, '_train'), train_params, inputs, target_1);
%net_2 = feval(strcat(function_name, '_train'), train_params, inputs, target_2);
%net_3 = feval(strcat(function_name, '_train'), train_params, inputs, target_3);
