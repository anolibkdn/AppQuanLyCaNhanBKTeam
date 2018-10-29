# TIN HIEU ROI RAC THEO THOI GIAN
# CHUONG TRINH VE DO THI HAM DUNG DON VI


#                                    0
#                                    |
#                                    |
#      ------- -2 ------- -1 ------- 0 ------- 1 ------- 2

# FUNCTION: 

#                            |   1 , n = 0
#                   &(n)  =  |
#                            |   0 , n != 0


# thu vien su dung trong chuong trinh
# THU VIEN SU DUNG GOM NUMPY VA MATPLOTLIB, SCYPY

import numpy as np
import matplotlib.pyplot as plt
from scipy import signal


num  = np.array([1,-2,3])
den = np.array([1,0,0])
sys = (num,den)
t,y = signal.impulse(sys)

plt.stem(t,y)
plt.show()

# END OF THE PROGRAM
