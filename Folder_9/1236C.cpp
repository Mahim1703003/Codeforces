#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,j,k=0;
    cin>>n;
    int a[n+1][n+1];
    for(j=1;j<=n;j++)
    {
        if(j%2==1)
        {
            for(i=1;i<=n;i++)
            {
                k++;
                a[i][j] = k;
            }
        }
        else
        {
            for(i=n;i>=1;i--)
            {
                k++;
                a[i][j] = k;
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}
