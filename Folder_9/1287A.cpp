#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    int t,n,i,k=0,ct=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        while(1)
        {
            for(i=0;i<=n-2;i++)
            {
                if(s[i]=='A'&&s[i+1]=='P')
                {
                    k++;
                    s[i+1] = 'A';
                    i++;
                }
            }
            if(k!=0)
                ct++;
            else
                break;
            k = 0;
        }
        cout<<ct<<"\n";
        ct = 0;
    }
}
