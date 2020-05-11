def getlcs(X, Y, m, n): 
    L = [[0 for x in range(n+1)] for x in range(m+1)] 
  
   
    for i in range(m+1): 
        for j in range(n+1): 
            if i == 0 or j == 0: 
                L[i][j] = 0
            elif X[i-1] == Y[j-1]: 
                L[i][j] = L[i-1][j-1] + 1
            else: 
                L[i][j] = max(L[i-1][j], L[i][j-1]) 
  
    
    inx = L[m][n] 
  
    
    ls = [""] * (inx+1) 
    ls[inx] = "" 
  
   
    i = m 
    j = n 
    while i > 0 and j > 0: 
  
        
        if X[i-1] == Y[j-1]: 
            ls[inx-1] = X[i-1] 
            i-=1
            j-=1
            inx-=1
  
        
        elif L[i-1][j] > L[i][j-1]: 
            i-=1
        else: 
            j-=1
  
    s=""
    for a in range(len(ls)-1):
        s+=ls[a]
    print(s)
  

X = input()
Y = input()
m = len(X) 
n = len(Y) 
getlcs(X, Y, m, n) 
