#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,c;
    cin>>n;
    if(n==1)
        c = 0;
    else
        c = ceil((n*1.0-2*1.0)/(2*1.0));
    cout<<c<<"\n";
    return 0;
}
