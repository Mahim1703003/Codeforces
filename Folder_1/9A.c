#include<stdio.h>
int main()
{
    int a,b,x,c,i,gcd;
    scanf("%d %d",&a,&b);
    x=(a>b)?a:b;
    c=6-x+1;
    for(i=1;i<=c&&i<=6;i++)
    {
        if(c%i==0&&6%i==0)
            gcd=i;
    }
    printf("%d/%d\n",c/gcd,6/gcd);
    return 0;
}
