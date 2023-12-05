#include<iostream>
#define lli long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli l1,r1,l2,r2,k,mi,ma,ans;
    cin>>l1>>r1>>l2>>r2>>k;
    if(r2<l1 || l2>r1)
        cout<<"0\n";
    else
    {
        mi = max(l1,l2);
        ma = min(r1,r2);
        ans = ma - mi + 1;
        if(k>=mi&&k<=ma)
            ans--;
        cout<<ans<<"\n";
    }
    return 0;
}
