#include<stdio.h>
int main()
{
    int n,i,j,k=1,m=0,temp;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<=n-1;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=n-1;i++)
    {
        if(a[i]==-1)
            continue;
        for(j=i+1;j<=n-1;j++)
        {
            if(a[i]==a[j])
            {
                k++;
                a[j]=-1;
            }
        }
        b[m]=k;
        m++;
        k=1;
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
    printf("%d %d\n",b[0],m);
    return 0;
}
