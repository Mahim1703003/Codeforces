#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,sum=0,i;
    cin>>n;
    long long int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    for(i=n-1;i>=0;i--)
    {
        if(i==n-1)
            sum = sum + a[i];
        else
        {
            if(a[i+1]!=0)
                a[i] = min(a[i],a[i+1]-1);
            else
                a[i] = 0;
            sum = sum + a[i];
        }
    }
    cout<<sum<<"\n";
    return 0;
}
