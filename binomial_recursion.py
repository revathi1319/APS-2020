def bc(n,k):
    if k==0 or k==n:
        return 1
    else:
        return bc(n-1,k-1)+bc(n-1,k)

print(bc(5,3))
