#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int q,n,one_liter,two_liter,two_litre_price,ans,div,rem;
    cin>>q;
    while(q--)
    {
        cin>>n>>one_liter>>two_liter;
        two_litre_price = min(2*one_liter,two_liter);
        div = n / 2;
        rem = n % 2;
        ans = div * two_litre_price + rem * one_liter;
        cout<<ans<<"\n";
    }
    return 0;
}
