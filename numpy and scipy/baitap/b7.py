import numpy as np
import matplotlib.pyplot as plt

s = np.arange(5)
x1 = np.array([1,-1,2,3,-2])
x2 = np.array([-2,-2,1,1,-4])

def mulx(x1,x2):
    return x1* x2

def sumx(x1,x2):
    return x1 + x2

plt.plot(s,sumx(x1,x2),"o-")
plt.plot(s,mulx(x1,x2),"o-")

plt.show()