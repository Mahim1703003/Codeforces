#include<stdio.h>
#include<math.h>
int main()
{
    int n,m;
    long long int a;
    scanf("%d %d",&n,&m);
    if(n>=m)
        printf("%d\n",m);
    else
    {
        a=pow(2,n);
        printf("%d\n",m%a);
    }
    return 0;
}
