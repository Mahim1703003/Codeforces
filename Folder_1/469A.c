#include<stdio.h>
int main()
{
    int n,p,q,i,j,k=0;
    scanf("%d",&n);
    int c[n];
    for(i=0;i<=n-1;i++)
        c[i]=i+1;
    scanf("%d",&p);
    int a[p];
    for(i=0;i<=p-1;i++)
        scanf("%d",&a[i]);
    scanf("%d",&q);
    int b[q];
    for(i=0;i<=q-1;i++)
        scanf("%d",&b[i]);
    for(i=0;i<=p-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            if(a[i]==c[j])
            {
                c[j]=-1;
                break;
            }
        }
    }
    for(i=0;i<=q-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            if(b[i]==c[j])
            {
                c[j]=-1;
                break;
            }
        }
    }
    for(i=0;i<=n-1;i++)
    {
        if(c[i]==-1)
            k++;
    }
    if(k==n)
        printf("I become the guy.\n");
    else
        printf("Oh, my keyboard!\n");
    return 0;
}
