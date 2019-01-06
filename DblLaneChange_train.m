function net = DblLaneChange_train(train_params, inputs, targets)

if train_params.random == true
    [wid, len] = size(inputs);
    idx = randperm(size(inputs,2));
    X = inputs(:, idx);
    Y = targets(:, idx);
end;

assert(isequal(size(inputs), size(X))); 
assert(isequal(size(targets), size(Y)));
fprintf("Assertion passed!!!");


% Create a Fitting Network
hiddenLayerSize = train_params.hiddelLayerSize;
net = fitnet(hiddenLayerSize, 'trainlm');

% Set up Division of Data for Training, Validation, Testing
net.divideParam.trainRatio = train_params.trainRatio;
net.divideParam.valRatio = train_params.valRatio;
net.divideParam.testRatio = train_params.testRatio;
 
% Train the Networkzwc662

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

save net
