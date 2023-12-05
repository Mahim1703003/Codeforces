#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int w,h,i,n,mult=1,mult2=1,r=998244353;
    cin>>w>>h;
    for(i=1;i<=w;i++)
    {
        mult = 2 * mult;
        mult = mult % r;
    }
    for(i=1;i<=h;i++)
    {
        mult2 = 2 * mult2;
        mult2 = mult2 % r;
    }
    n = mult * mult2;
    n = n % r;
    cout<<n<<"\n";
    return 0;
}
