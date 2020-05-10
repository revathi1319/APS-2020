#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>

int countSetBits(int n)
{
    int count=0;
    while(n!=0)
    {
        n=n&(n-1);
        count++;
    }
    return count;
}

int min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}

int main()
{
    int arr[3][3]={{3,2,7},{5,1,3},{2,7,2}};
    int mask,i,j;
    int x;
    int dp[(int)pow(2,3)];
    dp[0]=0;

    for(i=1;i<(int)pow(2,3);i++)
    {
        dp[i]=INT_MAX;
    }

    for(mask=0;mask<(int)pow(2,3);mask++)
    {
        x=countSetBits(mask);
        for(j=0;j<3;j++)
        {
            //printf("%d",j);
            if((mask&(1<<j))==0)
            {
                printf("HI");
                dp[mask|(1<<j)]=min(dp[mask|(1<<j)],dp[mask]+arr[x][j]);
            }
        }
    }
    printf("%d",dp[7]);
    return 0;
}
