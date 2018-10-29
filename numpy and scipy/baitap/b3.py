import numpy as np
import matplotlib.pyplot as plt


def x(u,n):
    return ((1.0/2)**n)*u


s = np.arange(-10,10)
u = np.array(np.zeros(10).tolist() + np.ones(10).tolist())
plt.plot(s,x(u,20),"r-")


# plt.show()
s1 = np.arange(1000)
u1 = np.array(np.ones(1000).tolist())
plt.plot(s1,x(u1,1000),"b--")


plt.show()