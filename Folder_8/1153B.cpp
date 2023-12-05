#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,h,i,j;
    cin>>n>>m>>h;
    int a[m+1],b[n+1],c[n+1][m+1];
    for(i=1;i<=m;i++)
        cin>>a[i];
    for(i=1;i<=n;i++)
        cin>>b[i];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>c[i][j];
            if(c[i][j]==1)
                c[i][j] = min(b[i],a[j]);
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            cout<<c[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}
