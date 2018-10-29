import numpy as np
import matplotlib.pyplot as plt



s = np.arange(-10,10)


x1 = np.array(np.ones(10).tolist() + np.zeros(10).tolist())
x2 = np.array(np.zeros(10).tolist() + np.ones(10).tolist())* np.cos(0.5*20)


plt.plot(s,x1,"o-")
plt.plot(s,x2,"o-")
plt.show()