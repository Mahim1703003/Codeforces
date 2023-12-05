#include<stdio.h>
int main()
{
    int n,i,k=0;
    scanf("%d",&n);
    char a[n+2],j;
    scanf(" %[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
            a[i]=a[i]+32;
    }
    for(j='a';j<='z';j++)
    {
        for(i=0;a[i]!='\0';i++)
        {
            if(j==a[i])
            {
                k++;
                break;
            }
        }
    }
    if(k==26)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
