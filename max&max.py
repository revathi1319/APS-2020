import sys
lt=[]
def kadane(l,n):
    mn=-sys.maxsize -1
    tmx=0
    strt=0
    end=0
    beg=0
    if len(l)==0:
        mn=0
    else:
        for i in range(n):
            tmx=tmx+l[i]
            if mn<tmx:
                mn=tmx
                strt=beg
                end=i
            
            if tmx<0:
            
                tmx=0
                beg=i+1
            
    return mn,strt,end

n=int(input())
l=list(map(int,input().split()))
sm=sum(l)
mx,st,ed=kadane(l,n)
print(mx)
nl=[]
for i in range(n):
    if i<st or i>ed:
        nl.append(l[i])
mx2,ste,ed=kadane(nl,len(nl))
print(mx2)
