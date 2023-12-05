#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s = "0000000000";
    int n,i,p;
    char ch;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>ch;
        if(ch=='L')
        {
            p = s.find_first_of("0");
            s[p] = '1';
        }
        else if(ch=='R')
        {
            p = s.find_last_of("0");
            s[p] = '1';
        }
        else
        {
            p = ch - '0';
            s[p] = '0';
        }
    }
    cout<<s<<endl;
    return 0;
}
