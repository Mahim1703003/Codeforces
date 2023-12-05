#include<iostream>
using namespace std;
int a[1001][1001];
int b[1001][1001];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,clr,diam,ans1=0,ans2=0,sum1=0,sum2=0,i,j;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>clr>>diam;
        a[diam][clr]++;
    }
    for(i=1;i<=m;i++)
    {
        cin>>clr>>diam;
        b[diam][clr]++;
    }
    for(i=1;i<=1000;i++)
    {
        for(j=1;j<=1000;j++)
        {
            sum1 = sum1 + a[i][j];
            sum2 = sum2 + b[i][j];
            ans2 = ans2 + min(a[i][j],b[i][j]);
        }
        ans1 = ans1 + min(sum1,sum2);
        sum1 = 0;
        sum2 = 0;
    }
    cout<<ans1<<" "<<ans2<<"\n";
    return 0;
}
