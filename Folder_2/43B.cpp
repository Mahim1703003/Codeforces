#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    map <char,int> m1;
    map <char,int> m2;
    map <char,int>::iterator it;
    string s1,s2;
    char x;
    int i,k=0;
    getline(cin,s1);
    getline(cin,s2);
    for(i=0;i<=s1.size()-1;i++)
    {
        if(s1[i]==' ')
            continue;
        m1[s1[i]]++;
    }
    for(i=0;i<=s2.size()-1;i++)
    {
        if(s2[i]==' ')
            continue;
        m2[s2[i]]++;
    }
    for(it=m2.begin();it!=m2.end();it++)
    {
        x = it->first;
        if(m2[x]<=m1[x])
            k++;
    }
    if(k==m2.size())
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}
