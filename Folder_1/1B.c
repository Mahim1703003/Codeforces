#include<stdio.h>
#include<string.h>

struct spreadsheet
{
    char a[1000000];
    int b;
};

int main()
{
    int n,i,m,j,k,sum1=0,sum2=0;
    scanf("%d",&n);
    struct spreadsheet ob[n];
    for(i=0;i<=n-1;i++)
    {
        scanf(" %s",ob[i].a);
        m=strlen(ob[i].a);
        for(j=m-1;j>=0;j++)
        {
            if(ob[i].a[j]>='A'&&ob[i].a[j]<='Z')
            {
                if(ob[i].a[j-1]>='1'&&ob[i].a[j-1]<='9')
                    ob[i].b=2;
                else
                    ob[i].b=1;
            }
        }
    }
    for(i=0;i<=n-1;i++)
    {
        if(ob[i].b==2)
        {
            for(j=1;ob[i].a[j]!='C';j++)
            {
                m=ob[i].a[j]-'0';
                sum1=sum1*10+m;
            }
            for(k=j+1;ob[i].a[k]!='\0';k++)
            {
                m=ob[i].a[k]-'0';
                sum2=sum2*10+m;
            }
        }
    }
}
