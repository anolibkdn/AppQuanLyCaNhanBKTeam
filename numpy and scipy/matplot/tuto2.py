import matplotlib.pyplot as plt
import numpy as np
from random import randrange


x1 = []
y1 = []
x2 = []
y2 = []
for i in range(10):
   x1.append(randrange(10))
   y1.append(randrange(10))
   x2.append(randrange(10)) 
   y2.append(randrange(10))

lines = plt.plot(x1,y1,x2,y2)
# print lines[1]
plt.setp(lines[0],color="r",linewidth=2.0)
plt.setp(lines[1],color="g",linewidth=2.0)
print plt.setp(lines)
plt.xlabel("X")
plt.ylabel("Y")
plt.title("tutorial 2")
plt.show()