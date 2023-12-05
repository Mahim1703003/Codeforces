#include<stdio.h>
int main()
{
    int s,n,i,j,temp,temp2,k=0;
    scanf("%d %d",&s,&n);
    int a[n],b[n];
    for(i=0;i<=n-1;i++)
        scanf("%d %d",&a[i],&b[i]);
    for(i=0;i<=n-2;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[i];
                temp2=b[i];
                a[i]=a[j];
                b[i]=b[j];
                a[j]=temp;
                b[j]=temp2;
            }
        }
    }
    for(i=0;i<=n-1;i++)
    {
        if(s>a[i])
        {
            s=s+b[i];
            k++;
        }
        else
            break;
    }
    if(k==n)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
