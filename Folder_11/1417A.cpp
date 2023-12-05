#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,k,i,sum=0,in,small;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int a[n];
        for(i=0;i<=n-1;i++)
        {
            cin>>a[i];
            if(i==0)
            {
                small = a[i];
                in = i;
            }
            else if(a[i]<small)
            {
                small = a[i];
                in = i;
            }
        }
        for(i=0;i<=n-1;i++)
        {
            if(i==in)
                continue;
            if(a[i]<=k)
                sum = sum + ((k-a[i])/small);
        }
        cout<<sum<<"\n";
        sum = 0;
    }
    return 0;
}
