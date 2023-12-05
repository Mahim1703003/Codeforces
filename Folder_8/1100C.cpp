#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    double n,r,pi=acos(-1),R;
    cin>>n>>r;
    R = (r*sin(pi/n)) / (1.0-sin(pi/n));
    cout<<fixed;
    cout<<setprecision(7)<<R<<"\n";
    return 0;
}
