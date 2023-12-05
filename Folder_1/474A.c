#include<stdio.h>
int main()
{
    int i,j;
    char ch;
    scanf("%c",&ch);
    char a[11]={'q','w','e','r','t','y','u','i','o','p','\0'},b[11]={'a','s','d','f','g','h','j','k','l',';','\0'},c[11]={'z','x','c','v','b','n','m',',','.','/','\0'},d[102];
    scanf(" %s",d);
    if(ch=='R')
    {
        for(i=0;d[i]!='\0';i++)
        {
            for(j=0;a[j]!='\0';j++)
            {
                if(d[i]==a[j]){
                    printf("%c",a[j-1]);
                    break;
                }
                else if(d[i]==b[j]){
                    printf("%c",b[j-1]);
                    break;
                }
                else if(d[i]==c[j]){
                    printf("%c",c[j-1]);
                    break;
                }
            }
        }
    }
    else
    {
        for(i=0;d[i]!='\0';i++)
        {
            for(j=0;a[j]!='\0';j++)
            {
                if(d[i]==a[j]){
                    printf("%c",a[j+1]);
                    break;
                }
                else if(d[i]==b[j]){
                    printf("%c",b[j+1]);
                    break;
                }
                else if(d[i]==c[j]){
                    printf("%c",c[j+1]);
                    break;
                }
            }
        }
    }
    return 0;
}
