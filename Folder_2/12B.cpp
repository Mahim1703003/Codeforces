#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s1,s2,s;
    int in;
    cin>>s1>>s2;
    if(s1!="0")
    {
        s = s1;
        sort(s.begin(),s.end());
        if(s[0]=='0')
        {
            in = s.find_first_of("123456789");
            swap(s[0],s[in]);
        }
    }
    else
        s = s1;
    if(s==s2)
        cout<<"OK\n";
    else
        cout<<"WRONG_ANSWER\n";
    return 0;
}
