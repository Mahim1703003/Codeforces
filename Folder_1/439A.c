#include<stdio.h>
int main()
{
    int n,d,i,sum=0,joke;
    scanf("%d %d",&n,&d);
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    sum=sum+(n-1)*10;
    if(sum>d)
        printf("-1\n");
    else
    {
        joke=2*(n-1)+(d-sum)/5;
        printf("%d\n",joke);
    }
    return 0;
}
