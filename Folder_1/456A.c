#include<stdio.h>
int main()
{
    int n,i,j=1,k=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<=n-1;i++)
        scanf("%d %d",&a[i],&b[i]);
    for(i=0;i<=n-2;i++,j++)
    {
        if(j>n-1)
        {
            j=++i;
            continue;
        }
        else
        {
            if((b[i]>b[j])&&(a[i]<a[j]))
            {
                k++;
                printf("Happy Alex\n");
                break;
            }
            else if((b[j]>b[i])&&(a[j]<a[i]))
            {
                k++;
                printf("Happy Alex\n");
                break;
            }
            i--;
        }
    }
    if(k==0)
        printf("Poor Alex\n");
    return 0;
}
