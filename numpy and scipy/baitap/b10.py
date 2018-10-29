import numpy as np
import matplotlib.pyplot as plt
from random import randint

s = np.arange(-10,10)

x1 = np.array(map(lambda x:x*randint(1,100),np.ones(20)))
x2 = np.array(map(lambda x:x*randint(1,100),np.ones(20)))


a1 = 3
a2 = -2

y1 = s*x1
y2 = s*x2

y = s*(a1*x1 + a2*x2)
plt.plot(s,y)
plt.show()