#include<stdio.h>
int main()
{
    char r,s;
    char a[50];
    scanf(" %c %c",&r,&s);
    //fflush(stdin);
    scanf(" %[^\n]s",a);
    int i,k=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
            continue;
        else
        {
            if((r==a[i])||(s==a[i+1]))
            {
                k++;
                break;
            }
            else
                i=i+1;
        }
    }
    if(k!=0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}


