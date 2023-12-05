#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,l,r,k=0;
    cin>>n>>m;
    int a[m+1];
    for(i=0;i<=m;i++)
        a[i]=0;
    for(i=1;i<=n;i++)
    {
        cin>>l>>r;
        for(j=l;j<=r;j++)
            a[j]++;
    }
    for(i=1;i<=m;i++)
    {
        if(a[i]==0)
            k++;
    }
    cout<<k<<endl;
    for(i=1;i<=m;i++)
    {
        if(a[i]==0)
            cout<<i<<" ";
    }
    return 0;
}
