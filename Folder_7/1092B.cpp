#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,sum=0;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=1;i<=n;i=i+2)
        sum=sum+(a[i]-a[i-1]);
    cout<<sum<<endl;
    return 0;
}
