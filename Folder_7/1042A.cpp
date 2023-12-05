#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k,sum=0,i,mi,ma,div,rem;
    cin>>n>>k;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    sort(a,a+n);
    ma = a[n-1] + k;
    for(i=0;i<=n-2;i++)
        sum = sum + (a[n-1]-a[i]);
    if(k<=sum)
        mi = a[n-1];
    else
    {
        k = k - sum;
        div = ceil((k*1.0)/(n*1.0));
        mi = a[n-1] + div;
    }
    cout<<mi<<" "<<ma<<"\n";
    return 0;
}
