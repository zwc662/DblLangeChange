import re
from pathlib import PurePath as Path
import numpy as np
import sys
sys.path.append("..")

import os

from model import *
import torch

use_cuda = torch.cuda.is_available()
device = torch.device("cuda" if use_cuda else "cpu")


def generator_random(input_size = 27, output_size = 3, num_layers = 2, neurons = [64, 64]):
    n = input_size
    n_ = output_size
    k = num_layers
    N = neurons
    
    W = [10 * np.random.random([n, N[0]]) - 5.0]
    B = [10 * np.random.random([N[0]]) - 5.0]
    for i in range(1, k):
        w_i = 10 * np.random.random([N[i - 1], N[i]])
        W.append(w_i - 5.0)
        b_i = 10 * np.random.random([N[i]]) 
        B.append(b_i - 5.0)
    
    w_i = 10 * np.random.random([N[k - 1], n_]) - 5.0
    W.append(w_i)
    b_i = 10 * np.random.random([N[k - 1]]) - 5.0
    B.append(b_i)

    write_to_file(input_size = n, output_size = n_, neurons = N, W = W, B = B) 
    
def write_to_file(input_size, output_size, neurons, W, B, file_name = 'network_files/neural_network_information_16'):
    n = input_size
    n_ = output_size
    N = neurons
    k = len(N)

    assert len(W) == len(B)

    for o in range(output_size):      
        f = open(file_name + "_" + str(o), 'w')
        f.write(str(n) + '\n1\n' + str(k) + '\n')
         
        f.write(str(N[0]) + '\n')

        for l in range(0, k - 1):
            f.write(str(N[l]) + '\n')

        for i in range(N[0]):
            for j in range(n):
                f.write(str(W[0][j, i]) + '\n')
            f.write(str(B[0][i]) + '\n')
         
        for l in range(1, len(N)):
            for i in range(N[l]):
                for j in range(N[l-1]):
                    f.write(str(W[l][j, i]) + '\n')
                f.write(str(B[l][i]) + '\n')
             
        for j in range(N[-1]):
            f.write(str(W[-1][j, o]) + '\n')
        f.write(str(B[-1][o]) + '\n')


def generator_model(file_name):
    input_size = 27
    output_size = 3
    num_layers = 2
    N = [64, 64]
    W = []
    B = []

    net = Controller(input_size, output_size).to(device)
    model_source = torch.load(file_name)
    net.load_state_dict(model_source)

    for name, param in net.named_parameters():
        if param.requires_grad:
            if re.match('.*weight', name) is not None:
                W.append(param.detach().cpu().numpy().T)
            elif re.match('.*bias', name) is not None:
                B.append(param.detach().cpu().numpy())

    write_to_file(input_size = input_size, output_size = output_size, neurons = N, W = W, B = B) 

if __name__ == "__main__":
    #generator_random()

    file_name = str(Path(os.path.abspath(__file__)).parents[1]) + '/Controller90.pt'
    generator_model(file_name)
