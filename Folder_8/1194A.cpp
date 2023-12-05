#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        cout<<x*2<<"\n";
    }
    return 0;
}
