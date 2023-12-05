#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,odd=0,even=0;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }
    if(even==n||odd==n)
    {
        for(i=0;i<=n-1;i++)
            cout<<a[i]<<" ";
        cout<<"\n";
    }
    else
    {
        sort(a,a+n);
        for(i=0;i<=n-1;i++)
            cout<<a[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
