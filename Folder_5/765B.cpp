#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <char,int> m;
    string s;
    char ch = 'a';
    int i,k=0;
    cin>>s;
    for(i=0;i<=s.size()-1;i++)
    {
        m[s[i]]++;
        if(m[s[i]]==1)
        {
            if(s[i]==ch)
                k++;
            ch++;
        }
    }
    if(m.size()==k)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
