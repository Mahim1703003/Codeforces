#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    int d[6],i,temp;
    d[0] = a + (b*c);
    d[1] = (a*b) + c;
    d[2] = (a+b) * c;
    d[3] = a * (b+c);
    d[4] = a * b * c;
    d[5] = a + b + c;
    for(i=1;i<=5;i++)
    {
        if(d[i]>d[0])
        {
            temp = d[0];
            d[0] = d[i];
            d[i] = temp;
        }
    }
    printf("%d\n",d[0]);
    return 0;
}
