#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,mid;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    sort(a,a+n);
    mid=(n-1)/2;
    cout<<a[mid]<<endl;
    return 0;
}
