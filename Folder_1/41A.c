#include<stdio.h>
#include<string.h>
int main()
{
    char a[102],b[102];
    gets(a);
    gets(b);
    int n,m,i,j,k=0;
    n = strlen(a);
    m = strlen(b);
    if((n>=1&&n<=100)&&(m>=1&&m<=100)){
    if(n==m)
    {
        for(i=0,j=m-1;i<=n-1,j>=0;i++,j--)
        {
            if(a[i]==b[j])
                k++;
        }
        if(n==k)
            printf("YES\n");
        else
            printf("NO\n");
    }
    else
        printf("NO\n");
    }
    return 0;
}
