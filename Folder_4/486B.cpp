#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int m,n,i,j,k,ct=0,x,ct2=0;
    cin>>m>>n;
    int a[m+1][n+1],b[m+1][n+1];
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>a[i][j];
            b[i][j] = 1;
        }
    }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(a[i][j]==0)
            {
                for(k=1;k<=n;k++)
                    b[i][k] = 0;
                for(k=1;k<=m;k++)
                    b[k][j] = 0;
            }
        }
    }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            for(k=1;k<=n;k++)
            {
                if(b[i][k]==1)
                    ct++;
            }
            for(k=1;k<=m;k++)
            {
                if(b[k][j]==1)
                    ct++;
            }
            if(ct!=0)
                x = 1;
            else
                x = 0;
            if(x==a[i][j])
                ct2++;
            ct = 0;
        }
        ct = 0;
    }
    if(ct2==n*m)
    {
        cout<<"YES\n";
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
                cout<<b[i][j]<<" ";
            cout<<"\n";
        }
    }
    else
        cout<<"NO\n";
    return 0;
}
