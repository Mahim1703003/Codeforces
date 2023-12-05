#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,k,x,dip,cer,nowin;
    cin>>n>>k;
    x = (n/2) / (k+1);
    dip = x;
    cer = k*x;
    nowin = n - (dip + cer);
    cout<<dip<<" "<<cer<<" "<<nowin<<"\n";
    return 0;
}
