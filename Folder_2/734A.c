#include<stdio.h>
int main()
{
    int n,i,k=0,m=0;
    scanf("%d",&n);
    char a[n+2];
    scanf(" %[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='A')
            k++;
        else if(a[i]=='D')
            m++;
    }
    if(k>m)
        printf("Anton\n");
    else if(m>k)
        printf("Danik\n");
    else
        printf("Friendship\n");
    return 0;
}
