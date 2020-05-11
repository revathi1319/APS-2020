q=int(input())
for i in range(q):
    s=input()
    l=s.split()
    if l[1]=='2':
        print(len(l[0]))
    else:
        n=int(l[0],int(l[1]))
        s=''
        while n>0:
            s=str(n%2)+s
            n=n>>1
        print(len(s))
