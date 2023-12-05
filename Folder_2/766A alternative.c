#include<stdio.h>
#include<string.h>
int main()
{
    int n1,n2,ans;
    char a[100003],b[100003];
    scanf(" %[^\n]s",a);
    scanf(" %[^\n]s",b);
    if(strcmp(a,b)==0)
        printf("-1\n");
    else
    {
        n1=strlen(a);
        n2=strlen(b);
        ans=(n1>n2)?n1:n2;
        printf("%d\n",ans);
    }
    return 0;
}
