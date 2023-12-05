#include<iostream>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <long long int> v;
    long long int n,k,i,mult=1,l,sum=0,d=998244353;
    cin>>n>>k;
    long long int a[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]>=n-k+1)
        {
            v.push_back(i);
            sum = sum + a[i];
        }
    }
    l = v.size();
    for(i=1;i<=l-1;i++)
    {
        mult = mult * (v[i]-v[i-1]);
        mult = mult % d;
    }
    cout<<sum<<" "<<mult<<"\n";
    return 0;
}
