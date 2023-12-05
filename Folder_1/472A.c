#include<stdio.h>
int main()
{
    long long int n,i,j,p,q,k=0;
    scanf("%lld",&n);
    long long int a[n];
    for(i=4;i<=n;i++)
    {
        if(i==5)
            continue;
        if(i%2==0||i%3==0||i%5==0)
        {
            a[k]=i;
            k++;
        }
    }
    for(i=0,j=i+1;i<=k-2,j<=k-1;j++)
    {
        if(a[i]+a[j]==n)
        {
            p=a[i];
            q=a[j];
            break;
        }
        if(j==k-1)
        {
            i++;
            j=i;
        }
    }
    printf("%lld %lld\n",p,q);
    return 0;
}
