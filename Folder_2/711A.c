#include<stdio.h>
int main()
{
    int n,i,j,k=0;
    scanf("%d",&n);
    char a[n][5];
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=4;j++)
            scanf(" %c",&a[i][j]);
    }
    for(i=0;i<=n-1;i++)
    {
        if(a[i][0]=='O'&&a[i][1]=='O')
        {
            k++;
            a[i][0]='+';
            a[i][1]='+';
            printf("YES\n");
            for(i=0;i<=n-1;i++)
            {
                for(j=0;j<=4;j++)
                    printf("%c",a[i][j]);
                printf("\n");
            }
            break;
        }
        else if(a[i][3]=='O'&&a[i][4]=='O')
        {
            k++;
            a[i][3]='+';
            a[i][4]='+';
            printf("YES\n");
            for(i=0;i<=n-1;i++)
            {
                for(j=0;j<=4;j++)
                    printf("%c",a[i][j]);
                printf("\n");
            }
            break;
        }
    }
    if(k==0)
        printf("NO\n");
    return 0;
}
