#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    m = ceil((n*1.0)/(2*1.0));
    if(m%2==0)
        cout<<0<<endl;
    else
        cout<<1<<endl;
    return 0;
}
