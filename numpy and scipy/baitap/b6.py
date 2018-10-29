import numpy as np
import matplotlib.pyplot as plt


s = np.arange(-10,10)
x1 = np.zeros(13).tolist()
x2 = np.ones(7).tolist()
x3 = np.array(x1 + x2)

su = np.array(np.zeros(12).tolist() + [1] + np.zeros(7).tolist())
xx = 2*x3 + su
plt.plot(s,xx,"o-")

plt.show()