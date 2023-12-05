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
    vector <int> v1,v2;
    int n,i,len,ct=0;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        m[a[i]]++;
        if(m[a[i]]==1)
            v1.push_back(a[i]);
    }
    sort(v1.begin(),v1.end());
    len = v1.size();
    i = 0;
    while(ct!=m.size())
    {
        if(m[v1[i]]>0)
            v2.push_back(v1[i]);
        else if(m[v1[i]]==0)
            ct++;
        m[v1[i]]--;
        i = (i+1)%len;
    }
    ct = 0;
    len = v2.size();
    for(i=1;i<=len-1;i++)
    {
        if(v2[i]>v2[i-1])
            ct++;
    }
    cout<<ct<<"\n";
    return 0;
}

