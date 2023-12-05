#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    long long int n,m,k,sum=0,i;
    cin>>n>>m>>k;
    long long int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    sort(a,a+n,greater<int>());
    if(k==m)
        sum = k * a[0];
    else
    {
        long long int div,rem;
        div = m / (k+1);
        rem = m % (k+1);
        sum = k*a[0] + a[1];
        sum = div * sum;
        sum = sum + (rem*a[0]);
    }
    cout<<sum<<endl;
    return 0;
}
