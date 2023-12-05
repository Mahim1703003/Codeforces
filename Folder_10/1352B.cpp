#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,n,k,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(k>n)
            cout<<"NO\n";
        else
        {
            if((n-(k-1))%2==1)
            {
                cout<<"YES\n";
                for(i=1;i<=k-1;i++)
                    cout<<"1 ";
                cout<<n-(k-1)<<"\n";
            }
            else if((k*2<=n)&&((n-(k-1)*2)%2==0))
            {
                cout<<"YES\n";
                for(i=1;i<=k-1;i++)
                    cout<<"2 ";
                cout<<n-(k-1)*2<<"\n";
            }
            else
                cout<<"NO\n";
        }
    }
    return 0;
}
