#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,i,j,r,c,x,y,zero=0,small,k=0,sum=0;
    cin>>n>>m;
    int a[n][m];
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=m-1;j++)
        {
            cin>>a[i][j];
            sum = sum + a[i][j];
        }
    }
    for(i=n-1;i>=0;i--)
    {
        for(j=m-1;j>=0;j--)
        {
            if(a[i][j]==0)
            {
                a[i][j] = min(a[i][j+1]-1,a[i+1][j]-1);
                sum = sum + a[i][j];
            }
        }
    }
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=m-2;j++)
        {
            if(a[i][j]>=a[i][j+1])
                k++;
        }
    }
    for(j=0;j<=m-1;j++)
    {
        for(i=0;i<=n-2;i++)
        {
            if(a[i][j]>=a[i+1][j])
                k++;
        }
    }
    if(k!=0)
        cout<<"-1\n";
    else
        cout<<sum<<"\n";
    return 0;
}
