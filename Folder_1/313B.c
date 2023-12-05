#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,q,n,m=0,l,r,sum=0;
    char a[100005];
    scanf("%s",a);
    n=strlen(a);
    int b[n];
    b[m]=0;
    m++;
    for(i=0;i<=n-2;i++)
    {
        if(a[i]==a[i+1])
            sum=sum+1;
        b[m]=sum;
        m++;
    }
    scanf("%d",&q);
    for(i=1;i<=q;i++)
    {
        scanf("%d %d",&l,&r);
        printf("%d\n",b[r-1]-b[l-1]);
    }
    return 0;
}
