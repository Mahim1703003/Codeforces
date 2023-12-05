#include<iostream>
#include<cmath>
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
        n = ceil((n*1.0)/2.0);
        cout<<n<<"\n";
    }
    return 0;
}
