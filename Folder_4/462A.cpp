#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,j,k=0,ct=0;
    cin>>n;
    char a[n][n];
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
            cin>>a[i][j];
    }
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            if(j+1<=n-1 && a[i][j+1]=='o')
                k++;
            if(j-1>=0 && a[i][j-1]=='o')
                k++;
            if(i+1<=n-1 && a[i+1][j]=='o')
                k++;
            if(i-1>=0 && a[i-1][j]=='o')
                k++;
            if(k%2==0)
                ct++;
            k = 0;
        }
    }
    if(ct==n*n)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
