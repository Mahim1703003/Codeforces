#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,i,k=0,sum=0;
    cin>>n>>m;
    int a[n],b[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        if(a[i]<0)
        {
            b[k]=a[i];
            k++;
        }
    }
    sort(b,b+k);
    for(i=0;i<=k-1;i++)
    {
        if(i+1<=m)
            sum=sum+b[i];
    }
    sum=-sum;
    cout<<sum<<endl;
    return 0;
}
