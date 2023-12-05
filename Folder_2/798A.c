#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k,c=0;
    char a[18];
    gets(a);
    n=strlen(a);
    for(i=0,j=n-1,k=1;k<=n/2;i++,j--,k++)
    {
        if(a[i]!=a[j])
            c++;
    }
    if(c==1)
        printf("YES\n");
    else if(c==0)
    {
        if(n%2==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    else
        printf("NO\n");
    return 0;
}
