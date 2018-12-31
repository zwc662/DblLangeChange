import os
import numpy as np
import scipy.io as sio
import torch.utils.data as data_utils
import torch
from pathlib import PurePath as Path

def load_file(file_name, data_name, variable = None):
    mat = sio.loadmat(file_name) 
    data = mat[data_name] 
    return data


def preproc_file(title, data, history = 5, delay = 1):
    (length, width) = data.shape
    X = []
    Y = []
    for i in range(history, length - delay):
        x = []
        y = []
        for row in data[i - history: i + 1: 1]:
            x = x + row.tolist()
        if delay > 1 and title == "NARMA_L2":
            # NARMA_L2
            x = x + data[i + 1][-3::1].tolist()
            y = [data[i + delay][3]] * 3
        elif delay == 1 and title == "Controller":
            # Controller
            x = x + data[i + 1][0:-3:1].tolist()
            y = data[i + 1][-3::1].tolist()
        
        X.append(x)
        Y.append(y)
    return X, Y


def preproc_data(title = "Controller", history = 5, delay = 1):
    X = []
    Y = []
    if delay > 1 and title == "NARMA_L2":
        ## NARMA_L2
        for i in range(1, 6):
            file_name = str(Path(os.path.abspath(__file__)).parents[1]) + '/DblLaneChange' + str(i) + '.mat'
            data = load_file(file_name, 'data_idx')
            X_, Y_ = preproc_file(title, data, history, delay)
            X = X + X_
            Y = Y + Y_
    elif title == "Controller":
        ## Controller
        file_name = str(Path(os.path.abspath(__file__)).parents[1]) + '/DblLaneChange.mat'
        data = load_file(file_name, 'data')
        X_, Y_ = preproc_file(title, data, history)
        X = X + X_
        Y = Y + Y_
    return X, Y


def create_dataset(title = "Controller", history = 5, delay = 1):
    X, Y = preproc_data(title, history, delay)
    return data_utils.TensorDataset(torch.from_numpy(np.asarray(X)), torch.from_numpy(np.asarray(Y)))

def create_dataset_augmentation(history = 5, delay = 2, scale = 10):
    dataset_old = create_dataset(history, delay)
    tot_len = len(dataset_old)
    dataset = data_utils.ConcatDataset([dataset_old])
    for i in range(scale - 1):
        datasets = data_utils.random_split(dataset_old, [int(tot_len/2), int(tot_len - tot_len/2)])
        dataset = data_utils.ConcatDataset([dataset] + datasets)
    print(len(dataset))
    return dataset

'''
if __name__ == "__main__":
    dataset = create_dataset(history = 5, delay = 1)
    dataloader = data_utils.DataLoader(dataset)
    for i_batch, sample_batched in enumerate(dataloader):
        if i_batch == 10:
            break
        print(sample_batched[0][0])
        print(sample_batched[1][0])
'''
