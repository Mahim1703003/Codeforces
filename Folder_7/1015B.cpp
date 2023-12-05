#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <char,int> m1,m2;
    map <char,int>::iterator it1,it2;
    vector <int> v;
    string s,t;
    int n,i,j,ct=0,len;
    cin>>n>>s>>t;
    for(i=0;i<=n-1;i++)
    {
        m1[s[i]]++;
        m2[t[i]]++;
    }
    if(m1.size() == m2.size())
    {
        for(it1=m1.begin(),it2=m2.begin();it1!=m1.end();it1++,it2++)
        {
            if((it1->first==it2->first)&&(it1->second==it2->second))
                ct++;
        }
        if(ct==m1.size())
        {
            s = " " + s;
            t = " " + t;
            for(i=1;i<=n;i++)
            {
                for(j=i;j<=n;j++)
                {
                    if(t[i]==s[j])
                        break;
                }
                j--;
                for(;j>=i;j--)
                {
                    swap(s[j],s[j+1]);
                    v.push_back(j);
                }
            }
            len = v.size();
            cout<<len<<"\n";
            for(i=0;i<=len-1;i++)
                cout<<v[i]<<" ";
            cout<<"\n";
        }
        else
            cout<<"-1\n";
    }
    else
        cout<<"-1\n";
    return 0;
}
