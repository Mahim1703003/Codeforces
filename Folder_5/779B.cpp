#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    int k,zero,i,ct=0,digit=0;
    cin>>s>>k;
    zero = count(s.begin(),s.end(),'0');
    if(zero<k)
        cout<<s.size()-1<<"\n";
    else
    {
        for(i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='0')
            {
                ct++;
                if(ct==k)
                    break;
            }
            else
                digit++;
        }
        cout<<digit<<"\n";
    }
    return 0;
}
