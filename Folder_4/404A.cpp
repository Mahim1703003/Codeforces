#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k=1,l=0;
    cin>>n;
    char a[n][n];
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
            cin>>a[i][j];
    }
    for(i=0;i<=n-2;i++)
    {
        if(a[i][i]==a[i+1][i+1])
            k++;
    }
    if(k!=n)
        cout<<"NO\n";
    else
    {
        for(i=0,j=n-1;i<=n-2;i++,j--)
        {
            if(a[i][j]==a[i+1][j-1])
                k++;
        }
        if(k!=2*n-1)
            cout<<"NO\n";
        else
        {
            for(i=0;i<=n-1;i++)
                a[i][i]=='1';
            for(i=0,j=n-1;i<=n-1;i++,j--)
                a[i][j]=='1';
            for(i=0;i<=n-1;i++)
            {
                for(j=0;j<=n-1;j++)
                {
                    if(a[i][j]==1)
                        continue;
                    if(a[0][1]==a[i][j])
                        l++;
                }
            }
            if(l==(n*n)-k)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}
