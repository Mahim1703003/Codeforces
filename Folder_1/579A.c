#include<stdio.h>
int main()
{
    long long int i,n,mult=1;
    scanf("%lld",&n);
    for(i=1;i>=1;i++)
    {
        mult=mult*2;
        if(mult==n)
        {
            printf("1\n");
            break;
        }
        if(mult>n)
        {
            mult=1+(n-mult/2);
            printf("%lld\n",mult);
            break;
        }
    }
    return 0;
}
