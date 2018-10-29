import matplotlib.pyplot as pp
import numpy as np
# from sklearn.cluster import KMeans

x = np.arange(-10,21).tolist()
y = np.zeros(31, dtype=int).tolist()

y[10] = 1

pp.plot(x,y,'r')
pp.title("window 1")
pp.xlabel("x")
pp.ylabel("y")
pp.show() 