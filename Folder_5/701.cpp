#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,m,temp;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    for(i=0;i<=n-2;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0,j=n-1,k=1;k<=n/2;i++,j--,k++)
    {
        for(m=0;m<=n-1;m++)
        {
            if(a[i]==b[m])
            {
                b[m]=-1;
                cout<<m+1<<" ";
                break;
            }
        }
        for(m=0;m<=n-1;m++)
        {
            if(a[j]==b[m])
            {
                b[m]=-1;
                cout<<m+1<<endl;
                break;
            }
        }
    }
    return 0;
}
