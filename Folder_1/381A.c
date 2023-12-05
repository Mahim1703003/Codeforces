#include<stdio.h>
int main()
{
    int n,i,j,k,m=0,sum1=0,sum2=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<=n-1;i++)
        scanf("%d",&a[i]);
    for(i=0,j=n-1,k=1;k>=1;k++,i++,j--)
    {
        if(i==j)
            m=1;
        if(k%2==1)
        {
            if(a[i]>a[j])
            {
                sum1=sum1+a[i];
                j++;
            }
            else
            {
                sum1=sum1+a[j];
                i--;
            }
        }
        else
        {
            if(a[i]>a[j])
            {
                sum2=sum2+a[i];
                j++;
            }
            else
            {
                sum2=sum2+a[j];
                i--;
            }
        }
        if(m==1)
            break;
    }
    printf("%d %d\n",sum1,sum2);
    return 0;
}
