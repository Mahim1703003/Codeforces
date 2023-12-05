#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    map <char,int> m;
    map <char,int>::iterator it;
    int n,k,i,ct=0;
    char ch;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>ch;
        m[ch]++;
    }
    for(it=m.begin();it!=m.end();it++)
    {
        if(it->second<=k)
            ct++;
    }
    if(ct==m.size())
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
