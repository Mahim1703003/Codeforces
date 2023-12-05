#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t,x,n,m;
    cin>>t;
    while(t--)
    {
        cin>>x>>n>>m;
        if(x>20)
        {
            while(n--)
                x = floor((x*1.0)/2.0) + 10;
        }
        x = x - m*10;
        if(x<=0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
