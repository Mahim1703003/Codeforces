#include<iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,i,sum1=0,sum2=0,diff,ans;
    cin>>n;
    long long int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        sum1 = sum1 + a[i];
    }
    sort(a,a+n,greater<int>());
    for(i=0;i<=n-2;i++)
    {
        sum2 = sum2 + a[i];
        sum1 = sum1 - sum2;
        diff = abs(sum1-sum2)+1;
        if(i==0)
            ans = diff;
        else
            ans = min(ans,diff);
    }
    cout<<ans<<"\n";
    return 0;
}
