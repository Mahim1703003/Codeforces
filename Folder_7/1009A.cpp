#include<iostream>
using namespace std;

int main()
{
    int n,m,i,j,k=0;
    cin>>n>>m;
    int a[n],b[m];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    for(j=0;j<=m-1;j++)
        cin>>b[j];
    for(i=0,j=0;i<=n-1&&j<=m-1;i++)
    {
        if(b[j]>=a[i])
        {
            k++;
            j++;
        }
    }
    cout<<k<<endl;
    return 0;
}
