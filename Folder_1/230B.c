#include<stdio.h>
int main()
{
    int n,i,j,k=2;
    scanf("%d",&n);
    long long int a[n];
    for(i=0;i<=n-1;i++)
        scanf("%lld",&a[i]);
    for(i=0;i<=n-1;i++)
    {
        for(j=2;j<=a[i]-1;j++)
        {
            if(a[i]%j==0)
                k++;
            if(k==4)
                break;
        }
        if(k==3)
            printf("YES\n");
        else
            printf("NO\n");
        k=2;
    }
    return 0;
}
