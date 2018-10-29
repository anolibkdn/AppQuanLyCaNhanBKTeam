import numpy as np
import matplotlib.pyplot as plt


x = np.arange(-4, 7).astype(int).tolist()
y = np.zeros(11, dtype=int)

y[3:8] = [-2, 4, -2, 2, -1]
y1 = y

plt.figure(1)
plt.subplot(411)

plt.plot(x, y1, "g")

plt.subplot(412)
y2 = np.zeros(11).astype(int).tolist()
y2[4:9] = [-1, 2, -2, 4, -2]
plt.plot(x, y2, "y")

plt.subplot(413)
y3 = np.zeros(18).astype(int)
y3[10:15] = [-2, 4, -2, 2, -1]
x1 = np.arange(-11, 7).astype(int).tolist()
plt.plot(x1, y3 - 1, "r")

plt.subplot(414)
plt.plot(x, (-1)*y + 2, "b")

# plt.xlabel("x")
# plt.ylabel("y")
# plt.title("Bai tap 2")
plt.show()
