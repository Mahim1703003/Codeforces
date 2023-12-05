#include<stdio.h>
int main()
{
    int n,m=0,k=0,i;
    scanf("%d",&n);
    char a[n+2];
    scanf(" %s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='0')
            m++;
        else
            k++;
    }
    if(m>k)
        printf("%d\n",m-k);
    else if(k>m)
        printf("%d\n",k-m);
    else
        printf("0\n");
    return 0;
}
