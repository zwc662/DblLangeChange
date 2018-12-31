function net = DblLaneChange_train(train_params, inputs, targets)

if train_params.random == true
    [wid, len] = size(inputs);
    inputs_ = zeros(size(inputs));
    targets_ = zeros(size(targets));
    shuffle = randperm(len);
    
    for i=1:len
        idx = shuffle(i);
        inputs_(:, i) = inputs(:, idx);
        targets_(:, i) = targets(:, idx);
        %{
        targets_(2, i) = targets(2, idx) + targets(3, idx);
        targets_(1, i) = targets(1, idx);
        %}
    end;

end;

    
inputs = inputs_;
targets = targets_;
assert(isequal(size(inputs), size(inputs_)));   
fprintf("Assertion passed!!!");


% Create a Fitting Network
hiddenLayerSize = train_params.hiddelLayerSize;
net = cascadeforwardnet(hiddenLayerSize, 'trainlm');

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
