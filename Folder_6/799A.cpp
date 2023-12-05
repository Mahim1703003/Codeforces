#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,t,k,d,i,div,a1;
    cin>>n>>t>>k>>d;
    div = ceil((n*1.0)/(k*1.0));
    a1 = div * t;
    for(i=1;;i++)
    {
        if(i%t==0)
            n = n - k;
        if(n<=0)
            break;
        if(i==d+t)
        {
            n = n - k;
            d = d + t;
        }
        if(n<=0)
            break;
    }
    if(i<a1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
