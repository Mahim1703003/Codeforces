#include<stdio.h>
int main()
{
    int n,i,sum=0;
    double avg;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=(sum*1.0)/(n*1.0);
    printf("%0.12lf\n",avg);
    return 0;
}
