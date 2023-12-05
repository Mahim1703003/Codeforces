#include<iostream>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ///map <long long int,long long int> m;
    long long int a,b,c,n,ct=0;
    cin>>n;
    for(a=1;a<=n;a++)
    {
        for(b=a;b<=n;b++)
        {
            c = a ^ b;
            if(c>=b&&c<=n)
            {
                if(a+b>c)
                    ct++;
            }
        }
    }
    cout<<ct<<"\n";
    return 0;
}
