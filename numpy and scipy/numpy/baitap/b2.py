
# CHUONT TRINH VE DANG TIN HIEU HAM DON BUOC

# SU DUNG HAI THU VIEN MATPLOTLIB VA NUMPY

#
#                                 0        0         0
#                                 |        |         |
# ------- -3---- -2----- -1-------0--------0---------0-------

# function:       &(n) = 1 , n>=0
#                      = 0 , n < 0

# import lib

import numpy as np
import matplotlib.pyplot as plt


def func_single_step(n):
    
    # xtime is a valuable time signal
    xtime = np.arange(-n/2, n/2);
    # s is signal vs friquence time
    s = np.array(np.zeros(n/2).tolist() + np.ones(n/2).tolist())
    # create a stem
    plt.stem(xtime,s)
    plt.axis([-n/2,n/2,0,2])
    plt.xlabel("Time(n)")
    plt.ylabel("X [n]")
    plt.show()


def main():
    func_single_step(20);

if __name__ == '__main__':
    main()
