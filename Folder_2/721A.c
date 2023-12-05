#include<stdio.h>
int main()
{
    int n,i,j,m=0,k=0;
    scanf("%d",&n);
    int b[n];
    char a[n+2];
    scanf(" %[^\n]s",a);
    for(i=0;i<=n-1;i++)
    {
        if(a[i]=='B')
        {
            k++;
            for(j=i+1;j<=n-1;j++)
            {
                if(a[j]!='B')
                    break;
                else
                    k++;
            }
            b[m]=k;
            m++;
            k=0;
            i=j;
        }
    }
    printf("%d\n",m);
    for(i=0;i<=m-1;i++)
        printf("%d ",b[i]);
    return 0;
}
