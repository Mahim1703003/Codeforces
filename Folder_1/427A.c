#include<stdio.h>
int main()
{
    int n,i,sum1=0,sum2=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<=n-1;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=n-1;i++)
    {
        if(a[i]==-1)
        {
            if(sum2==0)
                sum1++;
            else
                sum2--;
        }
        else
            sum2=sum2+a[i];
    }
    printf("%d\n",sum1);
    return 0;
}
