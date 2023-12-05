#include<iostream>
#include<string>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    map <int,int>::iterator it;
    string s;
    int n,i,x,max=0;
    cin>>n;
    while(n--)
    {
        cin>>s;
        for(i=0;i<=6;i++)
        {
            x = s[i] - '0';
            m[i] = m[i] + x;
        }
    }
    for(it=m.begin();it!=m.end();it++)
    {
        if(it->second>max)
            max = it->second;
    }
    cout<<max<<"\n";
    return 0;
}
