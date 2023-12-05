#include<stdio.h>
#include<string.h>
int main()
{
    char a[102],j;
    gets(a);
    int n,i,k,m=1,e,d,x,y,sum=0;
    n=strlen(a);
    int b[n+1];
    b[0]=1;
    for(i=0;a[i]!='\0';i++)
    {
        for(j='a',k=1;j<='z';j++,k++)
        {
            if(a[i]==j)
            {
                b[m]=k;
                m++;
            }
        }
    }
    for(i=0;i<=n-1;i++)
    {
        x=(b[i]>b[i+1])?b[i]:b[i+1];
        y=(b[i]<b[i+1])?b[i]:b[i+1];
        d=x-y;
        e=(26-x)+y;
        if(d<=e)
            sum=sum+d;
        else
            sum=sum+e;
    }
    printf("%d\n",sum);
    return 0;
}
