#include<stdio.h>
int main()
{
    long long int a,b,sum=0;
    scanf("%lld %lld",&a,&b);
    while(a>0&&b>0)
    {
        if(a>=b)
        {
            sum=sum+a/b;
            a=a%b;
        }
        else
        {
            sum=sum+b/a;
            b=b%a;
        }
    }
    printf("%lld\n",sum);
    return 0;
}
