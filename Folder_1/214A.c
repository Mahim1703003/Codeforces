#include<stdio.h>
int main()
{
    int n,m,i,j,k=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=m;j++)
        {
            if((i*i+j==n)&&(i+j*j==m))
                k++;
        }
    }
    printf("%d\n",k);
    return 0;
}
