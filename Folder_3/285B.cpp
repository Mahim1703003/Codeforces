#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,s,t,i,ct=0;
    cin>>n>>s>>t;
    int a[n+1];
    for(i=1;i<=n;i++)
        cin>>a[i];
    /*while(n--)
    {
        if(s!=a[s])
        {
            ct++;
            s = a[s];
        }
        if(s==t)
            break;
    }*/
    while(s!=t)
    {
        ct++;
        s = a[s];
        n--;
        if(n==0)
            break;
    }
    if(s==t)
        cout<<ct<<"\n";
    else
        cout<<"-1\n";
    return 0;
}
