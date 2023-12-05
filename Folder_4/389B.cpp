#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,j,ct=0,cross=0,k=0;
    cin>>n;
    int a[n+2][n+2];
    char ch[n+2][n+2];
    for(i=0;i<=n+1;i++)
    {
        for(j=0;j<=n+1;j++)
        {
            ch[i][j] = '1';
            a[i][j] = 0;
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>ch[i][j];
            if(ch[i][j]=='#')
                cross++;
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(ch[i][j]=='#'&&a[i][j]==0)
            {
                if((a[i+1][j]==0&&a[i-1][j]==0&&a[i][j+1]==0&&a[i][j-1]==0)&&(ch[i+1][j]=='#'&&ch[i-1][j]=='#'&&ch[i][j+1]=='#'&&ch[i][j-1]=='#'))
                {
                    a[i+1][j]++;
                    a[i-1][j]++;
                    a[i][j+1]++;
                    a[i][j-1]++;
                    a[i][j]++;
                }
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(a[i][j]==1)
                k++;
        }
    }
    if(k==cross)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
