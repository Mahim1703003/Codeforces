#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<=n-1;i++)
        scanf("%d",&a[i]);
    if(n==1)
    {
        if(a[0]==15)
            printf("DOWN\n");
        else if(a[0]==0)
            printf("UP\n");
        else
            printf("-1\n");
    }
    else
    {
        if(a[n-1]==15)
            printf("DOWN\n");
        else if(a[n-1]==0)
            printf("UP\n");
        else if(a[n-1]>a[n-2])
            printf("UP\n");
        else if(a[n-1]<a[n-2])
            printf("DOWN\n");
    }
    return 0;
}
