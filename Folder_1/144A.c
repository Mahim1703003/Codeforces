#include<stdio.h>
int main()
{
    int n,i,j,position1,position2,temp,total;
    scanf("%d",&n);
    int a[n],b[n],c[n];
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
        c[i]=a[i];
    }
    for(i=1;i<=n-1;i++)
    {
        if(a[i]<a[0])
        {
            temp=a[0];
            a[0]=a[i];
            a[i]=temp;
        }
    }
    for(i=0;i<=n-1;i++)
    {
        if(a[0]==c[i])
            position1=i;
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
    for(i=0;i<=n-1;i++)
    {
        if(b[0]==c[i])
        {
            position2=i;
            break;
        }
    }
    if(position1<position2)
        total=((n-1)-position1)+(position2-1);
    else
        total=((n-1)-position1)+position2;
    printf("%d\n",total);
    return 0;
}
