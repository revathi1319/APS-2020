#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>

int main()
{
    int n,bin=0,rem=0,i=1;

    printf("Enter Number\n");
    scanf("%d",&n);

    if(n<0)
        printf("Enter +ve Numbers Only\n");
    else
    {
        while(n!=0)
        {
            rem=n%2;
            n=n/2;
            bin=bin+rem*i;
            i=i*10;
        }
        printf("Binary = %d\n",bin);
    }
    return 0;
}
