#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,i,x,odd=0,rest;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>x;
            if(x%2==1)
                odd++;
        }
        rest = n - odd;
        if(odd!=0)
        {
            if(odd%2==1)
                cout<<"YES\n";
            else
            {
                if(rest!=0)
                    cout<<"YES\n";
                else
                    cout<<"NO\n";
            }
        }
        else
            cout<<"NO\n";
        odd = 0;
    }
    return 0;
}
