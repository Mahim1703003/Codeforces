#include<stdio.h>
#include<string.h>

struct word
{
    char name[50];
};
int main()
{
    int i,n,l;
    scanf("%d",&n);
    struct word a[n];
    for(i=0;i<=n-1;i++)
    {
        scanf(" %s",a[i].name);
        l=strlen(a[i].name);
        if((a[i].name[l-2]=='c'&&a[i].name[l-1]=='h')||(a[i].name[l-1]=='x')||(a[i].name[l-1]=='s')||(a[i].name[l-1]=='o'))
        {
            a[i].name[l]='e';
            a[i].name[l+1]='s';
            a[i].name[l+2]='\0';
        }
        else if((a[i].name[l-1]=='f')||(a[i].name[l-2]=='f'&&a[i].name[l-1]=='e'))
        {
            if(a[i].name[l-2]=='f'&&a[i].name[l-1]=='e')
            {
                a[i].name[l-2]='v';
                a[i].name[l-1]='e';
                a[i].name[l]='s';
                a[i].name[l+1]='\0';
            }
            else
            {
                a[i].name[l-1]='v';
                a[i].name[l]='e';
                a[i].name[l+1]='s';
                a[i].name[l+2]='\0';
            }
        }
        else if(a[i].name[l-1]=='y')
        {
            a[i].name[l-1]='i';
            a[i].name[l]='e';
            a[i].name[l+1]='s';
            a[i].name[l+2]='\0';
        }
        else
        {
            a[i].name[l]='s';
            a[i].name[l+1]='\0';
        }
    }
    for(i=0;i<=n-1;i++)
        printf("%s\n",a[i].name);
    return 0;
}
