#include<stdio.h>
int main()
{
    int n,i,div,a=2,b=3;
    scanf("%d",&n);
    if(n%2==0)
    {
        div=n/2;
        printf("%d\n",div);
        for(i=1;i<=div;i++){
            if(i==div)
                printf("%d",a);
            else
                printf("%d ",a);
        }
    }
    else
    {
        n=n-3;
        div=n/2;
        printf("%d\n",div+1);
        for(i=1;i<=div;i++)
            printf("%d ",a);
        printf("%d",b);
    }
    return 0;
}
