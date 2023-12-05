#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,k,i;
    cin>>n>>k;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    if(k>n)
        cout<<"-1\n";
    else
    {
        sort(a,a+n,greater<int>());
        cout<<a[k-1]<<" 0\n";
    }
    return 0;
}
