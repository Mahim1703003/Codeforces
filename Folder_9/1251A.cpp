#include<iostream>
#include<string>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <char,int> m;
    map <char,int>::iterator it;
    string s;
    int t,i;
    cin>>t;
    while(t--)
    {
        cin>>s;
        s = s + '0';
        for(i=0;i<=s.size()-2;i++)
        {
            if(s[i]!=s[i+1])
                m[s[i]]++;
            else
                i++;
        }
        for(it=m.begin();it!=m.end();it++)
            cout<<it->first;
        cout<<"\n";
        m.clear();
    }
    return 0;
}

