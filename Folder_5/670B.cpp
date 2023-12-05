#include<iostream>
#define lli long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli n,k,i,sum=0;
    cin>>n>>k;
    lli a[n+1];
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n;i++)
    {
        sum = sum + i;
        if(sum>=k)
        {
            sum = sum - i;
            cout<<a[k-sum]<<"\n";
            break;
        }
    }
    return 0;
}
