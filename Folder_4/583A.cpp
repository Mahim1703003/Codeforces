#include<iostream>
using namespace std;
int main()
{
    int n,i,j,m=0,k=0;
    cin>>n;
    int a[n*n],b[n*n],c[n],d[n];
    for(i=0;i<=(n*n)-1;i++)
        cin>>a[i]>>b[i];
    cout<<"1 ";
    c[m]=a[m];
    d[m]=b[m];
    m++;
    for(i=1;i<=(n*n)-1;i++)
    {
        for(j=0;j<=m-1;j++)
        {
            if(a[i]!=c[j]&&b[i]!=d[j])
                k++;
        }
        if(k==m)
        {
            c[m]=a[i];
            d[m]=b[i];
            cout<<i+1<<" ";
            m++;
        }
        k=0;
    }
    return 0;
}
