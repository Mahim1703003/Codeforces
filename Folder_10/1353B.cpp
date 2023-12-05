#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,k,i,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int a[n],b[n];
        for(i=0;i<=n-1;i++)
        {
            cin>>a[i];
            sum = sum + a[i];
        }
        for(i=0;i<=n-1;i++)
            cin>>b[i];
        sort(a,a+n);
        sort(b,b+n,greater<int>());
        for(i=0;i<=k-1;i++)
        {
            if(b[i]>a[i])
            {
                sum = sum - a[i] + b[i];
                swap(a[i],b[i]);
            }
        }
        cout<<sum<<"\n";
        sum = 0;
    }
}
