#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n==1)
            cout<<"YES\n";
        else if(m==1)
            cout<<"YES\n";
        else
        {
            if(n==2&&m==2)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}
