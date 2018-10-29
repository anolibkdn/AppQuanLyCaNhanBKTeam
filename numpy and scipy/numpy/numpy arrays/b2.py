import matplotlib.pyplot as pp
import numpy as np
# from sklearn.cluster import KMeans

def func():
    x = np.zeros(31,dtype=int)
    x1 = x
    x1[9]=1
    x2 = x
    x2[15] = 1
    x3 = x
    x3[19]=1
    return (x1 - x2)*(31*x3)

x = np.arange(-10,21).tolist()

y = func()


pp.plot(x,y,'o')
pp.title("window 1")
pp.xlabel("x")
pp.ylabel("y")
pp.show() 