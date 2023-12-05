#include<stdio.h>
int main()
{
    int n,t,i;
    scanf("%d %d",&n,&t);
    if(t>=1&&t<=9)
    {
        for(i=1;i<=n;i++)
            printf("%d",t);
    }
    else
    {
        if(n==1)
            printf("-1");
        else
        {
            printf("10");
            for(i=1;i<=n-2;i++)
                printf("0");
        }
    }
    return 0;
}
