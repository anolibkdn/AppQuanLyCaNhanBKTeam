

# CHUONG TRINH VE TIN HIEU CUA HAM U[N - N0]

# BUOC THUC HIEN:
# B1: SINH NGAU HIEN MOT TIN HIEU U[N]
# B2: SHIFT N0
# B3: VE

import numpy as np
import matplotlib.pyplot as plt



def func_u(n):
    # tao mot tin hieu ngau nhien n phan tu
    return np.array(np.zeros(n/2).tolist() + np.ones(n/2).tolist())


def func_shift(n,n0):
     return np.array(np.zeros(n/2-n0).tolist() + np.ones(n/2+n0).tolist())
     


def main():
    n = 20
    xtime = np.arange(-n/2,n/2)
    u = func_u(n)
    un = func_shift(n,-3)
    plt.stem(xtime,un)
    plt.axis([-n/2,n/2,0,2])
    plt.show()

if __name__ == '__main__':
    main()