#import torch
#print(torch.__version__)
#print(torch.rand(2, 3).shape)
#print('CUDA:', torch.cuda.is_available())

#import torch
#x = torch.tensor([[1., 2.], [3., 4.]])
#zeros = torch.zeros(2, 3)
#random = torch.rand(2, 3)
#print(x.shape, x.dtype, x.device) # [2, 2], float32, cpu

#创建在cuda上
#import torch
#x = torch.tensor([[1., 2.], [3., 4.]], device="cuda:0")
#zeros = torch.zeros(2, 3, device="cuda:0")
#random = torch.rand(2, 3, device="cuda:0")
#print(x.shape, x.dtype, x.device)

#import sys
#import torch
#print("Python:", sys.executable)
#print("PyTorch:", torch.__version__)
#print("PyTorch CUDA:", torch.version.cuda)
#print("显卡能力:", torch.cuda.get_device_capability(0))
#print("安装包支持的架构:", torch.cuda.get_arch_list())

#import torch
#a = torch.arange(12).reshape(3, 4)
#print(a[:, 0])                 # tensor([0, 4, 8])
#print(a.reshape(2, 6).shape)   # torch.Size([2, 6])
#print((a + 1).shape)           # torch.Size([3, 4])

#import torch
#a = torch.empty(2, 3, device="cuda:0")
#b = torch.rand(2, 3, device="cuda:0")
#c = torch.zeros(2, 3, device="cuda:0")
#d = torch.ones(2, 3, device="cuda:0")
#x = torch.tensor([[1., 2.], [3., 4.]], device="cuda:0")
#e = x.new_ones(2, 3)
#f = torch.randn_like(x)
#print(a.shape, b.shape, c.shape, d.shape)
#print(x.shape, e.shape, f.shape)
#print(e.dtype, e.device)

#import torch
#a = torch.tensor([1., 2., 3.])
#b = torch.tensor([4., 5., 6.])
#print(a + b) 
#print(torch.add(a, b)) 
#a.add_(1) 

#import torch
#import numpy as np
#n = np.array([1., 2., 3.], dtype=np.float32)
#t = torch.from_numpy(n) 
#n[0] = 9
#print(t[0].item()) 
#copy = torch.tensor(n) 

#import torch
#device = torch.device('cuda' if torch.cuda.is_available() else 'cpu')
#x = torch.randn(4, 2).to(device)
#model = torch.nn.Linear(2, 1).to(device)
#print(model(x).device)

#import torch
#x = torch.tensor(2.0, requires_grad=True)
#y = (x + 1) ** 2
#y.backward()
#print(x.grad.item()) # 6.0 dy/dx = 2(x + 1)

#import torch
#x = torch.tensor(2.0, requires_grad=True)
#y = (x + 1) ** 2
#y.backward()
#x.grad.zero_()
#z = 3 * x**2
#z.backward()
#print(x.grad.item()) 

#import torch
#model = torch.nn.Linear(2, 1)
#x_batch = torch.randn(4, 2)
#model.eval()
#with torch.inference_mode():
#    predictions = model(x_batch)
#print(predictions)
#print(predictions.shape) 

#import torch
#x = torch.ones(2, 2, requires_grad=True)
#y = x + 2
#z = y * y * 3
#out = z.mean()
#out.backward()
#print("平均值：", out.item())
#print("x 的梯度：\n", x.grad)

#import torch
#from torch import nn
#class SmallNet(nn.Module):
#    def __init__(self):
#        super().__init__()
#        self.layers = nn.Sequential(
#            nn.Linear(2, 16),
#            nn.ReLU(),
#            nn.Linear(16, 2)
#        )
#    def forward(self, x):
#        return self.layers(x)
#model = SmallNet()
#x = torch.randn(4, 2)
#print(model(x).shape)  # torch.Size([4, 2])

#import torch
#from torch import nn
#model = nn.Sequential(
#    nn.Linear(2, 16),
#    nn.ReLU(),
#    nn.Linear(16, 2)
#)
#x_batch = torch.randn(4, 2)
#labels = torch.tensor([0, 1, 1, 0], dtype=torch.long)
#logits = model(x_batch)
#loss = nn.CrossEntropyLoss()(logits, labels)
#print(logits.shape)  # torch.Size([4, 2])
#print(labels.shape)  # torch.Size([4])
#print(loss.item())   

#import torch
#from torch import nn
#model = nn.Sequential(
#    nn.Linear(2, 16),
#    nn.ReLU(),
#    nn.Linear(16, 2)
#)
#features = torch.randn(4, 2)
#labels = torch.tensor([0, 1, 1, 0], dtype=torch.long)
#loss_fn = nn.CrossEntropyLoss()
#optimizer = torch.optim.SGD(model.parameters(), lr=0.1)
#model.train()
#optimizer.zero_grad()
#logits = model(features)
#loss = loss_fn(logits, labels)
#loss.backward()
#optimizer.step()
#print("本次更新使用的损失：", loss.item())

#import torch
#from torch import nn
#from torch.utils.data import DataLoader, TensorDataset
#torch.manual_seed(7)
#n = 800
#features = torch.randn(n, 2)
#labels = (
#    (features[:, 0] * features[:, 1]
#     + 0.25 * features[:, 0]) > 0
#).long()
#order = torch.randperm(n)
#train_id, test_id = order[:640], order[640:]
#train_data = TensorDataset(features[train_id], labels[train_id])
#train_loader = DataLoader(train_data, batch_size=64, shuffle=True)
#class PointNet(nn.Module):
#    def __init__(self):
#        super().__init__()
#        self.layers = nn.Sequential(
#            nn.Linear(2, 16),
#            nn.ReLU(),
#            nn.Linear(16, 2)
#        )
#    def forward(self, x):
#        return self.layers(x)
#device = torch.device('cuda' if torch.cuda.is_available() else 'cpu')
#model = PointNet().to(device)
#loss_fn = nn.CrossEntropyLoss()
#optimizer = torch.optim.Adam(model.parameters(), lr=0.01)
#for epoch in range(20):
#    model.train()
#    for xb, yb in train_loader:
#        xb, yb = xb.to(device), yb.to(device)
#        optimizer.zero_grad()
#        logits = model(xb)
#        loss = loss_fn(logits, yb)
#        loss.backward()
#        optimizer.step()
#    model.eval()
#    with torch.inference_mode():
#        test_logits = model(features[test_id].to(device))
#        pred = test_logits.argmax(dim=1).cpu()
#        accuracy = (pred == labels[test_id]).float().mean().item()
#    if epoch in (0, 4, 9, 19):
#        print(f'epoch {epoch + 1:2d}: accuracy={accuracy:.3f}')

