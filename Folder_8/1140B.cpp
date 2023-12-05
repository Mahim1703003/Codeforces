#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    int t,n,in1,in2;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        if(s[0]=='>'||s[n-1]=='<')
            cout<<"0\n";
        else
        {
            in1 = s.find_first_of(">");
            in2 = s.find_last_of("<");
            cout<<min(in1,n-1-in2)<<"\n";
        }
    }
    return 0;
}
