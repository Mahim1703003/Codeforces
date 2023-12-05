#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    if(m>=n&&m<=50)
    {
        int a[m],i,j,temp;
        for(i=0;i<=m-1;i++)
            scanf("%d",&a[i]);
        for(i=0;i<=m-2;i++)
        {
            for(j=i+1;j<=m-1;j++)
            {
                if(a[j]<a[i])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        printf("%d\n",a[n-1]-a[0]);
        return 0;
    }
}
