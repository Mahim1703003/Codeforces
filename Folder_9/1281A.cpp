#include<iostream>
#include<string>
using namespace std;
int main()
{
    /*string s;
    s = "my_name_is_mahim_name";
    int d;
    d = s.find_last_of("_");
    cout<<d;*/
    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n = s.size();
        if(s[n-1]=='o')
            cout<<"FILIPINO\n";
        else if(s[n-1]=='u')
            cout<<"JAPANESE\n";
        else
            cout<<"KOREAN\n";
    }
    return 0;
}
