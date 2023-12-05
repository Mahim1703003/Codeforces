#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            a[i]--;
    }
    for(i=0;i<=n-1;i++)
        cout<<a[i]<<" ";
    return 0;
}
