#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,m,i,j,a[2][2],k=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        while(n--)
        {
            for(i=0;i<=1;i++)
            {
                for(j=0;j<=1;j++)
                    cin>>a[i][j];
            }
            if(a[0][1]==a[1][0])
                k = 1;
        }
        if(k==1&&(m*m%4)==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        k = 0;
    }
    return 0;
}
