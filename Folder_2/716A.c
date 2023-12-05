#include<stdio.h>
int main()
{
    int n,c,i,k=1;
    scanf("%d %d",&n,&c);
    int a[n];
    for(i=0;i<=n-1;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=n-1;i++)
    {
        if((a[i]-a[i-1])<=c)
            k++;
        else
            k=1;
    }
    printf("%d\n",k);
    return 0;
}
