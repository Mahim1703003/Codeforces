#include<stdio.h>
int main()
{
    long long int n,m,i,q,k,sum=0;
    scanf("%lld %lld",&n,&m);
    int a[m+1];
    a[0]=1;
    for(i=1;i<=m;i++)
        scanf("%lld",&a[i]);
    for(i=1;i<=m;i++)
    {
        if(a[i]==a[i-1])
            continue;
        if(a[i]>a[i-1])
            k=a[i]-a[i-1];
        else if(a[i]<a[i-1])
            k=(n-a[i-1])+a[i];
        sum=sum+k;
    }
    printf("%lld\n",sum);
    return 0;
}

