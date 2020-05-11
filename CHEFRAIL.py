from itertools import combinations
def find(x):
    x=list(x)
   
    if x[0][0]==x[1][0]==x[2][0]==0 or x[0][1]==x[1][1]==x[2][1]==0:
       
        return 0
    if [0,0] in x:
        return 1
    m1=m2=m3=0
    if x[0][0]-x[1][0]!=0:
        m1=float((x[0][1]-x[1][1])/(x[0][0]-x[1][0]))
    if x[0][0]-x[2][0]!=0:
        m2=float((x[0][1]-x[2][1])/(x[0][0]-x[2][0]))
    if x[1][0]-x[2][0]!=0:
        m3=float((x[1][1]-x[2][1])/(x[1][0]-x[2][0]))
   
   
   
    if (m1*m2)==-1.0 or (m1*m3)==-1.0 or (m2*m3)==-1.0:
       
        return 1
    else:
        return 0
n=int(input())
for i in range(n):
    zz=0
    p=[]
    nx,ny=input().split()
    xs=list(map(int,input().split()))
    ys=list(map(int,input().split()))
    for j in range(len(xs)):
        l=[xs[j],0]
        p.append(l)
    for j in range(len(ys)):
        l=[0,ys[j]]
        p.append(l)
    #print(pl)
    comb=list(combinations(p, 3))
    #print(comb)
    for j in (comb):
        zz+=find(j)
    print(zz)
