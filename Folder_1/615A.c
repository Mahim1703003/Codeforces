#include<stdio.h>
int main()
{
    int a,n,m,i,j,k,l=0;
    scanf("%d %d",&n,&m);
    int b[m];
    for(i=0;i<=m-1;i++)
        b[i]=i+1;
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a);
        int c[a];
        for(j=0;j<=a-1;j++)
        {
            scanf("%d",&c[j]);
            for(k=0;k<=m-1;k++)
            {
                if(c[j]==b[k])
                    b[k]=-1;
            }
        }
    }
    for(i=0;i<=m-1;i++)
    {
        if(b[i]==-1)
            l++;
    }
    if(l==m)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
