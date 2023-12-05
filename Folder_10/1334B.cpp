#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,i,x;
    long long int sum = 0;
    double avg;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        int a[n];
        for(i=0;i<=n-1;i++)
        {
            cin>>a[i];
            sum = sum + a[i];
        }
        sort(a,a+n);
        for(i=0;i<=n-1;i++)
        {
            avg = (sum*1.0) / (n*1.0-i*1.0);
            if(avg>=x)
                break;
            else
                sum = sum - a[i];
        }
        cout<<n-i<<"\n";
        sum = 0;
        /*
        alternative way
        for(i=0;i<=n-1;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n,greater<int>());
        for(i=0;i<=n-1;i++)
        {
            sum = sum + a[i];
            avg = (sum*1.0) / (i*1.0+1.0);
            if(avg<x)
                break;
        }
        cout<<i<<"\n";
        */
    }
}
