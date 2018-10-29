import numpy as np
import matplotlib.pyplot as plt
from scipy.optimize import curve_fit
import random
import math
arrOnes = np.ones(50)

d = np.array(map(lambda x: x*(random.randint(0,1)),arrOnes))
d = 0.8*(d - 0.5)
m = np.arange(0,50);

s = np.array(map(lambda x: 2*x*pow(0.9,x),m))

x = s + d;

plt.figure(1)

plt.subplot(3,1,1)

plt.plot(m,d,"r-",m,s,"g--",m,x,"b-")

plt.subplot(3,1,2)

xx = x.tolist()

x1 = [0,0] + xx

x2 = [0] + xx + [0]

x3 = xx + [0,0]

y = (np.array(x1) + np.array(x2) + np.array(x3))/3
plt.plot(m,y[2:],"r-",m,s,"g--")

plt.subplot(3,1,3)
y1 = [0,0,0,0] + xx

y2 = [0,0,0] + xx + [0]

y3 = [0,0] + xx + [0,0]

y4 = [0] + xx +[0,0,0]

y5 =  xx + [0,0,0,0]

yy = (np.array(y1) + np.array(y2) + np.array(y3) + np.array(y4) + np.array(y5))/5

plt.plot(m,yy[4:],"r-",m,s,"g--")
plt.plot()


plt.figure(2)
plt.subplot(1,1,1)
h = [1.0/3,1.0/3,1.0/3]
y6 = np.convolve(x,h,mode="valid")
print list(y6).__len__()
plt.plot(m[:48],y6,"r-")

plt.show()
