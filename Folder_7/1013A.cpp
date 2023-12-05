#include<iostream>
using namespace std;
int main()
{
    int n,i,k=0,l=0;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    for(i=0;i<=n-1;i++)
        cin>>b[i];
    for(i=0;i<=n-1;i++)
    {
        if(b[i]>a[i])
            k = k + (b[i]-a[i]);
        else
            l = l + (a[i]-b[i]);
    }
    if(l>=k)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
