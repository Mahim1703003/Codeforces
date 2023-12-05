#include<stdio.h>
#include<string.h>
int main()
{
    int i,m=0,k=0,n,temp,b[102];
    char a[102];
    gets(a);
    n=strlen(a);
    for(i=0;i<=n;i++)
    {
        if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='Y'||a[i]=='\0')
        {
            k++;
            b[m]=k;
            m++;
            k=0;
        }
        else
            k++;
    }
    for(i=1;i<=m-1;i++)
    {
        if(b[i]>b[0])
        {
            temp=b[0];
            b[0]=b[i];
            b[i]=temp;
        }
    }
    printf("%d\n",b[0]);
    return 0;
}
