#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,k=0;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    sort(a,a+n,greater<int>());
    for(i=0;i<=n-3;i++)
    {
        if((a[i]+a[i+1]>a[i+2])&&(a[i]+a[i+2]>a[i+1])&&(a[i+2]+a[i+1]>a[i]))
        {
            k++;
            break;
        }
    }
    if(k==1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
