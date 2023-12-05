#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int i,a=0,o=0;
    cin>>s;
    for(i=0;i<=s.size()-1;i++)
    {
        if(s[i]=='a')
            a++;
        else
            o++;
    }
    if(a>o)
        cout<<s.size()<<endl;
    else
        cout<<a+(a-1)<<endl;
    return 0;
}
