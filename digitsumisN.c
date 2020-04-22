const int TEN=10;
int getSum(int n)
{
    int sum=0;
    while(n>0)
    {
        sum+=n%TEN;
        n/=TEN;
    }
    return sum;
}

int getN(int n)
{
    int sum=getSum(n);
    if(sum%TEN==0)
        return (n*TEN);
    int extra = TEN-(sum%TEN);
    return ((n*TEN)+extra);
}

int main()
{
    int i,n=10;
    for(i=0;i<=n;i++)
    {
        printf("%d\n",getN(i));
    }
    return 0;
}
