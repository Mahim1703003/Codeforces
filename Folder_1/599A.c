#include<stdio.h>
int main()
{
    int d1,d2,d3,a,b,c,d,x,y,z;
    scanf("%d %d %d",&d1,&d2,&d3);
    a=d1+d2+d3;
    b=2*d1+2*d2;
    c=2*d1+2*d3;
    d=2*d2+2*d3;
    x=(a<b)?a:b;
    y=(x<c)?x:c;
    z=(y<d)?y:d;
    printf("%d\n",z);
    return 0;
}
