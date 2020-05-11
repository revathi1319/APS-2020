t=int(input())
for i in range(t):
    n=int(input())
    l=list(map(int,input().split()))
    mn=1
    mx=1
    
    lt=[]
        
    c=1
    for j in range(n-1):
        
        if abs(l[j+1]-l[j])<=2:
            #print('y',l[j+1],l[j],c)
            c=c+1
        else:
            lt.append(c)
            c=1
    lt.append(c)
           
    print(min(lt),max(lt))
                
