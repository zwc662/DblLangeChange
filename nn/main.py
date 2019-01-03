import argparse
from pathlib import PurePath as Path
import scipy.optimize

from data_proc import *
from model import *

import torch
from torch.autograd import Variable
import torch.utils.data as data_utils

import logging
import time
import os

import pickle

use_cuda = torch.cuda.is_available()
device = torch.device("cuda" if use_cuda else "cpu")

def run_NARMA_L2(history = 5, delay = 2, batch_size = 1, max_epoch = 10):
    dataset = create_dataset(title = "NARMA_L2", history = 5, delay = 2)
    dataloader = data_utils.DataLoader(dataset, batch_size = batch_size, shuffle = True)
    print("Dataloader built")

    size_input_1 = history * 10 + 10
    size_input_2 = 3
    size_output = 3
    net = NARMA_L2(size_input_1, size_input_2, size_output).to(device)
    print("NARMA_L2 net built")
    run(net, dataloader, max_epoch, file_name = "NARMA_L2")

def run_Controller(history = 5, batch_size = 10, max_epoch = 10):
    dataset = create_dataset(title = "Controller", history = 5)
    dataset = dataset_augmentation(dataset)
    dataloader = data_utils.DataLoader(dataset, batch_size = batch_size, shuffle = True)
    print("Dataloader built")

    size_input = history * 10 + 10 + 7
    size_output = 3
    net = Controller(size_input, size_output).to(device)
    print("Controller net built")
    run(net, dataloader, max_epoch, file_name = "Controller")

def test_Controller(history = 5, batch_size = 1):
    dataset = create_dataset(title = "Controller", history = 5)
    dataloader = data_utils.DataLoader(dataset, batch_size = 1, shuffle = False)
    print("Dataloader built")

    size_input = history * 10 + 10 + 7
    size_output = 3
    net = Controller(size_input, size_output).to(device)
    print("Controller net built")
    model_source = torch.load(str(Path(os.path.abspath(__file__)).parents[0]) + '/Controller90.pt')
    net.load_state_dict(model_source)

    criterion = torch.nn.MSELoss(reduction='sum')

    for i_batch, sample_batched in enumerate(dataloader):
        x = sample_batched[0].float().unsqueeze(0).to(device)
        y = sample_batched[1].float().unsqueeze(0).to(device)
        if len(x.size()) >= 1:
            x = x[-1]
        if len(y.size()) >= 1:
            y = y[-1]
        y_pred = net(x)[0]
        print(y)
        print(y_pred)
        print(criterion(y, y_pred))

def run_Dynamics(history = 5, delay = 1, batch_size = 10, max_epoch = 10):
    dataset = create_dataset(title = "Dynamics", history = 5, delay = delay)
    dataset = dataset_augmentation(dataset)
    dataloader = data_utils.DataLoader(dataset, batch_size = batch_size, shuffle = True)
    print("Dataloader built")

    size_input = history * 10 + 10
    size_output = 1
    net = Dynamics(size_input, size_output).to(device)
    print("Dynamics net built")
    run(net, dataloader, max_epoch, file_name = "Dynamics")

def test_Dynamics(history = 5, delay = 1, batch_size = 1):
    dataset = create_dataset(title = "Dynamics", history = 5, delay = delay)
    dataloader = data_utils.DataLoader(dataset, batch_size = 1, shuffle = False)
    print("Dataloader built")

    size_input = history * 10 + 10
    size_output = 1
    net = Dynamics(size_input, size_output).to(device)
    print("Dynamics net built")
    model_source = torch.load(str(Path(os.path.abspath(__file__)).parents[0]) + '/Dynamics90.pt')
    net.load_state_dict(model_source)
    print("Dynamics net loaded")

    criterion = torch.nn.MSELoss(reduction='sum')

    for i_batch, sample_batched in enumerate(dataloader):
        x = sample_batched[0].float().unsqueeze(0).to(device)
        y = sample_batched[1].float().unsqueeze(0).to(device)
        if len(x.size()) >= 1:
            x = x[-1]
        if len(y.size()) >= 1:
            y = y[-1]
        y_pred = net(x)[0]
        print(y)
        print(y_pred)
        print(criterion(y, y_pred))


def run(net, dataloader, max_epoch, file_name):
    criterion = torch.nn.MSELoss(reduction='sum')
    optimizer = torch.optim.SGD(net.parameters(), lr=1e-4)
    
    for i_epoch in range(max_epoch):
        print("Begin epoch %d" % (i_epoch))
        train(net, dataloader, criterion, optimizer, i_epoch)
    
        if i_epoch % 10 == 0:
            torch.save(net.state_dict(), str(Path(os.path.abspath(__file__)).parents[0]) + '/' + file_name + str(i_epoch) + '.pt')


def train(model, dataloader, criterion, optimizer, epoch):
    print("Start training")
    avg_loss = 0
    num_batches = 0
    for i_batch, sample_batched in enumerate(dataloader):
        x = sample_batched[0].float().unsqueeze(0).to(device)
        y = sample_batched[1].float().unsqueeze(0).to(device)
        if len(x.size()) >= 1:
            x = x[-1]
        if len(y.size()) >= 1:
            y = y[-1]
        '''
        assert x.size() == (size_input_1 + size_input_2,)
        assert y.size() == (size_output,)
        '''

        y_pred, f, g = model(x)
        loss = criterion(y_pred, y)

        num_batches += 1
        avg_loss += loss.item()

        if i_batch % 1000 == 0:
            print(epoch, i_batch, avg_loss/num_batches)
        if i_batch % 1000 == 0:
            avg_loss = 0
            num_batches = 0

        optimizer.zero_grad()
        loss.backward()
        optimizer.step()

def test(model, x, y = torch.tensor([0])):
    y_pred, f, g = net(x)
    return y_pred.item()


if __name__ == "__main__":
    #run_Controller(max_epoch = 100)
    #test_Controller(history = 5, batch_size = 1)

    #run_NARMA_L2(max_epoch = 100)

    run_Dynamics(history = 5, delay = 5, max_epoch = 100)
    test_Dynamics(history = 5, delay = 5, batch_size = 1)
        

        
