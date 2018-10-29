import numpy as np
import matplotlib.pyplot as plt
from random import randint

s = np.arange(-10,10)

x1 = np.array(map(lambda x:x*randint(1,100),np.ones(20)))
x2 = np.array(map(lambda x:x*randint(1,100),np.ones(20)))


a1 = 3
a2 = -2

y1 = x1**2
y2 = x2**2

y = (a1*x1 + a2*x2)**2
plt.plot(s,y,"r--")
plt.plot(s,a1*y1 * a2*y2,"b--")

y3 = x1
y4 = x2

yy = (a1*x1 + a2*x2)**2
plt.plot(s,yy,"k--")
plt.plot(s,a1*y3 * a2*y4,"m--")
plt.show()