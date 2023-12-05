#include<stdio.h>
int main()
{
    int n,i,j=0,sum;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<=n-1;i++)
        scanf("%d %d",&a[i],&b[i]);
    sum=b[j]*a[j];
    for(i=1;i<=n-1;i++)
    {
        if(b[j]<=b[i])
            sum=sum+b[j]*a[i];
        else
        {
            sum=sum+b[i]*a[i];
            j=i;
        }
    }
    printf("%d\n",sum);
    return 0;
}
