#include<stdio.h>
int main()
{
    int k,i,c[26],d[26],n1=0,n2=0,ans;
    for(i=0;i<=25;i++)
    {
        c[i]=0;
        d[i]=0;
    }
    char a[100003],b[100003],j;
    scanf(" %[^\n]s",a);
    scanf(" %[^\n]s",b);
    for(i=0;a[i]!='\0';i++)
    {
        for(j='a',k=0;j<='z';j++,k++)
        {
            if(a[i]==j)
                c[k]++;
        }
    }
    for(i=0;b[i]!='\0';i++)
    {
        for(j='a',k=0;j<='z';j++,k++)
        {
            if(b[i]==j)
                d[k]++;
        }
    }
    for(i=0;i<=25;i++)
    {
        if(c[i]>=1&&d[i]==0)
            n1=n1+c[i];
    }
    for(i=0;i<=25;i++)
    {
        if(d[i]>=1&&c[i]==0)
            n2=n2+d[i];
    }
    ans=(n1>n2)?n1:n2;
    if(ans==0)
        printf("-1\n");
    else
        printf("%d\n",ans);
    return 0;
}
