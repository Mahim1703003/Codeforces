#include<stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d %d %d %d",&n,&a,&b,&c);
    if(a+b+c==n)
        printf("3\n");
    else if(a+b==n||b+c==n||c+a==n)
        printf("2\n");
    else
        printf("1\n");
    return 0;
}
