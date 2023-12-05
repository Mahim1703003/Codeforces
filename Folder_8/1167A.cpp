#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,n,i,p;
    string s;
    /*
    checking if a string exists in another string or not
    string s = "01776804777"
    if(s.find("2")==std::string::npos)
        cout<<"Not found\n";
    else
        cout<<s.find("2")<<endl;
    */
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        if(s.find("8")==std::string::npos)
            cout<<"NO\n";
        else
        {
            p = s.find_first_of("8");
            if(n-p>=11)
                cout<<"YES\n";
            else
                cout<<"No\n";
        }
    }
    return 0;
}
