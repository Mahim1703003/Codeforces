#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int l,r,x,y,k,a,b,t;
    cin>>l>>r>>x>>y>>k;
    for(b=x;b<=y;b++)
    {
        a = b * k;
        if(a>=l&&a<=r)
        {
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
}
