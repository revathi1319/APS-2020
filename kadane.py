def kadane(l,n):
    mn=-sys.maxsize -1
    tmx=0
    for i in range(n):
        tmx=tmx+l[i]
        if mn<tmx:
            mn=tmx
        if tmx<0:
            tmx=0
    return mn

print(kadane([-1,-2,-3,-5,-6],5))
