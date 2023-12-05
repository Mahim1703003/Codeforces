#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,ans;
    cin>>n;
    ans = n - 3 + 1;
    ans = ans * ans;
    cout<<ans<<"\n";
    return 0;
}
