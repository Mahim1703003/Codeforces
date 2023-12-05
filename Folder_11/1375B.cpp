#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,m,i,j;
    bool condition = true;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int a[n+1][m+1];
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
                cin>>a[i][j];
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(i==1||j==1||i==n||j==m)
                {
                    if((i==1&&j==1)||(i==1&&j==m)||(i==n&&j==1)||(i==n&&j==m))
                    {
                        if(a[i][j]>2)
                            condition = false;
                        else
                            a[i][j] = 2;
                    }
                    else
                    {
                        if(a[i][j]>3)
                            condition = false;
                        else
                            a[i][j] = 3;
                    }
                }
                else
                {
                    if(a[i][j]>4)
                        condition = false;
                    else
                        a[i][j] = 4;
                }
            }
        }
        if(condition)
        {
            cout<<"YES\n";
            for(i=1;i<=n;i++)
            {
                for(j=1;j<=m;j++)
                    cout<<a[i][j]<<" ";
                cout<<"\n";
            }
        }
        else
            cout<<"NO\n";
        condition = true;
    }
    return 0;
}
