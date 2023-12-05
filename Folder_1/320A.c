#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,k=0,l;
    scanf("%d",&n);
    char a[100000000];
    sprintf(a,"%d",n);
    gets(a);
    l=strlen(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='1'&&a[i+1]=='4'&&a[i+2]=='4')
        {
            k=k+3;
            i=i+2;
        }
        else if(a[i]=='1'&&a[i+1]=='4')
        {
            k=k+2;
            i=i+1;
        }
        else if(a[i]=='1')
            k=k+1;
    }
    if(l==k)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
