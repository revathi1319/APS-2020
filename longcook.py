import datetime
n=int(input())
for i in range(n):
    cnt=0
    m1,y1=map(int,input().split())
    m2,y2=map(int,input().split())
    year=y1
    t=y2-y1+1
    if m1>2:
        t-=1
        year+=1
    if m2<2:
        t-=1
       
    for j in range(t):
        d=datetime.datetime(year,2,1,00,00)
        d=d.strftime("%A")
        if year%400==0 or year%4==0:
            if d=="Saturday":
                cnt+=1
        else:
           
            if d=="Saturday" or d=="Sunday":
                cnt+=1
        year+=1
    print(cnt)
