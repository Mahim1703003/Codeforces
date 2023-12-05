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
    map <char,int> m;
    map <char,int>::iterator it;
    int n,i,div,rest,sum=0;
    string s;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>s;
        m[s[0]]++;
    }
    for(it=m.begin();it!=m.end();it++)
    {
        div = it->second / 2;
        rest = it->second - div;
        sum = sum + ((div*(div-1)/2) + (rest*(rest-1)/2));
    }
    cout<<sum<<"\n";
    return 0;
}
