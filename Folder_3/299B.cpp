#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    int n,k,i,ct=0,max=0;
    cin>>n>>k;
    cin>>s;
    for(i=0;i<=n-1;i++)
    {
        if(s[i]=='#')
            ct++;
        else
        {
            if(ct>max)
                max = ct;
            ct = 0;
        }
    }
    if(max<k)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
