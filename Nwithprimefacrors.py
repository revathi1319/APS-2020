import math as mt 
  

def kFac(n, k): 
    res=[] 
    f=0
    a = list() 
   
    while n % 2 == 0: 
        a.append(2) 
        n = n // 2
          
  
    for i in range(3, mt.ceil(mt.sqrt(n)), 2): 
        while n % i == 0: 
            n = n / i; 
            a.append(i) 
              
 
    if n > 2: 
        a.append(n) 
  
    if len(a) < k: 
        f=1 
        a=[]
        return f,a
          
   
    for i in range(k - 1): 
       #print(a[i], end = ", ") 
       res.append(1)
      
 
    product = 1
      
    for i in range(k - 1, len(a)): 
        product *= a[i]
    res.append(1)
    return f,res



t=int(input())
for i in range(t):
    n,k=input().split()
    n=int(n)
    k=int(k)
    f,l=kFact(n,k)
    if f==1:
        print('NO')
    else:
        if len(l)==k:
            print('YES')
