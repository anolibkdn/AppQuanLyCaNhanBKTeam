import numpy as np
import matplotlib.pyplot as plt
from random import randint

s = np.arange(-10,10)

x = np.array(map(lambda x:x*randint(1,100),np.ones(20)))

y = s*x

ynk = np.array([0,0,0,0] + y.tolist())
x1 = np.array([0,0,0,0] + x.tolist())


n1 = np.arange(-10,14)

yn = n1 * x1
plt.plot(n1,ynk,"o-")
plt.show()