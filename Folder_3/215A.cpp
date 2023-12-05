#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,k=0,max=0;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];

    cin>>m;
    int b[m];
    for(i=0;i<=m-1;i++)
        cin>>b[i];
    for(j=0;j<=m-1;j++)
    {
        for(i=0;i<=n-1;i++)
        {
            if(b[j]%a[i]==0)
            {
                if((b[j]/a[i])>max)
                    max = b[j] / a[i];
            }
        }
    }
    for(j=0;j<=m-1;j++)
    {
        for(i=0;i<=n-1;i++)
        {
            if(b[j]%a[i]==0)
            {
                if((b[j]/a[i])==max)
                    k++;
            }
        }
    }
    cout<<k<<endl;
    return 0;
}
