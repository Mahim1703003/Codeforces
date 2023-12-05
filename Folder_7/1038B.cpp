#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,even,odd;
    cin>>n;
    if(n==1 || n==2)
        cout<<"No\n";
    else
    {
        cout<<"Yes\n";

        even = n / 2;
        cout<<even<<" ";
        for(i=1;i<=even;i++)
            cout<<2*i<<" ";
        cout<<"\n";

        odd = (n%2==1)?n/2+1:n/2;
        cout<<odd<<" ";
        for(i=1;i<=odd;i++)
            cout<<2*i-1<<" ";
        cout<<"\n";
    }
    return 0;
}
