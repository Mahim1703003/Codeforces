#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%4==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
