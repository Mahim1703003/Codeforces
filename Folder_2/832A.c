#include<stdio.h>
int main()
{
    long long int n,k,a;
    scanf("%lld %lld",&n,&k);
    a=n/k;
    if(a%2==1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
