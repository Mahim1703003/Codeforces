#include<iostream>
using namespace std;
int main()//comment
{
    int n,i,k=0,m=0;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        if(a[i]==1)
            k++;
    }
    int b[k];
    b[k-1]=a[n-1];
    for(i=1;i<=n-1;i++)
    {
        if(a[i]==1)
        {
            b[m]=a[i-1];
            m++;
        }
    }
    cout<<k<<endl;
    for(i=0;i<=k-1;i++)
        cout<<b[i]<<" ";
    return 0;
}
