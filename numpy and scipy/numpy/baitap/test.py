import numpy as np
import matplotlib.pyplot as plt



h=np.array([0 ,0 ,0.4 ,0.8 ,0.4 ,0 ,0])

th = np.arange(-1,6)

x=np.array([0, 1 ,0.6, 0 ,0])
tx = np.arange(-1,4)

t = np.arange(th[0]+ tx[0],th[th.size-1] + tx[tx.size - 1] + 1)

Y = np.convolve(x,h)

print t

plt.stem(t,Y)
plt.show()
