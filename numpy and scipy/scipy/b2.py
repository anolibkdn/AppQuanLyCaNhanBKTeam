import numpy as np
import matplotlib.pyplot as plt
from scipy.optimize import curve_fit
import random
import math
arrOnes = np.ones(50)

d = np.array(map(lambda x: x*(random.randint(0, 1)), arrOnes))
d = 0.8*(d - 0.5)
m = np.arange(0, 50)

s = np.array(map(lambda x: 2*x*pow(0.9, x), m))

x = s + d
for i in range(6):
    for j in range(i+1):
        
    plt.figure(1)
    plt.subplot(i, 1, 1)
    plt.plot(m, d, "r-", m, s, "g--", m, x, "b-")
    plt.subplot(3, 1, 2)
    xx = x.tolist()

    x1 = [0, 0] + xx

    x2 = [0] + xx + [0]

    x3 = xx + [0, 0]

    y = (np.array(x1) + np.array(x2) + np.array(x3))/3
    plt.plot(m, y[2:], "r-", m, s, "g--")


plt.show()
