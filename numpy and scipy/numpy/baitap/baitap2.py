import numpy as np
import matplotlib.pyplot as plt


def func_x(x):
    return np.array([0] + x[:15].tolist()) + x

n = np.arange(0,16)

x1 = np.random.random(16)
x2 = np.random.random(16)

a1 = 2
a2 = -4

y1 = func_x(x1)
y2 = func_x(x2)

yn = func_x(a1*x1 + a2*x2)
plt.figure()
plt.subplot(221)
plt.stem(n,a1*y1 + a2*y2)

plt.subplot(222)
plt.stem(n,yn)

plt.show()
