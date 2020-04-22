l= ["eat", "tea", "tan", "ate", "nat", "bat"]
sor=[]
res=[]
for i in range(len(l)):
    s=list(l[i])
    s=sorted(s)
    #print(s)
    if s not in sor:
        #print(s)
        sor.append(s)
        j=sor.index(s)
        
        t=[l[i]]
        res.insert(j,t)
    else:
        j=sor.index(s)
        res[j].append(l[i])
print(res)
