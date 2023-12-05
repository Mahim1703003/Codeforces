#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int t;
    double d,a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf",&d);
        if((d*d-4*d)>=0)
        {
            a = 0.5*(d+sqrt(d*d-4.0*d));
            b = 0.5*(d-sqrt(d*d-4.0*d));
            printf("Y %0.9lf %0.9lf\n",a,b);
        }
        else
            printf("N\n");
    }
    return 0;
}
