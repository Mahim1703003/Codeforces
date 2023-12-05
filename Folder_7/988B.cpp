#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector < pair <int,string> > v;
    int n,i,k=0;
    string s,s1,s2;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>s;
        v.push_back(make_pair(s.size(),s));
    }
    sort(v.begin(),v.end());
    for(i=1;i<=v.size()-1;i++)
    {
        s1 = v[i].second;
        s2 = v[i-1].second;
        if(s1.find(s2)==std::string::npos)
        {
            k++;
            break;
        }
    }
    if(k==0)
    {
        cout<<"YES\n";
        for(i=0;i<=v.size()-1;i++)
            cout<<v[i].second<<"\n";
    }
    else
        cout<<"NO\n";
    return 0;
}
