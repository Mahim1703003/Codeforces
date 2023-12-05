#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char a[15];
    gets(a);
    n=strlen(a);
    if(a[n-1]=='k')
    {
        if(a[0]=='5'||a[0]=='6')
            printf("53\n");
        else
            printf("52\n");
    }
    else
    {
        if(a[0]=='3'&&a[1]=='0')
            printf("11\n");
        else if(a[0]=='3'&&a[1]=='1')
            printf("7\n");
        else
            printf("12\n");
    }
    return 0;
}
