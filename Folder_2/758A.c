#include<stdio.h>
int main()
{
    int n,m,i,j,sum=0,temp;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(i=1;i<=n-1;i++)
    {
        if(a[i]>a[0])
        {
            temp=a[0];
            a[0]=a[i];
            a[i]=temp;
        }
    }
    m=a[0];
    for(i=0;i<=n-1;i++)
        sum=sum+(m-b[i]);
    printf("%d\n",sum);
    return 0;
}
