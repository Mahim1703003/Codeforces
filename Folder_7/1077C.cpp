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
    vector < pair <long long int,long long int> > v;
    vector <long long int> v2;
    long long int n,i,sum=0,x,l;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        sum = sum + x;
        v.push_back(make_pair(x,i));
    }
    sort(v.begin(),v.end());
    for(i=0;i<=n-1;i++)
    {
        sum = sum - v[i].first;
        if(i!=n-1)
        {
            if(sum-v[n-1].first==v[n-1].first)
                v2.push_back(v[i].second);
        }
        else
        {
            if(sum-v[n-2].first==v[n-2].first)
                v2.push_back(v[i].second);
        }
        sum = sum + v[i].first;
    }
    l = v2.size();
    cout<<l<<"\n";
    for(i=0;i<=l-1;i++)
        cout<<v2[i]<<" ";
    cout<<"\n";
    return 0;
}
