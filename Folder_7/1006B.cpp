#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    vector <int> v;
    int n,k,i,sum=0;
    cin>>n>>k;
    int a[n],b[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        b[i] = a[i];
    }
    sort(a,a+n,greater<int>());
    for(i=0;i<=k-1;i++)
    {
        sum = sum + a[i];
        m[a[i]]++;
    }
    for(i=0;i<=n-1;i++)
    {
        if(m[b[i]]!=0)
        {
            v.push_back(i);
            m[b[i]]--;
        }
    }
    if(v[k-1]!=n-1)
        v[k-1] = n-1;
    cout<<sum<<"\n";
    for(i=0;i<=k-1;i++)
    {
        if(i==0)
            cout<<v[i]-0+1<<" ";
        else
            cout<<v[i]-v[i-1]<<" ";
    }
    cout<<"\n";
    return 0;
}
