#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,zero,one,i;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        zero = count(s.begin(),s.end(),'0');
        one = count(s.begin(),s.end(),'1');
        if(zero==s.size() || one==s.size())
            cout<<s<<"\n";
        else
        {
            string str;
            for(i=1;i<=s.size()*2;i++)
            {
                if(i%2==1)
                    str.push_back('0');
                else
                    str.push_back('1');
            }
            cout<<str<<"\n";
        }
    }
    return 0;
}
