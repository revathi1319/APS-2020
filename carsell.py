for _ in range(int(input())):
    N=int(input())
    list1=[int(x) for x in input().split()]
    list1.sort();
    list1.reverse();

    maxProfit=0
    for i in range(len(list1)):
        if list1[i]!=0:
            temp=list1[i]-i
            if temp>0:
                maxProfit+=list1[i]-i

    print(maxProfit%1000000007)
