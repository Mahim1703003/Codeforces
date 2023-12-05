#include<stdio.h>
int main()
{
    int a1,a2,a3,b1,b2,b3,sum1,sum2,a,b,n;
    scanf("%d %d %d",&a1,&a2,&a3);
    scanf("%d %d %d",&b1,&b2,&b3);
    scanf("%d",&n);
    sum1=a1+a2+a3;
    sum2=b1+b2+b3;
    a=sum1/5;
    if(sum1%5!=0)
        a++;
    b=sum2/10;
    if(sum2%10!=0)
        b++;
    if(a+b<=n)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
