#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,m,i,j,ct=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        char a[n+1][m+1];
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
                cin>>a[i][j];
        }
        for(j=1;j<=m-1;j++)
        {
            if(a[n][j]!='R')
                ct++;
        }
        for(i=1;i<=n-1;i++)
        {
            if(a[i][m]!='D')
                ct++;
        }
        cout<<ct<<"\n";
        ct = 0;
    }
    return 0;
}
