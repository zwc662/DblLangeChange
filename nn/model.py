import torch
import torch.autograd as autograd
import torch.nn as nn

class NARMA_L2(nn.Module):
    def __init__(self, size_input_1, size_input_2, size_output):
        super(NARMA_L2, self).__init__()
        self.size_input_1 = size_input_1
        self.size_input_2 = size_input_2
        self.size_output = size_output

        assert self.size_input_2 == self.size_output

        self.affine_f_1 = nn.Linear(self.size_input_1, 64)
        self.affine_f_2 = nn.Linear(64, 64)
        self.affine_f_3 = nn.Linear(64, self.size_output)
        
        self.affine_g_1_1 = nn.Linear(self.size_input_1, 64)
        self.affine_g_1_2 = nn.Linear(64, 64)
        self.affine_g_1_3 = nn.Linear(64, self.size_output)

        '''
        self.affine_g_2_1 = nn.Linear(self.size_input_1, 64)
        self.affine_g_2_2 = nn.Linear(64, 64)
        self.affine_g_2_3 = nn.Linear(64, 1)

        self.affine_g_3_1 = nn.Linear(self.size_input_1, 64)
        self.affine_g_3_2 = nn.Linear(64, 64)
        self.affine_g_3_3 = nn.Linear(64, 1)
        '''

    def forward(self, x):
        if len(x.size()) == 1:
            x = x.unsqueeze(0)
        x_1 = torch.narrow(x, 1, 0, self.size_input_1)
        x_2 = torch.narrow(x, 1, self.size_input_1, 3)
        
        '''
        x_2_1 = torch.narrow(x, 0, self.size_input_1, 1)
        x_2_2 = torch.narrow(x, 0, self.size_input_1 + 1, 1)
        x_2_3 = torch.narrow(x, 0, self.size_input_1 + 2, 1)
        
        '''
     
        x_1_f = nn.functional.relu(self.affine_f_1(x_1))
        x_1_f = nn.functional.relu(self.affine_f_2(x_1_f))
        x_1_f = self.affine_f_3(x_1_f)


        x_1_g_1 = nn.functional.relu(self.affine_g_1_1(x_1))
        x_1_g_1 = nn.functional.relu(self.affine_g_1_2(x_1_g_1))
        x_1_g_1 = self.affine_g_1_3(x_1_g_1)

        '''
        x_1_g_2 = torch.tanh(self.affine_g_1_1(x_1))
        x_1_g_2 = torch.tanh(self.affine_g_1_2(x_1_g_2))
        x_1_g_2 = torch.tanh(self.affine_g_1_3(x_1_g_2))

        x_1_g_3 = torch.tanh(self.affine_g_1_1(x_1))
        x_1_g_3 = torch.tanh(self.affine_g_1_2(x_1_g_3))
        x_1_g_3 = torch.tanh(self.affine_g_1_3(x_1_g_3))

        y = torch.tensor[(torch.matmul(x_1_g_1, x_2_1),
            torch.matmul(x_1_g_1, x_2_1),
            torch.matmul(x_1_g_1, x_2_1))]
        '''
        y = 0.0 * x_1_f
        for i in range(y.size()[0]):
            y[i] = torch.matmul(x_1_g_1[i], torch.diag(x_2[i])) + x_1_f[i]
        

        return y, x_1_f, x_1_g_1
        

class Controller(nn.Module):
    def __init__(self, size_input, size_output):
        super(Controller, self).__init__()
        self.size_input = size_input
        self.size_output = size_output

        self.affine1 = nn.Linear(self.size_input, 64)
        self.affine2 = nn.Linear(64, 64)
        #self.affine3 = nn.Linear(64, self.size_output - 1)
        self.affine3 = nn.Linear(64, self.size_output)

    def forward(self, x):
        if len(x.size()) == 1:
            x = x.unsqueeze(0)
        x = nn.functional.relu(self.affine1(x))
        x = nn.functional.relu(self.affine2(x))

        ##### x_0 affine, x_1, x_2 relu ######
        '''
        x = self.affine3(x)
        x_0 = x[:, 0].unsqueeze(1)
        x_1 = nn.functional.relu(x[:, 1]).unsqueeze(1)
        x_2 = nn.functional.relu(x[:, 2]).unsqueeze(1)
        
        y = torch.cat((x_0, x_1, x_2), dim = 1)
        '''

        y = nn.functional.relu(self.affine3(x))
        y = torch.log(y + 1E-4)
        #y = y - 1
        return y, None, None

class Dynamics(nn.Module):
    def __init__(self, size_input, size_output):
        super(Dynamics, self).__init__()
        self.size_input = size_input
        self.size_output = size_output

        self.affine1 = nn.Linear(self.size_input, 64)
        self.affine2 = nn.Linear(64, 64)
        self.affine3 = nn.Linear(64, self.size_output)

    def forward(self, x):
        if len(x.size()) == 1:
            x = x.unsqueeze(0)
        x = nn.functional.relu(self.affine1(x))
        y = self.affine3(x)
        #y = nn.functional.relu(self.affine3(x))
        #y = torch.log(y)
        return y, None, None

