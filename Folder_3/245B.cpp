#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s,rem,protocol,domain,context,ans;
    int in;
    cin>>s;
    if(s[0]=='h')
    {
        protocol = s.substr(0,4);
        rem = s.substr(4);
    }
    else
    {
        protocol = s.substr(0,3);
        rem = s.substr(3);
    }
    in = rem.rfind("ru");
    domain = rem.substr(0,in);
    context = rem.substr(in+2);
    if(context=="")
        ans = protocol + "://" + domain + ".ru";
    else
        ans = protocol + "://" + domain + ".ru/" + context;
    cout<<ans<<"\n";
    return 0;
}
