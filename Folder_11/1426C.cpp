#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,n,sum=2,i,ct=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
            cout<<"0\n";
        else if(n==2)
            cout<<"1\n";
        else
        {
            for(i=2;;i++)
            {
                ct = ct + 2;
                sum = sum + 2*i;
                if(sum>=n)
                    break;
            }
            if(sum-i>=n)
                ct--;
            cout<<ct<<"\n";
            sum = 2;
            ct = 1;
        }
    }
    return 0;
}
