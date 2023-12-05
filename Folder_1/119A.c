#include<stdio.h>
int main()
{
    int a,b,n,i,j,gcd,c=2;
    scanf("%d %d %d",&a,&b,&n);
    for(i=1;i>=0;i++)
    {
        if(i%2==1)
        {
            for(j=1;j<=a&&j<=n;j++)
            {
                if(a%j==0&&n%j==0)
                    gcd=j;
            }
            n=n-gcd;
            if(n==0)
                c=0;
        }
        else
        {
            for(j=1;j<=b&&j<=n;j++)
            {
                if(b%j==0&&n%j==0)
                    gcd=j;
            }
            n=n-gcd;
            if(n==0)
                c=1;
        }
        if(c==0)
        {
            printf("%d\n",c);
            break;
        }
        else if(c==1)
        {
            printf("%d\n",c);
            break;
        }
    }
    return 0;
}
