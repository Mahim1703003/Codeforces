#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,x,y,n,div,number,ans;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>n;
        div = n / x;
        number = div * x;
        if(number+y<=n)
        {
            ans = number + y;
            cout<<ans<<"\n";
        }
        else
        {
            ans = number - (x-y);
            cout<<ans<<"\n";
        }
    }
    return 0;
}
