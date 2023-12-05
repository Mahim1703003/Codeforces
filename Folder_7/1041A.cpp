#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,k,sum=0;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=1;i<=n-1;i++)
    {
        if(a[i]!=a[i-1]+1)
        {
            k=a[i]-a[i-1]-1;
            sum=sum+k;
        }
    }
    cout<<sum<<endl;
    return 0;
}
