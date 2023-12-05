#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
    long long int sum = 0;
    int n,i,j,k;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0,j=n-1,k=1;k<=n/2;k++,i++,j--)
        sum = sum + (a[i]+a[j])*(a[i]+a[j]);
    cout<<sum<<endl;
    return 0;
}
