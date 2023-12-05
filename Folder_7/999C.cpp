#include<iostream>
#include<map>
#include<iterator>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <char,int> m,m1;
    map <char,int>::iterator it;
    string s,s1;
    char x;
    int n,k,i,in,ct=0;
    cin>>n>>k;
    cin>>s;
    for(i=0;i<=s.size()-1;i++)
        m[s[i]]++;
    for(it=m.begin();it!=m.end();it++)
    {
        x = it->first;
        if(m[x]<k)
        {
            m1[x] = m[x];
            k = k - m[x];
        }
        else
        {
            m1[x] = k;
            k = 0;
        }
    }
    for(i=0;i<=s.size()-1;i++)
    {
        if(m1[s[i]]==0)
            cout<<s[i];
        else
            m1[s[i]]--;
    }
    cout<<"\n";
    return 0;
}
