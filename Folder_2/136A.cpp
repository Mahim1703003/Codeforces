#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n],b[n+1];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        b[a[i]]=i+1;
    }
    for(i=1;i<=n;i++)
        cout<<b[i]<<" ";
    cout<<endl;
    return 0;
}
