#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,x,y,ans;
    cin>>n>>x>>y;
    ans = ceil((y*1.0*n*1.0)/(100*1.0));
    cout<<max(ans-x,0)<<"\n";
    return 0;
}
