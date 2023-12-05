#include<iostream>
#include<map>
#include<iterator>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    map <int,int>::iterator it;
    vector <int> v;
    int n,i,ct=0,x,big=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        big = max(big,x);
        m[x]++;
        if(m[x]<=2)
            ct++;
    }
    if(m[big]>=2)
        ct--;
    cout<<ct<<"\n";
    for(it=m.begin();it!=m.end();it++)
    {
        if(it->second!=0)
        {
            cout<<it->first<<" ";
            it->second--;
        }
    }
    for(it=m.begin();it!=m.end();it++)
    {
        if(it->first==big)
            continue;
        if(it->second!=0)
        {
            v.push_back(it->first);
            it->second--;
        }
    }
    if(v.size()!=0)
    {
        reverse(v.begin(),v.end());
        for(i=0;i<=v.size()-1;i++)
            cout<<v[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
