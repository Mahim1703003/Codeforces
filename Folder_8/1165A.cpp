#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    int n,i,x,y,k=0,ct=0;
    cin>>n>>x>>y>>s;
    for(i=n-1;i>=n-x;i--)
    {
        k++;
        if(k<=y)
        {
            if(s[i]!='0')
                ct++;
        }
        else if(k==y+1)
        {
            if(s[i]!='1')
                ct++;
        }
        else
        {
            if(s[i]!='0')
                ct++;
        }
    }
    cout<<ct<<"\n";
    return 0;
}
