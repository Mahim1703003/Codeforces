#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k,i,x,sum=0;
    cin>>n>>k;
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        if(i!=0)
        {
            if(a[i-1]+a[i]<k)
            {
                x = k-(a[i]+a[i-1]);
                sum = sum + x;
                a[i] = a[i] + x;
            }
        }
    }
    cout<<sum<<"\n";
    for(i=0;i<=n-1;i++)
        cout<<a[i]<<" ";
    cout<<"\n";
    return 0;
}
