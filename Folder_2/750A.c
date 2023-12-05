#include<stdio.h>
int main()
{
    int n,k,i,time,sum=0;
    scanf("%d %d",&n,&k);
    time=240-k;
    for(i=1;i<=n;i++)
    {
        sum=sum+5*i;
        if(sum>time)
        {
            i--;
            break;
        }
    }
    if(i==n+1)
        i--;
    printf("%d\n",i);
    return 0;
}
