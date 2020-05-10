n=int(input())
k=int(input())
res=[[0 for a in range(n+1)]for a in range(n+1)]
for i in range(n+1):
      for j in range(min(i,k)+1):
            #print(i,j)
            if j==0 or j==i:
                res[i][j]=1
            else:
                res[i][j]=res[i-1][j-1]+res[i-1][j]
print(res)
