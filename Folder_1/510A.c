#include<stdio.h>
int main()
{
    int n,m,i,j,k=0;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            for(j=1;j<=m;j++)
                printf("#");
            printf("\n");
        }
        else
        {
            k++;
            if(k%2==1)
            {
                for(j=1;j<=m;j++)
                {
                    if(j==m)
                        printf("#");
                    else
                        printf(".");
                }
                printf("\n");
            }
            else
            {
                for(j=1;j<=m;j++)
                {
                    if(j==1)
                        printf("#");
                    else
                        printf(".");
                }
                printf("\n");
            }
        }
    }
    return 0;
}
