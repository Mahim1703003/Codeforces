#include<stdio.h>
int main()
{
    int n,m,i,j,k=0,r=0,c=0;
    scanf("%d %d",&n,&m);
    char a[n][m];
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=m-1;j++)
            scanf(" %c",&a[i][j]);
    }
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=m-1;j++)
        {
            if(a[i][j]=='S')
                k++;
        }
        if(k==0)
            r++;
        else
            k=0;
    }
    for(j=0;j<=m-1;j++)
    {
        for(i=0;i<=n-1;i++)
        {
            if(a[i][j]=='S')
                k++;
        }
        if(k==0)
            c++;
        else
            k=0;
    }
    printf("%d\n",(r*m)+(c*n)-(r*c));
    return 0;
}
