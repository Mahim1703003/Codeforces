#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,i,d;
    cin>>t;
    while(t--)
    {
        cin>>n;
        d = ceil((n*1.0)/4.0);
        for(i=1;i<=n-d;i++)
            cout<<"9";
        for(i=1;i<=d;i++)
            cout<<"8";
        cout<<"\n";
    }
    return 0;
}
