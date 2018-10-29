import numpy as np
import matplotlib.pyplot as plt


def x(u,n):
    return (1-2**n)*u

s = np.arange(-10,10)
u = np.array(np.zeros(10).tolist() + np.ones(10).tolist())
plt.plot(s,x(u,20),"r-")

su = np.sum(u)
print su

# plt.show()
s1 = np.arange(1000)
u1 = np.array(np.ones(1000).tolist())
plt.plot(s1,x(u1,1000),"b--")
su1 = np.sum(u1)
print su1
print su1/(1000+1)
plt.show()