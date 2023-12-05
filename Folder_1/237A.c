#include<stdio.h>
int main()
{
    int n,i,k=1,l=0,temp;
    scanf("%d",&n);
    int h[n],m[n],a[n];
    for(i=0;i<=n-1;i++)
        scanf("%d %d",&h[i],&m[i]);
    for(i=0;i<=n-1;i++)
    {
        if((h[i]==h[i+1])&&(m[i]==m[i+1]))
            k++;
        else
        {
            a[l]=k;
            l++;
            k=1;
        }
    }
    for(i=1;i<=l-1;i++)
    {
        if(a[i]>a[0])
        {
            temp=a[0];
            a[0]=a[i];
            a[i]=temp;
        }
    }
    printf("%d\n",a[0]);
    return 0;
}

