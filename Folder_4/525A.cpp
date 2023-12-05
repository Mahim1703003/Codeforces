#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <char,int> m;
    string s;
    char ch;
    int n,i,k=0;
    cin>>n>>s;
    for(i=0;i<=s.size()-1;i=i+2)
    {
        if(s[i]-32!=s[i+1])
        {
            m[s[i]]++;
            ch = s[i+1] + 32;
            if(m[ch]!=0)
                m[ch]--;
            else
                k++;
        }
    }
    cout<<k<<"\n";
    return 0;
}
