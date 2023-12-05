#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k,goodmin,goodmax;
    cin>>n>>k;
    if(k==0||k==n)
        goodmin = 0;
    else
        goodmin = 1;
    goodmax = min(k*2,n-k);
    cout<<goodmin<<" "<<goodmax<<"\n";
    return 0;
}
