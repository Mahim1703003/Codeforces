#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double l,p,q,ans;
    cin>>l>>p>>q;
    ans=p*(l/(p+q));
    cout<<fixed;
    cout<<setprecision(10)<<ans<<endl;
    return 0;
}
