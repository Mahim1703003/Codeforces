#include<stdio.h>
int main()
{
    int n,m,i,j,q,p=2,k=0;
    scanf("%d %d",&n,&m);
    int a[m];
    for(i=0;i<=m-1;i++)
        scanf("%d",&a[i]);
    if(a[0]==1)
        q=1;
    else
        q=0;
    for(i=q;i<=m-1;i++)
    {
        if(a[i]==a[i-1])
            continue;
        for(j=p;j<=n;j++)
        {
            if(a[i]==j)
            {
                k++;
                p=j+1;
                if(j==4)
                    p=1;
                break;
            }
            if(j==4)
                j=0;
            k++;
        }
    }
    printf("%d\n",k);
    return 0;
}
