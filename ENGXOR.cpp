#include <iostream>
using namespace std;
int tab[]={0,1,1,0,1,0,0,1,1,0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,0,1,1,0,1,0,0,
	1,1,0,0,1,0,1,1,0,0,1,1,0,1,0,0,1,0,1,1,0,1,0,0,1,1,0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,0,1,
	1,0,1,0,0,1,0,1,1,0,1,0,0,1,1,0,0,1,0,1,1,0,0,1,1,0,1,0,0,1,1,0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,0
	,1,1,0,1,0,0,1,1,0,0,1,0,1,1,0,0,1,1,0,1,0,0,1,0,1,1,0,1,0,0,1,1,0,0,1,0,1,1,0,0,1,1,0,1,0,0,1,1,0,0,
	1,0,1,1,0,1,0,0,1,0,1,1,0,0,1,1,0,1,0,0,1,0,1,1,0,1,0,0,1,1,0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,0,1,1,0,1,0,0,1,1
	,0,0,1,0,1,1,0,0,1,1,0,1,0,0,1,0,1,1,0,1,0,0,1,1,0,0,1,0,1,1,0};

unsigned int countBits(int N)
{

    unsigned int count = tab[N & 0xff] ^


                         tab[(N >> 8) & 0xff] ^


                         tab[(N >> 16) & 0xff] ^
                         tab[(N >> 24) & 0xff];
    return count;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int tt,nn,qq,pp,occ,ecc,kk,jj,xnn,opp,sm=0;

	cin>>tt;
	for(int i=0;i<tt;i++)
	{
	    cin>>nn>>qq;
	    int a[nn],b;
	    sm=0;
	    for( jj=0;jj<nn;jj++)
	    {
	        cin>>a[jj];
	        b=countBits(a[jj]);
	        sm+=b;
	    }
	    for(kk=0;kk<qq;kk++)
	    {
	        cin>>pp;
	        int p=countBits(pp);
	        if(p==1)
	        {
	            occ=(nn-sm);
	            ecc=sm;
	        }
	        else
	        {
	            ecc=(nn-sm);
	            occ=sm;
	        }



	        cout<<ecc<<' '<<occ<<'\n';
	}


}
}
