#include<stdio.h>
int main()
{
    int n,i,k=0;
    long long int x;
    scanf("%d %lld",&n,&x);
    int a[n];
    char ch[n+2];
    for(i=0;i<=n-1;i++)
        scanf(" %c %d",&ch[i],&a[i]);
    for(i=0;i<=n-1;i++)
    {
        if(ch[i]=='+')
            x=x+a[i];
        else
        {
            if(x>=a[i])
                x=x-a[i];
            else
                k++;
        }
    }
    printf("%lld %d\n",x,k);
    return 0;
}
