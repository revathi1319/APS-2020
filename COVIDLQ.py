t=int(input())
for i in range(t):
    n=int(input())
    l=list(map(int,input().split()))
    f=0
    if n<7:
        if sum(l)>1:
            print('NO')
        else:
            print('YES')
        
    else:
        for j in range(n-1):
            if l[j]==1:
                for k in range(j+1,n):
                    if k-j<6:
                        if l[k]==1:
                            f=1
                            break
            
        if f==1:
            print('NO')
        else:
            print('YES')
            
