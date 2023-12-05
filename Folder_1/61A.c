#include<stdio.h>
#include<string.h>
int main()
{
    char a[102],b[102];
    int i,n;
    gets(a);
    gets(b);
    n=strlen(a);
    int c[n];
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==b[i])
            c[i]=0;
        else
            c[i]=1;
    }
    for(i=0;i<=n-1;i++)
        printf("%d",c[i]);
    return 0;
}
