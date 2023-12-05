#include<stdio.h>
int main()
{
    int n,i,j=1,k=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<=n-1;i++)
        scanf("%d %d",&a[i],&b[i]);
    for(i=1;i<=n-1;i++)
    {
            if((b[i]>b[0])&&(a[i]<a[0]))
            {
                k++;
                printf("Happy Alex\n");
                break;
            }
            else if((b[0]>b[i])&&(a[0]<a[i]))
            {
                k++;
                printf("Happy Alex\n");
                break;
            }
            else if((b[i-1]>b[i])&&(a[i-1]<a[i]))
            {
                k++;
                printf("Happy Alex\n");
                break;
            }
            else if((b[i]>b[i-1])&&(a[i]<a[i-1]))
            {
                k++;
                printf("Happy Alex\n");
                break;
            }
    }
    if(k==0)
        printf("Poor Alex\n");
    return 0;
}

