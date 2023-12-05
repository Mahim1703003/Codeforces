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
    int t,n,r,i,x,l,ct=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>r;
        for(i=1;i<=n;i++)
        {
            cin>>x;
            m[x]++;
            if(m[x]==1)
                v.push_back(x);
        }
        sort(v.begin(),v.end());
        l = v.size();
        for(i=l-1;i>=0;i--)
        {
            if(i==l-1)
                ct++;
            else
            {
                if(v[i]-ct*r<=0)
                    break;
                else
                    ct++;
            }
        }
        cout<<ct<<"\n";
        m.clear();
        v.clear();
        ct = 0;
    }
    return 0;
}
