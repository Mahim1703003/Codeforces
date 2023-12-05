#include<stdio.h>
int main()
{
    int n,i,j,k=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<=n-1;i++)
        scanf("%d %d",&a[i],&b[i]);
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            if(i==j)
                continue;
            if(a[i]==b[j])
                k++;
        }
    }
    printf("%d\n",k);
    return 0;
}
