#include<stdio.h>
int main()
{
    int n,m,a,b,i,k=-1;
    scanf("%d %d",&n,&m);
    a=n;
    if(n%2==0)
        b=n/2;
    else
        b=(n/2)+1;
    for(i=b;i<=a;i++)
    {
        if(i%m==0)
        {
            k=i;
            break;
        }
    }
    printf("%d\n",k);
    return 0;
}
