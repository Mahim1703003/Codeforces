#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int q,n,s,t,minimum;
    cin>>q;
    while(q--)
    {
        cin>>n>>s>>t;
        minimum = min(s,t);
        cout<<n-minimum+1<<"\n";
    }
    return 0;
}
