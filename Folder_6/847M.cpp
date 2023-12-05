#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,d,k=0;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        if(i==1)
            d = a[i] - a[i-1];
        else if(i>1)
        {
            if(a[i]-a[i-1]==d)
                k++;
        }
    }
    if(k==n-2)
        cout<<d+a[n-1]<<"\n";
    else
        cout<<a[n-1]<<"\n";
    return 0;
}
