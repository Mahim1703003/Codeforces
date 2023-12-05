#include<stdio.h>
int main()
{
    int a,b,mult1,mult2,i;
    scanf("%d %d",&a,&b);
    mult1=a;
    mult2=b;
    for(i=1;i>=0;i++)
    {
        mult1=mult1*3;
        mult2=mult2*2;
        if(mult1>mult2)
            break;
    }
    printf("%d\n",i);
    return 0;
}
