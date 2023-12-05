#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    int i,j=0,k=0,temp;;
    for(i=0;i<=n-1;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=n-2;i++)
    {
        if(a[i]<=a[i+1])
            j++;
        else
            if(j>0)
            {
                b[k]=j+1;
                k++;
                j=0;
            }

    }
    b[k]=j+1;
    for(i=1;i<=k;i++)
    {
        if(b[i]>b[0])
        {
            temp = b[0];
            b[0] = b[i];
            b[i] = temp;
        }
    }
    printf("%d\n",b[0]);
    return 0;
}
