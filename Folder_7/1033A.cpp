#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,qr,qc,kr,kc,dr,dc;
    cin>>n>>qr>>qc>>kr>>kc>>dr>>dc;
    if((qr<kr&&qr>dr) || (qr<dr&&qr>kr) || (qc>kc&&qc<dc) || (qc>dc&&qc<kc))
        cout<<"NO\n";
    else
        cout<<"YES\n";
    return 0;
}
