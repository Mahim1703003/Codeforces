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
        if(n%2==1)
            cout<<n/2<<"\n";
        else
            cout<<(n/2)-1<<"\n";
    }
    return 0;
}
