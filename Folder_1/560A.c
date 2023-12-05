#include<stdio.h>
int main()
{
    int n,i,k=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==1)
            k++;
    }
    if(k==0)
        printf("1\n");
    else
        printf("-1\n");
    return 0;
}
