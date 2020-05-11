for _1 in range(int(input())):
    n,q=map(int,input().split())
    s=input()
    list1=list(s)
    list2=[]
    finalList=[]
    for i in range(len(list1)):
        if list1[i] not in list2:
            list2.append(list1[i])
            finalList.append(list1.count(list1[i]))

    for _2 in range(q):
        c=int(input())
        pendingCount=0
        for i in range(len(finalList)):
            if c<finalList[i]:
                pendingCount+=finalList[i]-c
        print(pendingCount)
