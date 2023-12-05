#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k,ct=0,i;
    cin>>n>>k;
    n = 2*n + 1;
    int a[n+1];
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=2;i<=n;i=i+2)
    {
        if(a[i]-1>a[i-1]&&a[i]-1>a[i+1])
        {
            a[i]--;
            ct++;
        }
        if(ct==k)
            break;
    }
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    cout<<"\n";
    return 0;
}
