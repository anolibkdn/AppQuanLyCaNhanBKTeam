import numpy as np
import matplotlib.pyplot as plt


def fx(u,n):
    # u[n+1]
    x1 = u
    x1[9:31] = np.ones(22)
    print x1
    # u[n-5]
    x2 = u
    x2[15:31] = np.ones(16)
    #u[2-n]
    x3 = u
    x3[18:31] = np.ones(13)
    return (x1 - x2)*(n*x3)

u = np.zeros(31,dtype=int)
x = np.arange(-10,21).tolist()

plt.plot(x,fx(u,31),"ro")
plt.xlabel("X")
plt.ylabel("Y")

plt.title("Bai tap 1")
plt.show()



