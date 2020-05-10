#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>

int main()
{
    int r,c;
    int i,j;
    int sum;
    printf("Enter no of rows\n");
    scanf("%d",&r);
    printf("Enter no of coloumns\n");
    scanf("%d",&c);

    int matrix[r][c];
    printf("Enter %d matrix elements\n",(r*c));
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&matrix[i][j]);
    }

    for(i=0;i<c;i++)
    {
        sum=0;
        for(j=0;j<r;j++)
            sum+=matrix[j][i];
        printf("Sum of %d coloumn : %d\n",i+1,sum);
    }
    return 0;
}
