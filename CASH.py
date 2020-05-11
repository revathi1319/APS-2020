q=int(input())
for i in range(q):
    n,k=(map(int,input().split()))
    l=list(map(int,input().split()))
    l=[r%k for r in l]
    print(sum(l)%k)
