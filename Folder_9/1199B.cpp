#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double H,L,x;
    cin>>H>>L;
    x = (L*L-H*H)/(2.0*H);
    cout<<fixed;
    cout<<setprecision(13)<<x<<endl;
    return 0;
}
