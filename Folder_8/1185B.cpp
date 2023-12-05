#include<iostream>
#include<vector>
#include<utility>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector < pair <char,int> > v1,v2;
    string s1,s2;
    int n,i,j,len1,len2,ct=0;
    cin>>n;
    while(n--)
    {
        cin>>s1>>s2;
        for(i=0;i<=s1.size()-1;i++)
        {
            if(i==0)
                v1.push_back(make_pair(s1[i],1));
            else
            {
                if(s1[i]==s1[i-1])
                {
                    len1 = v1.size();
                    v1[len1-1].second++;
                }
                else
                    v1.push_back(make_pair(s1[i],1));
            }
        }
        for(i=0;i<=s2.size()-1;i++)
        {
            if(i==0)
                v2.push_back(make_pair(s2[i],1));
            else
            {
                if(s2[i]==s2[i-1])
                {
                    len2 = v2.size();
                    v2[len2-1].second++;
                }
                else
                    v2.push_back(make_pair(s2[i],1));
            }
        }
        if(v1.size()==v2.size())
        {
            for(i=0;i<=v1.size()-1;i++)
            {
                if(v1[i].first==v2[i].first&&v2[i].second>=v1[i].second)
                    ct++;
                else
                    break;
            }
            if(ct==v1.size())
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else
            cout<<"NO\n";
        v1.clear();
        v2.clear();
        ct = 0;
    }
    return 0;
}

