import numpy as np
import matplotlib.pyplot as plt


s = np.arange(10) #tao mot mang tang dan tu 0 -9
x = np.array(np.zeros(5).tolist() + np.ones(5).tolist())
plt.plot(s,x,"o")
plt.show()