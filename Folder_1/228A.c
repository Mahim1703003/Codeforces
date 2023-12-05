#include<stdio.h>
int main()
{
    long long int a[4];
    int i,j,k=0;
    for(i=0;i<=3;i++)
        scanf("%lld",&a[i]);
    for(i=0;i<=3;i++)
    {
        if(a[i]!=-1){
        for(j=i+1;j<=3;j++)
        {
            if(a[i]==a[j])
                a[j]=-1;
        }
        }
    }
    for(i=0;i<=3;i++)
    {
        if(a[i]!=-1)
            k++;
    }
    printf("%d\n",4-k);
    return 0;
}
