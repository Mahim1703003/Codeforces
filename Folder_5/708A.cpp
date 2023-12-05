#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    int i,ct=0;
    cin>>s;
    for(i=0;i<=s.size()-1;i++)
    {
        if(s[i]=='a')
        {
            if(ct==1)
                break;
        }
        else
        {
            ct = 1;
            s[i]--;
        }
    }
    if(ct==0)
    {
        i = s.size()-1;
        s[i] = 'z';
    }
    cout<<s<<"\n";
    return 0;
}
