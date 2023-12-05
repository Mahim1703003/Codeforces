#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,r,c;
    cin>>n;
    for(i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            r = i;
            c = n / i;
        }
    }
    cout<<r<<" "<<c<<"\n";
    return 0;
}
