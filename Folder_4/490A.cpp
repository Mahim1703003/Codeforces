#include<iostream>
using namespace std;
int main()
{
    int n1=0,n2=0,n3=0,n,i,j,x,y,k1=0,k2=0,k3=0;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        if(a[i]==1)
            n1++;
        else if(a[i]==2)
            n2++;
        else
            n3++;
    }
    x=(n1<n2)?n1:n2;
    y=(x<n3)?x:n3;
    cout<<y<<endl;
    for(i=1;i<=y;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            if(a[j]==-1)
                continue;
            else
            {
               if(a[j]==1&&k1==0)
               {
                   cout<<j+1<<" ";
                   k1++;
                   a[j]=-1;
               }
               else if(a[j]==2&&k2==0)
               {
                   cout<<j+1<<" ";
                   k2++;
                   a[j]=-1;
               }
               else if(a[j]==3&&k3==0)
               {
                   cout<<j+1<<" ";
                   k3++;
                   a[j]=-1;
               }
            }
        }
        cout<<endl;
        k1=0;
        k2=0;
        k3=0;
    }
    return 0;
}
