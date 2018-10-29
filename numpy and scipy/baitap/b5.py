import numpy as np
import matplotlib.pyplot as plt


n = 10

def u(n,x):
    x1 = np.zeros(n-x).tolist()
    x2 = np.ones(2*n - (n-x)).tolist()
    return np.array(x1 + x2)    

s = np.arange(-n,n);
plt.plot(s,u(n,-3),"o-")
plt.plot(s,u(n,2),"r--")
plt.show()