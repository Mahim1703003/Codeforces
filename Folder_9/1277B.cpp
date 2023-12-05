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
    int t,i,n,ct=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<=n-1;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                m[a[i]]++;
                if(m[a[i]]==1)
                    v.push_back(a[i]);
            }
        }
        if(v.size()==0)
            cout<<"0\n";
        else
        {
            sort(v.begin(),v.end(),greater<int>());
            for(i=0;i<=v.size()-1;i++)
            {
                if(m[v[i]]!=0)
                {
                    while(v[i]%2==0)
                    {
                        ct++;
                        m[v[i]] = 0;
                        v[i] = v[i] / 2;
                    }
                }
            }
            cout<<ct<<"\n";
        }
        m.clear();
        v.clear();
        ct = 0;
    }
    return 0;
}
