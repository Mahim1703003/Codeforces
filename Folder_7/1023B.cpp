#include<iostream>
#define lli long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli n,k,ans;
    cin>>n>>k;
    if(k<=n)
    {
        ans = k / 2;
        if(k%2==0)
            ans--;
    }
    else
    {
        if(k<=n+n-1)
            ans = (n-(k-n)+1) / 2;
        else
            ans = 0;
    }
    cout<<ans<<"\n";
    return 0;
}
