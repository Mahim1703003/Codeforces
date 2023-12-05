#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    int n,i;
    cin>>s;
    n = s.size();
    s = " " + s;
    for(i=1;i<=n;i++)
    {
        if(s[i]=='r')
            cout<<i<<"\n";
    }
    for(i=n;i>=1;i--)
    {
        if(s[i]=='l')
            cout<<i<<"\n";
    }
    return 0;
}
