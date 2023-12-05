#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,i,mult=1;
    cin>>n;
    if(n%2==0)
    {
        mult = mult * 2;
        while(n%2==0)
            n = n / 2;
    }
    for(i=3;i<=sqrt(n);i=i+2)
    {
        if(n%i==0)
        {
            mult = mult * i;
            while(n%i==0)
                n = n / i;
        }
    }
    if(n!=1)
        mult = mult * n;
    cout<<mult<<"\n";
    return 0;
}
