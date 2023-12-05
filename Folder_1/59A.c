#include<stdio.h>
int main()
{
    char a[102];
    gets(a);
    int i,capital=0,small=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
            capital++;
        else if(a[i]>='a'&&a[i]<='z')
            small++;
    }
    if(capital>small)
    {
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]>='a'&&a[i]<='z')
                a[i]=a[i]-32;
        }
        printf("%s\n",a);
    }
    else if(small>=capital)
    {
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]>='A'&&a[i]<='Z')
                a[i]=a[i]+32;
        }
        printf("%s\n",a);
    }
    return 0;
}
