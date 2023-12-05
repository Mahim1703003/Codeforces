#include<stdio.h>
int main()
{
    int i,j,m=0,n,l=0,k=0;
    long long int sume=0,sumo=0,temp;
    scanf("%d",&n);
    long long int b[n],a[n],odd[n],even[n];
    for(i=0;i<=n-1;i++)
    {
        scanf("%lld",&a[i]);
        if(a[i]%2==0)
        {
            sume=sume+a[i];
            even[k]=a[i];
            k++;
        }
        else
        {
            sumo=sumo+a[i];
            odd[m]=a[i];
            m++;
        }
    }
    if((sume+sumo)%2==0)
        printf("%lld\n",sume+sumo);
    else
    {
        for(i=0;i<=m-1;i++)
        {
            if((sume+sumo-odd[i])%2==0)
            {
                b[l]=sume+sumo-odd[i];
                l++;
            }
        }
        for(i=0;i<=k-1;i++)
        {
            if((sume+sumo-even[i])%2==0)
            {
                b[l]=sume+sumo-even[i];
                l++;
            }
        }
        for(i=1;i<=l-1;i++)
        {
            if(b[i]>b[0])
            {
                temp=b[0];
                b[0]=b[i];
                b[i]=temp;
            }
        }
        printf("%lld\n",b[0]);
    }
    return 0;
}
