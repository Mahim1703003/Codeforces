#include<iostream>
#include<map>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <char,int> m1;
    map <char,int> m2;
    string s,s1;
    int n,k=0;
    cin>>s;
    cin>>n;
    while(n--)
    {
        cin>>s1;
        if(s1==s)
            k++;
        m1[s1[0]]++;
        m2[s1[1]]++;
    }
    if(k!=0)
        cout<<"YES\n";
    else
    {
        if(m2[s[0]]!=0 && m1[s[1]]!=0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}

