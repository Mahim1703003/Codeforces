#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,k,i,m=0,ct=0;
    cin>>n>>k;
    int a[n],b[k];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    for(i=0;i<=k-1;i++)
        cin>>b[i];
    sort(b,b+k,greater<int>());
    for(i=0;i<=n-1;i++)
    {
        if(a[i]==0)
        {
            a[i] = b[m];
            m++;
        }
    }
    for(i=0;i<=n-2;i++)
    {
        if(a[i]>a[i+1])
        {
            ct++;
            break;
        }
    }
    if(ct!=0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
