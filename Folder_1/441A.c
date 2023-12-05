#include<stdio.h>
int main()
{
    int n,k,m=0,d=0,i,j,c;
    scanf("%d %d",&n,&k);
    int b[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&c);
        int a[c];
        for(j=0;j<=c-1;j++)
        {
            scanf("%d",&a[j]);
            if(d!=0)
                continue;
            if(k>a[j])
            {
                b[m]=i;
                m++;
                d++;
            }
        }
        d=0;
    }
    printf("%d\n",m);
    for(i=0;i<=m-1;i++)
        printf("%d ",b[i]);
    return 0;
}
