t=int(input())

for i in range(t):
    n,m=(input().split())
    n=int(n)
    m=int(m)
    f=list(map(int,input().split()))
    p=list(map(int,input().split()))
    sm=list(set(f))
    dm=[]
    for j in range(len(sm)):
        cnt=0
        for k in range(len(f)):
            if sm[j]==f[k]:
                cnt+=p[k]
        dm.append(cnt)
    print(min(dm))
        
