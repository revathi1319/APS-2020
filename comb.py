from itertools import combinations
n,k=input().split()
k=int(k)
l=list(map(int,input().split()))
a=list(combinations(l,k))
x=[]
for i in a:
    i=list(i)
    x.append(sum(i))
#sx=list(set(x))
print(len(x))
