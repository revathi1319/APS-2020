def bits_set(n):
    c=0
    while n>0:
        c+=n&1
        n>>=1
    return c
bits_set(6)
