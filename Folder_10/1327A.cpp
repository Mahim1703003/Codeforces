#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(k*k>n)
            cout<<"NO\n";
        else
        {
            if(n%2==k%2)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}
