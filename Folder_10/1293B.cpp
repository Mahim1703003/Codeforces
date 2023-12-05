#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    double sum=0;
    cin>>n;
    while(n--)
        sum = sum + (1.0/((n+1)*1.0));
    cout<<fixed;
    cout<<setprecision(12)<<sum<<endl;
    return 0;
}
