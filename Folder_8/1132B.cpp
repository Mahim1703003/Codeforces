#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,i,x;
    long long sum = 0;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        sum = sum + a[i];
    }
    sort(a,a+n,greater<int>());
    cin>>m;
    for(i=1;i<=m;i++)
    {
        cin>>x;
        cout<<sum-a[x-1]<<endl;
    }
    return 0;
}
