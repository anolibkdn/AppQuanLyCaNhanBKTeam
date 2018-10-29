import matplotlib.pyplot as plt
import numpy as np

t = np.arange(0., 5.,0.2)
print t
plt.plot(t,t,"r--",t,t**2,"bs",t,t**3,"g^")
# plt.plot([1,2,3,5],[2,5,7,9],"ro")
# plt.axis([0,6,0,20])
plt.ylabel("some number")
plt.xlabel("x")
plt.title("tutorial1")
plt.show()