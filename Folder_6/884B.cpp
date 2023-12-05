#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,x,i,num,sum=0;
    cin>>n>>x;
    for(i=1;i<=n;i++)
    {
        cin>>num;
        sum = sum + num;
    }
    if(sum+(n-1)==x)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
