#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,n,i,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<=n-1;i++)
            cin>>a[i];
        for(i=n-1;i>=1;i--)
        {
            if(a[i]<a[i-1])
                sum = sum + (a[i-1]-a[i]);
        }
        cout<<sum<<"\n";
        sum = 0;
    }
    return 0;
}

