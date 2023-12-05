#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,a,b,x,y,n,d1,d2,rest;
    long long int ans1,ans2,d3,d4;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>x>>y>>n;
        d1 = max(a-n,x);
        rest = n - (a - d1);
        d2 = max(b-rest,y);
        d3 = d1;
        d4 = d2;
        ans1 = d3 * d4;
        d1 = max(b-n,y);
        rest = n - (b - d1);
        d2 = max(a-rest,x);
        d3 = d1;
        d4 = d2;
        ans2 = d3 * d4;
        if(ans1<=ans2)
            cout<<ans1<<"\n";
        else
            cout<<ans2<<"\n";
    }
    return 0;
}
