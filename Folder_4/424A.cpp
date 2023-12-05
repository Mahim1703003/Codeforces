#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    int n,stnd,sit,i;
    cin>>n>>s;
    stnd = count(s.begin(),s.end(),'X');
    sit = count(s.begin(),s.end(),'x');
    if(stnd>sit)
    {
        cout<<stnd-n/2<<"\n";
        for(i=0;i<=n-1;i++)
        {
            if(s[i]=='X')
            {
                s[i] = 'x';
                stnd--;
                if(stnd==n/2)
                    break;
            }
        }
        cout<<s<<"\n";
    }
    else if(sit>stnd)
    {
        cout<<sit-n/2<<"\n";
        for(i=0;i<=n-1;i++)
        {
            if(s[i]=='x')
            {
                s[i] = 'X';
                sit--;
                if(sit==n/2)
                    break;
            }
        }
        cout<<s<<"\n";
    }
    else
        cout<<"0\n"<<s<<"\n";
    return 0;
}
