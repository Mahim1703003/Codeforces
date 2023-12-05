#include<stdio.h>
#include<string.h>
int main()
{
    char a[300],b[102],c[300],temp;
    gets(a);
    gets(b);
    gets(c);
    strcat(a,b);
    int i,j;
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;c[i]!='\0';i++)
    {
        for(j=i+1;c[j]!='\0';j++)
        {
            if(c[j]<c[i])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    if(strcmp(a,c)==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
