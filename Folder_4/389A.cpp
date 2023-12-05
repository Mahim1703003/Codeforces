#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    sort(a,a+n);
    while(a[0]!=a[n-1])
    {
        for(i=n-2;i>=0;i--)
        {
            if(a[n-1]>a[i])
            {
                a[n-1] = a[n-1] - a[i];
                break;
            }
        }
        sort(a,a+n);
    }
    cout<<n*a[0]<<"\n";
    return 0;
}
