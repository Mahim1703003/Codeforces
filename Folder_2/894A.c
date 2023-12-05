#include<stdio.h>
int main()
{
    int i,j,k,counter=0;
    char a[103];
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='Q')
        {
            for(j=i+1;a[j]!='\0';j++)
            {
                if(a[j]=='A')
                {
                    for(k=j+1;a[k]!='\0';k++)
                    {
                        if(a[k]=='Q')
                            counter++;
                    }
                }
            }
        }
    }
    printf("%d\n",counter);
    return 0;
}
