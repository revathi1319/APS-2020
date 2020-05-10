n=int(input())
k=int(input())
a=[0]*n
a[0]=1
for i in range(1,n+1):
    for j in range(min(i,k),0,-1):
        a[j]+=a[j-1]
print(a[k])
