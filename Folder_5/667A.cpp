#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long double pi,d,h,v,e,water_down,water_up,ans;
    pi = acos(-1);
    cin>>d>>h>>v>>e;
    water_down = v;
    water_up = pi*(d/2.0)*(d/2.0)*e;
    if(water_down>water_up)
    {
        cout<<"YES\n";
        ans = (pi*d*d*h) / (4.0*v-pi*d*d*e);
        cout<<fixed;
        cout<<setprecision(12)<<ans<<"\n";
    }
    else
        cout<<"NO\n";
    return 0;
}
