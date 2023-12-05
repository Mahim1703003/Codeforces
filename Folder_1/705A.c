#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==n)
        {
            if(n%2==1)
                printf("I hate it");
            else
                printf("I love it");
            break;
        }
        if(i%2==1)
            printf("I hate that ");
        else
            printf("I love that ");
    }
    return 0;
}
