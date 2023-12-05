#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <int> v;
    string s;
    int n,i,l,k=0;
    cin>>n>>s;
    s = " " + s;
    for(i=2;i<=n-1;i++)
    {
        if(s[i]!=s[i-1])
        {
            v.push_back(i);
            if(s[i]=='B')
                s[i] = 'W';
            else
                s[i] = 'B';
            if(s[i+1]=='B')
                s[i+1] = 'W';
            else
                s[i+1] = 'B';
        }
    }
    if(s[n]!=s[n-1])
    {
        if(n%2==0)
        {
            cout<<"-1\n";
            return 0;
        }
        else
        {
            for(i=n-2;i>=1;i=i-2)
                v.push_back(i);
        }
    }
    l = v.size();
    cout<<l<<"\n";
    for(i=0;i<=l-1;i++)
        cout<<v[i]<<" ";
    return 0;
}
