#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <string,int> m;
    string s;
    char ch;
    int len,i;
    cin>>s;
    len = s.size();
    m[s]++;
    for(i=1;i<=len;i++)
    {
        ch = s[len-1];
        s.erase(len-1);
        s = ch + s;
        m[s]++;
    }
    cout<<m.size()<<"\n";
    return 0;
}
