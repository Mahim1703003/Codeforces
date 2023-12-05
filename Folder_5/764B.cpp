#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    for(i=0,j=n-1;i<j;i=i+2,j=j-2)
        swap(a[i],a[j]);
    for(i=0;i<=n-1;i++)
        cout<<a[i]<<" ";
    return 0;
}
