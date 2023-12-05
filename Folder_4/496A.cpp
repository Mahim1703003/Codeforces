#include<iostream>
using namespace std;
int main()
{
    int n,i,j,diff,ans,k=0,m=0;
    cin>>n;
    int a[n],b[n],c[n-2];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    for(i=1;i<=n-2;i++)
    {
        a[i]=b[i-1];
        for(j=1;j<=n-2;j++)
        {
            diff=a[j+1]-a[j];
            if(diff>k)
                k=diff;
        }
        c[m]=k;
        if(m==0)
            ans=c[m];
        else
        {
            if(c[m]<ans)
                ans=c[m];
        }
        m++;
        k=0;
    }
    cout<<ans<<endl;
    return 0;
}
