#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,b,i,sum=0,highest=-1,rest;
    double div,ans;
    cin>>n>>b;
    int a[n],c[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        highest = max(highest,a[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        c[i] = abs(highest-a[i]);
        sum = sum + c[i];
    }
    if(sum>b)
        cout<<"-1\n";
    else
    {
        rest = b - sum;
        div = (rest*1.0) / (n*1.0);
        cout<<fixed;
        for(i=0;i<=n-1;i++)
        {
            ans = (c[i]*1.0) + div;
            cout<<setprecision(6)<<ans<<"\n";
        }
    }
    return 0;
}
