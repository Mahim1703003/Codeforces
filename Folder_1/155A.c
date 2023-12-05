#include<stdio.h>
int main()
{
    int n,i,j,k=0,l=0,amazing=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<=n-1;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=n-1;i++)
    {
        for(j=i-1;j>=0;j--)
        {
            if(a[i]>a[j])
                k++;
            else
                break;
        }
        for(j=i-1;j>=0;j--)
        {
            if(a[i]<a[j])
                l++;
            else
                break;
        }
        if(k==i||l==i)
            amazing++;
        k=0;
        l=0;
    }
    printf("%d\n",amazing);
    return 0;
}
