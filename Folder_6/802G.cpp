#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s="heidi",s1;
    int i,m=0;
    cin>>s1;
    for(i=0;i<=s1.size()-1;i++)
    {
        if(s[m]==s1[i])
            m++;
    }
    if(m==5)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
