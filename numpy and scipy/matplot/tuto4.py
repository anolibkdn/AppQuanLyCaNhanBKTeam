import matplotlib.pyplot as plt
import numpy as np


plt.figure(1)
# the first figure
plt.subplot(221)
# the first subplot in the first figure
plt.plot([1, 2, 3])
plt.xlabel("x1")
plt.ylabel("y1")

plt.subplot(222)
# the second subplot in the first figure
plt.plot([4, 5, 6])
plt.subplot(313)
# the second subplot in the first figure
plt.plot([7, 4, 9])
# plt.figure(2)
# plt.plot([4, 5, 6]) # a second figure
# creates a subplot(111) by default
# plt.figure(1)
# plt.axes([2,10,4,20])
plt.show()