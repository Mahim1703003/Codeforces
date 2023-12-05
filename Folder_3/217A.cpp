#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,j,min_drift,ans=0;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i]>>b[i];
    for(i=0;i<=n-1;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            min_drift = min(abs(a[i]-a[j]),abs(b[i]-b[j]));
            ans = max(ans,min_drift);
        }
    }
    cout<<ans<<"\n";
    return 0;
}
