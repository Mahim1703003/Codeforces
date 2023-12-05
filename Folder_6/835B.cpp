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
    long long int k,i,x,ct=0,sum=0;
    cin>>k>>s;
    for(i=0;i<=s.size()-1;i++)
    {
        x = s[i] - '0';
        sum = sum + x;
    }
    if(sum>=k)
        cout<<"0\n";
    else
    {
        sort(s.begin(),s.end());
        for(i=0;i<=s.size()-1;i++)
        {
            x = s[i] - '0';
            if(x<9)
            {
                ct++;
                sum = sum + (9-x);
                if(sum>=k)
                    break;
            }
        }
        cout<<ct<<"\n";
    }
    return 0;
}
