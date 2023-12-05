#include<stdio.h>
int main()
{
    int n,m,i,j,k=0;
    scanf("%d %d",&n,&m);
    char ch[n][m];
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=m-1;j++)
            scanf(" %c",&ch[i][j]);
    }
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=m-1;j++)
        {
            if(ch[i][j]=='B'||ch[i][j]=='W'||ch[i][j]=='G')
                k++;
        }
    }
    if(k==n*m)
        printf("#Black&White\n");
    else
        printf("#Color\n");
    return 0;
}
