import matplotlib.pyplot as plt
import matplotlib.image as mpimg
import numpy as np



img = mpimg.imread('girls.png')
# imgplot = plt.imshow(img)
# plt.colorbar()
plt.hist(img.ravel(), bins=256, range=(0.0, 1.0), fc='k', ec='k')
plt.show()
# print img