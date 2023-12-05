#include<iostream>
using namespace std;
int main()
{
    int n,i,j,ct=0,m=0;
    cin>>n;
    int a[n][n],b[n];
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==-1||a[i][j]==0||a[i][j]==2)
                ct++;
        }
        if(ct==n)
        {
            b[m]=i+1;
            m++;
        }
        ct=0;
    }
    cout<<m<<endl;
    for(i=0;i<=m-1;i++)
        cout<<b[i]<<" ";
    cout<<endl;
    return 0;
}
