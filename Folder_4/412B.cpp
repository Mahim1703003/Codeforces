#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k,i;
    cin>>n>>k;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    sort(a,a+n,greater<int>());
    cout<<a[k-1]<<"\n";
    return 0;
}
