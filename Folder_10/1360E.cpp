#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,i,j,ct=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        char a[n+1][n+1];
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
                cin>>a[i][j];
        }
        for(i=1;i<=n-1;i++)
        {
            for(j=1;j<=n-1;j++)
            {
                if(a[i][j]=='1')
                {
                    if(a[i+1][j]=='1'||a[i][j+1]=='1')
                        continue;
                    else
                        ct = 0;
                }
            }
        }
        if(ct==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        ct = 1;
    }
    return 0;
}
