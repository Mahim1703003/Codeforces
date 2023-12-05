#include<iostream>
#include<string>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    map <char,int> m1;
    map <char,int> m2;
    map <char,int>::iterator it;
    int q,i,k=0;
    char ch;
    string s,t;
    cin>>q;
    while(q--)
    {
        cin>>s>>t;
        for(i=0;i<=s.size()-1;i++)
        {
            m1[s[i]]++;
            m2[t[i]]++;
        }
        for(it=m1.begin();it!=m1.end();it++)
        {
            ch = it->first;
            if(m2[ch]>=1)
            {
                k++;
                cout<<"YES\n";
                break;
            }
        }
        if(k==0)
            cout<<"NO\n";
        m1.clear();
        m2.clear();
        k = 0;
    }
}
