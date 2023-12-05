#include<stdio.h>
int main()
{
    int n,i,j,temp;
    scanf("%d",&n);
    int a[n],b[n],c[n];
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(i=0;i<=n-2;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            if(a[j]>a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            if(a[i]==b[j])
            {
                c[j]=i+1;
                b[j]=-1;
            }
        }
    }
    for(i=0;i<=n-1;i++)
        printf("%d ",c[i]);
    return 0;
}
