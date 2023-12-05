#include<iostream>
#include<map>
#include<vector>
#include<utility>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    map <char,int> m;
    vector < pair <char,int> > v;
    int t,n,i,ct=1,len,shortest_len = 1e6;
    cin>>t;
    while(t--)
    {
        cin>>s;
        len = s.size();
        for(i=0;i<=len-1;i++)
        {
            m[s[i]]++;
            if(i!=0)
            {
                if(s[i]==s[i-1])
                    ct++;
                else
                {
                    v.push_back(make_pair(s[i-1],ct));
                    ct = 1;
                }
            }
        }
        v.push_back(make_pair(s[i-1],ct));
        if(m.size()==3)
        {
            len = v.size();
            for(i=0;i<=len-3;i++)
            {
                if(v[i].first=='1'&&v[i+1].first=='2'&&v[i+2].first=='3')
                    ct = 2 + v[i+1].second;
                else if(v[i].first=='1'&&v[i+1].first=='3'&&v[i+2].first=='2')
                    ct = 2 + v[i+1].second;
                else if(v[i].first=='2'&&v[i+1].first=='1'&&v[i+2].first=='3')
                    ct = 2 + v[i+1].second;
                else if(v[i].first=='2'&&v[i+1].first=='3'&&v[i+2].first=='1')
                    ct = 2 + v[i+1].second;
                else if(v[i].first=='3'&&v[i+1].first=='1'&&v[i+2].first=='2')
                    ct = 2 + v[i+1].second;
                else if(v[i].first=='3'&&v[i+1].first=='2'&&v[i+2].first=='1')
                    ct = 2 + v[i+1].second;
                else
                    continue;
                if(ct<shortest_len)
                    shortest_len = ct;
            }
            cout<<shortest_len<<"\n";
        }
        else
            cout<<"0\n";
        ct = 1;
        s.clear();
        m.clear();
        v.clear();
        shortest_len = 1e6;
    }
    return 0;
}
