#include<iostream>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <string,int> ma;
    string s;
    int n,m,i,first,second,common=0;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>s;
        ma[s]++;
    }
    for(i=1;i<=m;i++)
    {
        cin>>s;
        ma[s]++;
        if(ma[s]==2)
            common++;
    }
    first = n - common;
    second = m - common;
    if(common%2==1)
    {
        if(first>=second)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    else
    {
        if(second>=first)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
