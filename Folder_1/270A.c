#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<=n-1;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=n-1;i++)
    {
        if(360%(180-a[i])==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
