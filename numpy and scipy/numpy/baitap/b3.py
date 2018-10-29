

# TINH NANG LUONG TIN HIEU TRONG KHOANG CHO TRUOC

# (X1 ; X2)

# 
#        FUNCTION:         e = SUM ( |X[N]|^2 ) 
#        pERFORMENT:       P = e/(2*n + 1)
#  
# 

# HAM CU THE CAN TINH: x[n] = (1/2)^n*u(n)

# CAC BUOC THUC HIEN:

# tao ra n nhip
# sinh ngau nhi mot ham u(n)
# tinh x[n]

# thu vien can dung
import numpy as np
import matplotlib.pyplot as plt


def func_p(e,n):
    return e/(2*n+1)

def func_e(a,b):
    n = np.arange(a,b)
    un = np.array(map(lambda x: (1.0/2)**x, n.tolist()))
    return np.sum(np.abs(un)**2)

def main():
    print "enegir: ",func_e(-10,10)
    print "performent: ", func_p(func_e(-10,10),20)

if __name__ == '__main__':
    main()