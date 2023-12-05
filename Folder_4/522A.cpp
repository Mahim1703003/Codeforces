#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<queue>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    queue <string> q;
    map <string,int> m,m2;
    vector < pair <string,string> > v;

    string s1,s,s2,fs,ads;
    int n,i,max_level=0;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>s1>>s>>s2;
        transform(s1.begin(),s1.end(),s1.begin(),::toupper);
        transform(s2.begin(),s2.end(),s2.begin(),::toupper);
        v.push_back(make_pair(s1,s2));
    }

    s = "POLYCARP";
    q.push(s);
    m[s]++;
    while(!q.empty())
    {
        fs = q.front();
        for(i=0;i<=n-1;i++)
        {
            if(fs==v[i].first)
                ads = v[i].second;
            else if(fs==v[i].second)
                ads = v[i].first;
            else
                continue;
            if(m[ads]==0)
            {
                q.push(ads);
                m[ads]++;
                m2[ads] = m2[fs] + 1;
                max_level = max(max_level,m2[ads]);
            }
        }
        q.pop();
    }

    cout<<max_level+1<<"\n";
    return 0;
}
