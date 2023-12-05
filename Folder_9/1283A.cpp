#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,h,m,ans;
    cin>>t;
    while(t--)
    {
        cin>>h>>m;
        ans = 60 - m;
        h++;
        ans = ans + (24-h)*60;
        cout<<ans<<"\n";
    }
    return 0;
}
