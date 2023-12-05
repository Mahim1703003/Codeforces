#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,n,i,sum=0,sum1=0,sum2=0;
    bool result = true;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<=n-1;i++)
        {
            cin>>a[i];
            sum = sum + a[i];
        }
        sum2 = sum;
        for(i=0;i<=n-2;i++)
        {
            sum1 = sum1 + a[i];
            sum2 = sum2 - a[i];
            if(sum<=sum1||sum<=sum2)
            {
                result = false;
                break;
            }
        }
        if(result)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        result = true;
        sum = 0;
        sum1 = 0;
        sum2 = 0;
    }
    return 0;
}
