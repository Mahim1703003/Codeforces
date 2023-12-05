#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,n,r,ans,d1;
    cin>>t;
    while(t--)
    {
        cin>>n>>r;
        if(n>r)
            ans = (r*(r+1)) / 2;
        else
        {
            d1 = n - 1;
            ans = ((d1*(d1+1))/2) + 1;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
