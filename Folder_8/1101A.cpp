#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int q,l,r,d,div,ans;
    cin>>q;
    while(q--)
    {
        cin>>l>>r>>d;
        if(d<l || d>r)
            ans = d;
        else
        {
            div = r / d;
            ans = d * (div+1);
        }
        cout<<ans<<"\n";
    }
    return 0;
}
