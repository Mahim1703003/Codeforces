#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,n,k,i,j,m,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        long long int a[n],b[k];
        for(i=0;i<=n-1;i++)
            cin>>a[i];
        for(i=0;i<=k-1;i++)
        {
            cin>>b[i];
            b[i]--;
        }
        sort(a,a+n);
        sort(b,b+k);
        for(i=n-1;i>=n-k;i--)
        {
            sum = sum + a[i];
        }
        i++;
        m = n-1;
        for(j=0;j<=k-1;j++)
        {
            if(b[j]==0)
            {
                sum = sum + a[m];
                m--;
            }
            else
            {
                i = i - b[j];
                sum = sum + a[i];
            }
        }
        cout<<sum<<"\n";
        sum = 0;
    }
    return 0;
}
