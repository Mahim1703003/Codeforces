#include<stdio.h>
int main()
{
    char a[202];
    gets(a);
    int i;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='W'&&a[i+1]=='U'&&a[i+2]=='B')
        {
            i=i+2;
            continue;
        }
        else
        {
            printf("%c",a[i]);
            if(a[i+1]=='W'&&a[i+2]=='U'&&a[i+3]=='B')
                printf(" ");
        }
    }
    return 0;
}
