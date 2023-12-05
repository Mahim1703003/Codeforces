#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if((n/2)%2==1)
            cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            for(i=1;i<=n/2;i++)
                cout<<2*i<<" ";
            for(i=1;i<=n/2;i++)
            {
                if(i!=n/2)
                    cout<<2*i-1<<" ";
                else
                    cout<<2*i+(n/2-1)<<"\n";
            }
        }
    }
    return 0;
}
