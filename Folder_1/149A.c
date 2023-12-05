#include<stdio.h>
int main()
{
    int k,i,j,temp,sum=0,count=0;
    scanf("%d",&k);
    int a[12];
    for(i=0;i<=11;i++)
        scanf("%d",&a[i]);
    if(k==0)
        printf("0\n");
    else
    {
        for(i=0;i<=11;i++)
        {
            for(j=i+1;j<=11;j++)
            {
                if(a[j]>a[i])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        for(i=0;i<=11;i++)
        {
            sum=sum+a[i];
            if(sum>=k)
            {
                count++;
                printf("%d\n",++i);
                break;
            }
        }
        if(count==0)
            printf("-1\n");
    }
    return 0;
}
