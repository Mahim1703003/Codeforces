#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,i,m,t,l,r,ans;
    cin>>n;
    long long int a[n+1],sum_a[n+1],b[n+1],sum_b[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        b[i] = a[i];
        if(i==1)
            sum_a[i] = a[i];
        else
            sum_a[i] = sum_a[i-1] + a[i];
    }
    sort(b+1,b+n+1);
    for(i=1;i<=n;i++)
    {
        if(i==1)
            sum_b[i] = b[i];
        else
            sum_b[i] = sum_b[i-1] + b[i];
    }
    cin>>m;
    for(i=1;i<=m;i++)
    {
        cin>>t>>l>>r;
        if(t==1)
            ans = sum_a[r] - sum_a[l] + a[l];
        else
            ans = sum_b[r] - sum_b[l] + b[l];
        cout<<ans<<"\n";
    }
    return 0;
}

