#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,k,i,j,con=0,sum=0;
    cin>>n>>m>>k;
    char a[n][m];
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=m-1;j++)
            cin>>a[i][j];
    }
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=m-1;j++)
        {
            if(a[i][j]=='.')
                con++;
            else
            {
                sum = sum + max(0,con-k+1);
                con = 0;
            }
        }
        sum = sum + max(0,con-k+1);
        con = 0;
    }
    if(k!=1)
    {
        for(j=0;j<=m-1;j++)
        {
            for(i=0;i<=n-1;i++)
            {
                if(a[i][j]=='.')
                    con++;
                else
                {
                    sum = sum + max(0,con-k+1);
                    con = 0;
                }
            }
            sum = sum + max(0,con-k+1);
            con = 0;
        }
    }
    cout<<sum<<"\n";
    return 0;
}
