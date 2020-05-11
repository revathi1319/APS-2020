#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,m,i,l,r,min,j,gmin,mg;
    scanf("%d%d",&n,&m);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    gmin=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<gmin)
        {mg=i;
         gmin=a[i];
        }
    }
    for(i=0;i<m;i++)
    {scanf("%d%d",&l,&r);
       min=a[l];
     if(l<=mg && r>=mg)
     {
         printf("%d\n",gmin);
     }
     else{
     for(j=l+1;j<=r;j++)
     {
         if(a[j]<min)
             min=a[j];
     }
     printf("%d\n",min);}
        
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
