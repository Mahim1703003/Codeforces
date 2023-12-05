#include<stdio.h>
int main()
{
    int a,b,x,mult=1,i;
    scanf("%d %d",&a,&b);
    x=(a<b)?a:b;
    for(i=1;i<=x;i++)
        mult=mult*i;
    printf("%d\n",mult);
    return 0;
}
