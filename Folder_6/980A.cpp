#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int i,np=0,nl=0;
    cin>>s;
    for(i=0;i<=s.size()-1;i++)
    {
        if(s[i]=='-')
            nl++;
        else
            np++;
    }
    if(np!=0)
    {
        if(nl%np==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    else
        cout<<"YES\n";
    return 0;
}
