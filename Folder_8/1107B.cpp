#include<iostream>
#define lli long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli n,k,x,ans;
    cin>>n;
    while(n--)
    {
        cin>>k>>x;
        ans = x + (k-1)*9;
        cout<<ans<<"\n";
    }
    return 0;
}
