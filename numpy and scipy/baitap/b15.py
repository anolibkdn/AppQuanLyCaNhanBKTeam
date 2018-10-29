import numpy as np
import matplotlib.pyplot as plt

h = np.array([0,0,0.4,0.8,0.4,0,0])
x = np.array([0,1,0.6,0,0])

lh = h.size
lx = x.size


nx = np.arange(-1,6)
nh = np.arange(-1,4)
print nh
minx = nx[0] + nh[0]
maxx = 5 + 3
print maxx,minx

y=np.convolve(x,h,mode="full")
ny = np.arange(minx,maxx+1)
print y.size
print ny.size
plt.plot(ny,y,"r-")
plt.show()