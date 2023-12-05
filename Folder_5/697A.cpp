#include<iostream>
using namespace std;
int main()
{
    long long int t,s,x,a,i;
    cin>>t>>s>>x;
    if(t==x)
        cout<<"YES\n";
    else
    {
        for(i=1;i>=1;i++)
        {
            a=t+i*s;
            if(a==x||a+1==x)
            {
                cout<<"YES\n";
                break;
            }
            if(a>x)
            {
                cout<<"NO\n";
                break;
            }
        }
    }
    return 0;
}
