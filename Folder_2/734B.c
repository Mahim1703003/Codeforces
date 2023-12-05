#include<stdio.h>
int main()
{
    int k2,k3,k5,k6,x,y,sum,i;
    scanf("%d %d %d %d",&k2,&k3,&k5,&k6);
    x=(k2<k5)?k2:k5;
    y=(x<k6)?x:k6;
    k2=k2-y;
    x=(k2<k3)?k2:k3;
    sum=(y*256)+(x*32);
    printf("%d\n",sum);
    return 0;
}
