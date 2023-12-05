#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    if(a+b<n)
        printf("%d\n",n-a);
    else if(a+b==n)
        printf("%d\n",b);
    else
        printf("1\n");
    return 0;
}
