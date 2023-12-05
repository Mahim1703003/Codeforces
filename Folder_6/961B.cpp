#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector < pair <int,int> > v;
    int n,k,i,j,sum=0,sum0=0,sum1=0;
    cin>>n>>k;
    int a[n+1],t[n+1];
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n;i++)
    {
        cin>>t[i];
        if(t[i]==1)
            sum = sum + a[i];
    }
    for(i=1;i<=1+k-1;i++)
    {
        if(t[i]==0)
            sum0 = sum0 + a[i];
        else
            sum1 = sum1 + a[i];
    }
    v.push_back(make_pair(sum0,sum1));
    i = 1;
    j = i+k-1;
    while(j!=n)
    {
        if(t[i]==0)
            sum0 = sum0 - a[i];
        else
            sum1 = sum1 - a[i];
        i++;
        j++;
        if(t[j]==0)
            sum0 = sum0 + a[j];
        else
            sum1 = sum1 + a[j];
        v.push_back(make_pair(sum0,sum1));
    }
    sort(v.begin(),v.end(),greater< pair <int,int> >());
    cout<<sum + v[0].first<<"\n";
    return 0;
}
