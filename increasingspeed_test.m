function net = DblLaneChange_test(test_params, inputs, targets)

if test_params.random == true
    inputs_ = zeros(size(inputs));
    targets_ = zeros(size(targets));
    [wid, len] = size(inputs);
    shuffle = randperm(len);
    for i=1:len
        idx = shuffle(i);
        inputs_(:, i) = inputs(:, idx);
        targets_(:, i) = targets(:, idx);
    end;
end;

inputs = inputs_;
targets = targets_;
assert(isequal(size(inputs), size(inputs_)) &&...
    isequal(size(targets),size(targets_)));   
fprintf("Assertion passed!!!");
% Load a Fitting Network
net = fitnet(hiddenLayerSize);

% Set up Division of Data for Training, Validation, Testing
net.divideParam.trainRatio = train_params.trainRatio;
net.divideParam.valRatio = train_params.valRatio;
net.divideParam.testRatio = train_params.testRatio;
 
% Train the Network
[net,tr] = train(net,inputs,targets);
 
% Test the Network
outputs = net(inputs);
errors = gsubtract(outputs,targets);
performance = perform(net,targets,outputs)
 
% View the Network

tInd = tr.testInd;
tstOutputs = net(inputs(:, tInd));
tstPerform = perform(net, targets(tInd), tstOutputs)

view(net)
gensim(net,-1)

%save net
