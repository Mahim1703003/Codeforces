#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a,b;
    int n,i,ct=0;
    cin>>n>>a>>b;
    for(i=0;i<=n-1;i++)
    {
        if(a[i]!=b[i])
        {
            if(i+1<=n-1)
            {
                if(a[i+1]!=b[i+1])
                {
                    if(a[i]==b[i+1]&&b[i]==a[i+1])
                    {
                        ct++;
                        i++;
                    }
                    else
                        ct++;
                }
                else
                    ct++;
            }
            else
                ct++;
        }
    }
    cout<<ct<<"\n";
    return 0;
}
