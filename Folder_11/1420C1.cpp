#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,n,q,i,sum=0,k=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        int a[n];
        for(i=0;i<=n-1;i++)
            cin>>a[i];
        i = 0;
        while(1)
        {
            while(a[i]<a[i+1]&&i+1<=n-1)
                i++;
            sum = sum + a[i];
            if(i==n-1)
                break;
            while(a[i]>a[i+1]&&i+1<=n-1)
                i++;
            if(i==n-1)
                break;
            else
                sum = sum - a[i];
        }
        cout<<sum<<"\n";
        sum = 0;
    }
    return 0;
}
