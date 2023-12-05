#include<stdio.h>
#include<string.h>

struct channel
{
    char name[55];
    int fq;
};

int main()
{
    int t,n,i,j,l,k=0,m=0,p=0;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<=t-1;i++)
    {
        scanf("%d",&n);
        struct channel c[n],temp;
        for(j=0;j<=n-1;j++)
        {
            scanf(" %s",c[j].name);
            scanf("%d",&c[j].fq);
        }
        for(j=0;j<=n-1;j++)
        {
            for(l=j+1;l<=n-1;l++)
            {
                if(c[l].fq<c[j].fq)
                {
                    temp=c[j];
                    c[j]=c[l];
                    c[l]=temp;
                }
            }
        }
        for(j=0;j<=n-1;j++)
        {
            for(l=j+1;l<=n-1;l++)
            {
                if((c[j].fq==c[l].fq)&&(strcmp(c[j].name,c[l].name)!=0))
                    k++;
            }
            if(k>m)
            {
                p++;
                m=k;
                a[i]=c[j].fq;
            }
            k=0;
        }
        if(p==0)
        {
            a[i]=c[0].fq;
        }
        else
            p=0;
    }
    for(i=0;i<=t-1;i++)
        printf("%d\n",a[i]);
    return 0;
}

