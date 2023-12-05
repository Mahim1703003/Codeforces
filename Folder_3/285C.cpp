#include<iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;
int main()
{
    long long int n,i,sum=0;
    cin>>n;
    long long int a[n],b[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        b[i]=i+1;
    }
    sort(a,a+n);
    for(i=0;i<=n-1;i++)
        sum=sum+abs(a[i]-b[i]);
    cout<<sum<<endl;
    return 0;
}
