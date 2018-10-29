import numpy as np
import matplotlib.pyplot as plt


s = np.arange(10)
x1 = np.zeros(5)
x2 = np.ones(5)

x3 = np.array(x1.tolist()+ x2.tolist())

plt.plot(s,x3,"o-")
plt.show()