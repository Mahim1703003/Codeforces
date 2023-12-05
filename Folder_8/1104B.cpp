#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    int n,i=0,ct=0;
    cin>>s;
    n = s.size();
    while(n)
    {
        if(i==n-1)
            break;
        if(s[i]==s[i+1])
        {
            ct++;
            s.erase(i,2);
            i--;
            if(i<0)
                i = 0;
            n = s.size();
        }
        else
            i++;
    }
    if(ct%2==1)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}
