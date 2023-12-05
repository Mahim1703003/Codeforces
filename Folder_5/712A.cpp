#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    b[n-1] = a[n-1];
    for(i=n-2;i>=0;i--)
        b[i] = a[i] + a[i+1];
    for(i=0;i<=n-1;i++)
        cout<<b[i]<<" ";
    cout<<endl;
    return 0;
}
