#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,a,b,c,n;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n;
        if(n%3==0)
            cout<<a<<"\n";
        else if(n%3==1)
            cout<<b<<"\n";
        else
        {
            c = a ^ b;
            cout<<c<<"\n";
        }
    }
    return 0;
}
