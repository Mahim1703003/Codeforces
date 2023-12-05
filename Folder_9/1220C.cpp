#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    char min_char;
    int i;
    cin>>s;
    for(i=0;i<=s.size()-1;i++)
    {
        if(i==0)
        {
            min_char = s[i];
            cout<<"Mike\n";
        }
        else
        {
            if(min_char<s[i])
                cout<<"Ann\n";
            else
                cout<<"Mike\n";
            min_char = min(min_char,s[i]);
        }
    }
    return 0;
}
