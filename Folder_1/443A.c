#include<stdio.h>
int main()
{
    char a[1002];
    gets(a);
    int i,j,k=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            for(j=i+1;a[j]!='\0';j++)
            {
                if(a[i]==a[j])
                    a[j]='1';
            }
        }
    }
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a'&&a[i]<='z')
            k++;
    }
    printf("%d\n",k);
    return 0;
}
