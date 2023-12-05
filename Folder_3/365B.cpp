#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,k=0,ma=0;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    if(n==1||n==2)
        cout<<n<<"\n";
    else
    {
        for(i=2;i<=n-1;i++)
        {
            if(a[i]==a[i-1]+a[i-2])
            {
                k++;
                if(i==n-1)
                {
                    if(k>ma)
                        ma = k;
                }
            }
            else
            {
                if(k>ma)
                    ma = k;
                k = 0;
            }
        }
        cout<<max(2,ma+2)<<"\n";
    }
    return 0;
}
