#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,a,b,ma,mi;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        ma = max(a,b);
        mi = min(a,b);
        if(2*mi>=ma)
            cout<<4*mi*mi<<"\n";
        else
            cout<<ma*ma<<"\n";
    }
    return 0;
}
