#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int a,b,mi,ma,d1,d2,min_d,t,ans,div;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        mi = min(a,b);
        ma = max(a,b);
        d1 = ma - mi;
        d2 = mi - 0;
        min_d = min(d1,d2);
        mi = mi - min_d;
        ma = ma - min_d*2;
        if(ma==0||mi==0)
            ans = min_d;
        else
        {
            div = (ma + mi) / 3;
            ans = min_d + div;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
