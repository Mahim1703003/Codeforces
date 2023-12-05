#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,n,x,sum=0,i,sign;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int a[n];
        for(i=0;i<=n-1;i++)
        {
            cin>>a[i];
            if(i==0)
                x = a[i];
            else
            {
                sign = x * a[i];
                if(sign>0)
                    x = max(x,a[i]);
                else
                {
                    sum = sum + x;
                    x = a[i];
                }
            }
        }
        sum = sum + x;
        cout<<sum<<"\n";
        sum = 0;
    }
    return 0;
}
