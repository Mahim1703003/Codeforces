#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,m,div,rem,ans,extra;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        div = m / 2;
        rem = m % 2;
        ans = div * n;
        if(rem==1)
        {
            extra = ceil((n*1.0)/2.0);
            cout<<ans+extra<<"\n";
        }
        else
            cout<<ans<<"\n";
    }
    return 0;
}
