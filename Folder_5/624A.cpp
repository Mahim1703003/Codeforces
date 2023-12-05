#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    /*
    use of precision
    double d = (56.0 / 5.0);
    cout<<setprecision(4)<<d<<endl;
    cout<<setprecision(5)<<d<<endl;
    cout<<fixed;
    cout<<setprecision(4)<<d<<endl;
    cout<<setprecision(5)<<d<<endl;
    */
    double d,L,v1,v2,ans;
    cin>>d>>L>>v1>>v2;
    ans = (L-d) / (v1+v2);
    cout<<fixed;
    cout<<setprecision(20)<<ans<<endl;
    return 0;
}
