#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,in,ct=0,f=0;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        if(a[i]==i)
            ct++;
    }
    if(ct!=n)
    {
        for(i=0;i<=n-1;i++)
        {
            if(a[i]!=i)
            {
                in = a[i];
                if(i==a[in] && in==a[i])
                {
                    ct = ct + 2;
                    f++;
                    break;
                }
            }
        }
        if(f==0)
            ct++;
    }
    cout<<ct<<"\n";
    return 0;
}
