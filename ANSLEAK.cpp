#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,m,k,i,a;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>m>>k;
        for(int j=0;j<n;j++)
        {
            for(int d=0;d<k;d++)
            {
                cin>>a;
            }
        }
        
         for(int g=0;g<n;g++)
    {
        int num=(rand()%(m-1+1))+1;
        if (g==n-1)
        cout<<num<<"\n";
        else
        cout<<num<<" ";
    }
    
        
        
    }
   

    
}
