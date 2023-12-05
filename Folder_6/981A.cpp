#include<iostream>
#include<string>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <char,int> m;
    string s,rs;
    int i;
    cin>>s;
    rs = s;
    for(i=0;i<=s.size()-1;i++)
        m[s[i]]++;
    reverse(rs.begin(),rs.end());
    if(s!=rs)
        cout<<s.size()<<"\n";
    else
    {
        if(m.size()==1)
            cout<<"0\n";
        else
            cout<<s.size()-1<<"\n";
    }
    return 0;
}
