#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    int n,i,ct=0;
    cin>>n>>s;
    s = " " + s;
    for(i=1;i<=n-10;i++)
    {
        if(s[i]=='8')
            ct++;
    }
    if(ct>(n-11)/2)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
