#include<stdio.h>
int main()
{
    int n,i,even=0,odd=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }
    if(even==1)
    {
        for(i=0;i<=n-1;i++)
        {
            if(a[i]%2==0)
            {
                printf("%d\n",i+1);
                break;
            }
        }
    }
    else if(odd==1)
    {
        for(i=0;i<=n-1;i++)
        {
            if(a[i]%2==1)
            {
                printf("%d\n",i+1);
                break;
            }
        }
    }
    return 0;
}
