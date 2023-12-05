#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int b,d,s,sum,zero=0;
    cin>>b>>d>>s;
    if(b>=d&&b>=s)
    {
        d = max(b-1-d,zero);
        s = max(b-1-s,zero);
        sum = d + s;
    }
    else if(d>=b&&d>=s)
    {
        b = max(d-1-b,zero);
        s = max(d-1-s,zero);
        sum = b + s;
    }
    else if(s>=b&&s>=d)
    {
        b = max(s-1-b,zero);
        d = max(s-1-d,zero);
        sum = b + d;
    }
    cout<<sum<<"\n";
    return 0;
}
