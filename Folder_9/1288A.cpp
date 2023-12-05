#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    long long int p1,p2,n,d;
    cin>>t;
    while(t--)
    {
        cin>>n>>d;
        p1 = (1-n) * (1-n);
        p2 = 4 * (d-n);
        if(p1>=p2)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
