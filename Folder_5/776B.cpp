#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,j,ct=1;
    cin>>n;
    int a[n+2];
    for(i=0;i<=n+1;i++)
        a[i] = 1;
    for(i=2;i<=sqrt(n+1);i++)
    {
        if(a[i]==1)
        {
            for(j=2;i*j<=n+1;j++)
            {
                if(ct==1)
                    ct++;
                a[i*j] = ct;
            }
        }
    }
    cout<<ct<<"\n";
    for(i=2;i<=n+1;i++)
        cout<<a[i]<<" ";
    cout<<"\n";
    return 0;
}
