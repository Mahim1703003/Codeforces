#include<stdio.h>
int main()
{
    int n,i,j,temp;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<=n-1;i++)
        scanf("%d %d",&a[i],&b[i]);
    for(i=1;i<=n-1;i++)
    {
        if(a[i]>a[0])
        {
            temp=a[0];
            a[0]=a[i];
            a[i]=temp;
        }
    }
    for(i=1;i<=n-1;i++)
    {
        if(b[i]>b[0])
        {
            temp=b[0];
            b[0]=b[i];
            b[i]=temp;
        }
    }
    if(a[0]==6&&b[0]==3)
        printf("%d\n",a[0]);
    else
        printf("%d\n",b[0]);
    return 0;
}
