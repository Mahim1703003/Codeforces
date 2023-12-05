#include<stdio.h>
int main()
{
    int n,h,i,sum=0;
    scanf("%d %d",&n,&h);
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<=h)
            sum=sum+1;
        else
            sum=sum+2;
    }
    printf("%d\n",sum);
    return 0;
}
