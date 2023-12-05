#include<stdio.h>
int main()
{
    int n,step;
    scanf("%d",&n);
    step = n/5;
    if(n%5!=0)
        step++;
    printf("%d\n",step);
    return 0;
}
