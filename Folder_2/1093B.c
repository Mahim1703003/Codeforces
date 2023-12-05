#include<stdio.h>
#include<string.h>
int main()
{
    char a[1005],b[1005];
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf(" %[^\n]s",a);
        strcpy(b,a);
        strrev(b);
        if(strcmp(a,b)==0)
        {
            int j,n,k=0;
            n=strlen(a);
            for(j=0;j<=n-2;j++)
            {
                if(a[j]!=a[j+1])
                {
                    char temp;
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                    k++;
                    break;
                }
            }
            if(k!=0)
                printf("%s\n",a);
            else
                printf("-1\n");
            k=0;
        }
        else
            printf("%s\n",a);
    }
    return 0;
}

