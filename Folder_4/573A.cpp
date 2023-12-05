#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,k=0,m;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0;i<=n-2;i++)
    {
        if(a[n-1]%a[i]==0)
        {
            k++;
        }
    }
    if(k==n-1)
        cout<<"YES\n";
    else
        cout<"NO\n";
    return 0;
}
