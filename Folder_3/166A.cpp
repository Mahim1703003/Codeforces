#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <pair <int,int> > v;
    int n,k,sp,pt,ct=0,i,j=0;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>sp>>pt;
        v.push_back(make_pair(sp,pt));
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(i=0;i<=n-1;i++)
    {
        if(v[i].first!=v[j].first)
        {
            reverse(v.begin()+j,v.begin()+i);
            j = i;
        }
    }
    if(i!=j)
        reverse(v.begin()+j,v.begin()+i);
    k--;
    for(i=k+1;i<=n-1;i++)
    {
        if((v[i].first==v[k].first && v[i].second==v[k].second))
            ct++;
    }
    for(i=k-1;i>=0;i--)
    {
        if((v[i].first==v[k].first && v[i].second==v[k].second))
            ct++;
    }
    cout<<ct+1<<"\n";
    return 0;
}
