#include<stdio.h>
int main()
{
    int n,i,m=0,k=1,temp;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<=n-1;i++)
        scanf("%d",&a[i]);
    if(n==1)
        printf("1\n");
    else{
    for(i=0;i<=n-2;i++)
    {
        if(a[i]<a[i+1])
        {
            k++;
            if(i==n-2)
            {
                b[m]=k;
                m++;
                k=1;
            }
        }
        else
        {
            b[m]=k;
            m++;
            k=1;
        }
    }
    for(i=1;i<=m-1;i++)
    {
        if(b[i]>b[0])
        {
            temp=b[0];
            b[0]=b[i];
            b[i]=temp;
        }
    }
    printf("%d\n",b[0]);
    }
    return 0;
}
