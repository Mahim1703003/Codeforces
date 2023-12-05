#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,L,v,l,r,tdiv,ddiv,ans;
    cin>>t;
    while(t--)
    {
        cin>>L>>v>>l>>r;
        tdiv = L / v;
        if(l!=r)
            ddiv = floor((r*1.0)/(v*1.0)) - ceil((l*1.0)/v*1.0) + 1.0;
        else
        {
            if(l%v==0)
                ddiv = 1;
            else
                ddiv = 0;
        }
        ans = tdiv - ddiv;
        cout<<ans<<"\n";
    }
    return 0;
}
