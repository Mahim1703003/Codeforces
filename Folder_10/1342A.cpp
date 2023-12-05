#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,x,y,a,b,ans1,ans2,ans;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>a>>b;
        ans1 = (x+y)*a;
        ans2 = min(x,y)*b + (max(x,y)-min(x,y))*a;
        ans = min(ans1,ans2);
        cout<<ans<<"\n";
    }
    return 0;
}
