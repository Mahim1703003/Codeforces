#include<iostream>
#include<cmath>
#define m 1000001
int primes[m];
using namespace std;
int main()
{
    int n,i,j,y,k=0;
    cin>>n;
    primes[0]=1;
    primes[1]=1;
    for(i=2;i<=sqrt(m-1);i++)
    {
        if(primes[i]==0)
        {
            for(j=2;i*j<=m-1;j++)
            primes[i*j]=1;
        }
    }
    long long int a[n],b[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        if(sqrt(a[i])*sqrt(a[i])==a[i])
        {
            y=sqrt(a[i]);
            if(primes[y]==0)
                b[i]=1;
            else
                b[i]=0;
        }
        else
            b[i]=0;
    }
    for(i=0;i<=n-1;i++)
    {
        if(b[i]==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}

