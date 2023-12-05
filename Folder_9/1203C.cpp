#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,i,x,ct=0;
    cin>>n;
    long long int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    for(i=0;i<=n-1;i++)
    {
        if(i==0)
            x = a[i];
        else
            x = __gcd(x,a[i]);
    }
    for(i=1;i<=sqrt(x);i++)
    {
        if(x%i==0)
        {
            if(i!=x/i)
                ct = ct + 2;
            else
                ct = ct + 1;
        }
    }
    cout<<ct<<"\n";
    return 0;
}
