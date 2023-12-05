#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,ans;
    cin>>n;
    m = sqrt(n);
    if(n==m*m)
        ans = m+m;
    else if(n<=m*m+m)
        ans = m+m+1;
    else
        ans = m+m+2;
    cout<<ans<<"\n";
    return 0;
}
