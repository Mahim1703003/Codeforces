#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <char,int> ms,mt,mp,m;
    string s,t,p,st;
    int q,i,j,d;
    bool ans = true;
    char ch;
    cin>>q;
    while(q--)
    {
        cin>>s>>t>>p;
        for(i=0;i<=s.size()-1;i++)
            ms[s[i]]++;
        for(i=0;i<=t.size()-1;i++)
            mt[t[i]]++;
        for(i=0;i<=p.size()-1;i++)
            mp[p[i]]++;
        for(ch='a';ch<='z';ch++)
        {
            if(ms[ch]==mt[ch])
                continue;
            else if(ms[ch]<mt[ch])
            {
                d = mt[ch] - ms[ch];
                if(mp[ch]>=d)
                    m[ch] = d;
                else
                    ans = false;
            }
            else
                ans = false;
        }
        if(ans)
        {
            j = 0;
            for(i=0;i<=t.size()-1;i++)
            {
                if(t[i]==s[j])
                {
                    st = st + t[i];
                    j++;
                    if(j==s.size())
                        break;
                }
                else
                {
                    if(m[t[i]]>0)
                    {
                        st = st + t[i];
                        m[t[i]]--;
                    }
                    else
                    {
                        ans = false;
                        break;
                    }
                }
            }
            if(ans)
            {
                i++;
                for(;i<=t.size()-1;i++)
                {
                    if(m[t[i]]>0)
                    {
                        st = st + t[i];
                        m[t[i]]--;
                    }
                    else
                    {
                        ans = false;
                        break;
                    }
                }
                if(ans)
                    cout<<"YES\n";
                else
                    cout<<"NO\n";
            }
            else
                cout<<"NO\n";
        }
        else
            cout<<"NO\n";
        ms.clear();
        mt.clear();
        mp.clear();
        m.clear();
        ans = true;
    }
    return 0;
}
