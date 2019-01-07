import onnx
import torch
import torchvision
from model import *
from data_proc import *
from pathlib import PurePath as Path
import os


def export_onnx():
    history = 5
    size_input = history * 10 + 10 + 7
    size_output = 3
    
    
    dataset = create_dataset(title = "Controller", history = 5)
    dataloader = data_utils.DataLoader(dataset, batch_size = 1, shuffle = False)
    print("Dataloader built")
    
    
    for i_batch, sample_batched in enumerate(dataloader):
        x = sample_batched[0].float().unsqueeze(0)
        if len(x.size()) >= 1:
    	    x = x[-1]
        break
    dummy_input = x.unsqueeze(0)
    dummy_input = torch.randn(1, 67)
    print(dummy_input)
    
    model = Controller(size_input, size_output)
    model_source = torch.load(str(Path(os.path.abspath(__file__)).parents[0]) + '/Controller90.pt', map_location = 'cpu')
    model.load_state_dict(model_source)
    
    
    input_names = [ "actual_input_1" ] + [ "learned_%d" % i for i in range(1) ]
    output_names = [ "output1" ]
    
    torch.onnx.export(model, dummy_input, "Controller.onnx", verbose=False, input_names=input_names, output_names=output_names)

def export_alexnet():

    dummy_input = torch.randn(10, 3, 224, 224, device='cuda')
    model = torchvision.models.alexnet(pretrained=True).cuda()
    
    # Providing input and output names sets the display names for values
    # within the model's graph. Setting these does not change the semantics
    # of the graph; it is only for readability.
    #
    # The inputs to the network consist of the flat list of inputs (i.e.
    # the values you would pass to the forward() method) followed by the
    # flat list of parameters. You can partially specify names, i.e. provide
    # a list here shorter than the number of inputs to the model, and we will
    # only set that subset of names, starting from the beginning.
    input_names = [ "actual_input_1" ] + [ "learned_%d" % i for i in range(16) ]
    output_names = [ "output1" ]
    
    torch.onnx.export(model, dummy_input, "alexnet.onnx", verbose=True, input_names=input_names, output_names=output_names)

if __name__ == "__main__":
	export_onnx()
